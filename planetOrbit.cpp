#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;

float _angle1 = 30.0f;
//float _move = 0.0f;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glColor3d(1,0,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix(); //Save the current state of transformations //Move to the center of the triangle
	glRotatef(_angle1, 0.0, 0.0, 1.0);
	glTranslatef(0.8, 0.0, 0.0);//Rotate about the the vector (1, 2, 3)
	glColor3f(0.0,1.0,0.7);
	glBegin(GL_POLYGON);
	for(int i=0;i<360;i++){
		float pi=3.1416;
		float A=(i*2*pi)/180;
		float r=0.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///////////////////// Orbit ///////////////////////////
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
///////////////////// SUN ///////////////////////////
    glPushMatrix();
        glColor3f(1.0,0.0,0.0);
        //glScalef(2,.5,0);
        glutSolidSphere(0.3,40,40);
    glPopMatrix();

	glutSwapBuffers();
}

void update(int value) {
	_angle1 -=  2.0f;
	if (_angle1 < -360) {
		_angle1 += 360;
	}
	glutPostRedisplay(); //Tell GLUT that the display has changed
	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Orbiting planet");
	//Set handler functions
	glutDisplayFunc(drawScene);
	//glutReshapeFunc(handleResize);
	glutTimerFunc(25, update, 0); //Add a timer
	glutMainLoop();
	return 0;
}




