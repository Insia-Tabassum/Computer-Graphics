
#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
//#include <stdio.h>



void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 1.0, 0.0);
    //glPointSize(4.0);

    glBegin(GL_QUADS);
    glVertex2i(75, 75);
    glVertex2i(175, 75);
    glVertex2i(175, 175);
    glVertex2i(75, 175);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(250, 250);
    glVertex2i(350, 250);
    glVertex2i(300, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (1.0, 0.0, 1.0);
    glVertex2i(300, 320);
    glVertex2i(400, 320);
    glVertex2i(350, 420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 0.0);
    glVertex2i(112.5, 112.5);
    glVertex2i(262.5, 112.5);
    glVertex2i(262.5, 262.5);
    glVertex2i(112.5, 262.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2i(125, 125);
    glVertex2i(175, 125);
    glVertex2i(150, 175);
    glEnd();
    glFlush();
}

void myInit (void){
    glClearColor(0.5, 0.5, 0.5, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500.0, 0, 500.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (400, 100);
    glutCreateWindow ("my first attempt");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
