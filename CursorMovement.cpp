#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
using namespace std;
int ballx=0;
int bally=0;
void mouseMotion(int x, int y)
{
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    ballx = x;
    bally = windowHeight-y;
    cout<<x<<", "<<windowHeight-y<<endl;
}
void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(7);
	glBegin(GL_POINTS);
		glVertex3f((float)ballx/800, (float)bally/480, 0.0);
	glEnd();
	glFlush(); // glFlush() is generally called at the end of a sequence of drawing commands to ensure all objects in the scene are drawn before beginning to accept user input.
    glutPostRedisplay();
}

void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0); // left, right, bottom, top, near and far
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("cse 404");
	Initialize();
	glutDisplayFunc(Draw);
	glutPassiveMotionFunc(mouseMotion);
	glutMainLoop();
	return 0;
}
