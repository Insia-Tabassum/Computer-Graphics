#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <iostream>
#include <stdlib.h>
#include<math.h>

float bx= 50;
float ax= 370;
void Display( ){

    glClearColor(0.172f, 0.664f, 0.056f,0.0f);// Set background color to green
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
     glLineWidth(1);

}

void clouds(int value){
    glPushMatrix();
    //glTranslatef(bx, 0, 0);


    glPopMatrix();
    ax +=2;
    if(ax>530){
        ax = 370;
    }
        //ax=-500;

    glutTimerFunc(25, clouds, 0);
    glutPostRedisplay();

}
void sun() {

    glPushMatrix(); //Save the current state of transformations //Move to the center of the triangle
	//glRotatef(_angle1, 0.0, 0.0, 1.0);
	glTranslatef(325, ax, 0.0);//Rotate about the the vector (1, 2, 3)
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<360;i++){
		float pi=3.1416;
		float A=(i*2*pi)/360;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

}

void init(void ){
    glClearColor(0.0,0.9,0.9,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 500, 0,500);

}

void boat(){
    glPushMatrix();
    glTranslatef(bx, 1.0, 1.0);

    glColor3f(0.0f,0.0f,0.0f);//black
    glBegin(GL_POLYGON);
    glVertex2f(320,220);
     glVertex2f(400,220);
      glVertex2f(425,250);
       glVertex2f(300,250);
       glEnd();


        glColor3f(0.836f, 0.388f, 0.74f);//Pink
    glBegin(GL_POLYGON);
    glVertex2f(325,250);
     glVertex2f(400,250);
      glVertex2f(390,280);
       glVertex2f(335,280);
       glEnd();

        glColor3f(0.64f,0.328f,0.18f);//Sienna
    glBegin(GL_POLYGON);
    glVertex2f(360,280);
     glVertex2f(370,280);
      glVertex2f(370,310);
       glVertex2f(360,310);
       glEnd();



       glPopMatrix();

       bx +=0.13;
       if(bx>500)
        bx= -550;
       glutPostRedisplay();

}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //Ground Color
     glColor3f(0,1.02f,0);//Green
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
     glVertex2f(500,0);
      glVertex2f(500,330);
       glVertex2f(0,330);
       glEnd();

       //River
        glColor3f(0.4f,0.596f,0.948f);//sky blue
    glBegin(GL_POLYGON);
    glVertex2f(300,200);
     glVertex2f(250,100);
      glVertex2f(400,100);
       glVertex2f(400,300);
       glEnd();

        glColor3f(0.4f,0.596f,0.948f);//sky blue
    glBegin(GL_POLYGON);
    glVertex2f(200,100);
     glVertex2f(250,100);
      glVertex2f(400,100);
       glVertex2f(450,100);
       glEnd();

        glColor3f(0.4f,0.596f,0.948f);//sky blue
    glBegin(GL_POLYGON);
    glVertex2f(-40,200);
     glVertex2f(0,450);
      glVertex2f(500,450);
       glVertex2f(500,200);
       glEnd();

       //Hills 1
        glColor3f(0.316f,0.276f,0.204f);//gray
    glBegin(GL_POLYGON);
   // glVertex2f(0,0);
     glVertex2f(-40,300);
      glVertex2f(200,300);
       glVertex2f(100,450);
       glEnd();

        //Hills 2
        glColor3f(0.316f,0.276f,0.204f);//gray
    glBegin(GL_POLYGON);
    glVertex2f(150,300);
      glVertex2f(350,300);
       glVertex2f(250,450);
       glEnd();

       //Hills 3
    glColor3f(0.316f,0.276f,0.204f);//gray
    glBegin(GL_POLYGON);
    glVertex2f(300,300);
      glVertex2f(520,300);
       glVertex2f(400,450);
       glEnd();

       //Boat design function call
       boat();
       // Tree
        glColor3f(0.556f,0.276f,0.076f);//Brown
    glBegin(GL_POLYGON);
    glVertex2f(50,150);
     glVertex2f(75,150);
      glVertex2f(75,300);
       glVertex2f(50,300);
       glEnd();





       //1st House
        glColor3f(0.64f,0.328f,0.18f);//shenna
    glBegin(GL_POLYGON);
    glVertex2f(0,220);
     glVertex2f(135,220);
      glVertex2f(110,270);
       glVertex2f(25,270);
       glEnd();

        glColor3f(1.02f,0.888f,0.692f);//navajo white
    glBegin(GL_POLYGON);
    glVertex2f(10,220);
     glVertex2f(50,220);
      glVertex2f(25,255);
      glEnd();

       glColor3f(1.02f,0.888f,0.692f);//navajo white
    glBegin(GL_POLYGON);
    glVertex2f(10,150);
     glVertex2f(50,150);
      glVertex2f(50,220);
       glVertex2f(10,220);
       glEnd();

        glColor3f(0.888f,0.736f,0.54f);//Burlywood
    glBegin(GL_POLYGON);
    glVertex2f(50,150);
     glVertex2f(125,150);
      glVertex2f(125,220);
       glVertex2f(50,220);
       glEnd();


       //1st house door and window
        glColor3f(0.69f,0.329f,0.98f);//shenna
    glBegin(GL_POLYGON);
    glVertex2f(75,150);
     glVertex2f(95,150);
      glVertex2f(95,195);
       glVertex2f(75,195);
       glEnd();

        glColor3f(0.64f,0.328f,0.18f);//shenna
    glBegin(GL_POLYGON);
    glVertex2f(20,200);
     glVertex2f(35,200);
      glVertex2f(35,175);
       glVertex2f(20,175);
       glEnd();

       //road design
       glBegin(GL_QUADS);//gray road
    glColor3f(0.2f,0.2f,0.2f);
    glVertex2f(0,30);
    glVertex2f(900,30);
    glVertex2f(900,80);
    glVertex2f(0,80);
    glEnd();

    glBegin(GL_LINES);//Road top bar
    glLineWidth(2);
	glColor3f(1.0,1.0,1.0);
    glVertex2i(0,81);
    glVertex2i(900,81);
    glEnd();



    glBegin(GL_LINES);//Road Bottop bar
    glLineWidth(2);
	glColor3f(1.0,1.0,1.0);
    glVertex2i(0,50);
    glVertex2i(900,50);
    glEnd();

       sun();
       //counds function
       //clouds();
       glFlush();
       glutSwapBuffers();


}



/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(900,500); // Set the window's initial width & height
    glutInitWindowPosition(100,100);  // Set the window's initial position according to the monitor
    glutCreateWindow("Village Scenery"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutTimerFunc(25, clouds, 0);
    glutMainLoop(); // Enter the event-processing loop


    return 0;
}










