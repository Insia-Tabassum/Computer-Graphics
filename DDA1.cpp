#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

int X1, Y1, X2, Y2;
void DDA(void)
{
    double dx=(X2-X1),dy=(Y2-Y1),l;
    float xInc,yInc,x=X1,y=Y1;

    if(abs(dx)>abs(dy))
        l=(abs(dx));
    else
        l=(abs(dy));
    xInc=dx/l;
    yInc=dy/l;
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(2); //VERTICAL
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-250,0);
    glVertex2f(250,0);
    glVertex2f(0,-250);
    glVertex2f(0,250);
    glEnd();



    glBegin(GL_POINTS);
    glVertex2d(x,y);
    for(int i=0; i<l; i++)
    {
        x+=xInc;
        y+=yInc;
        glVertex2d(round(x), round(y));
    }
    glEnd();
    glFlush();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-20.0, 20.0,-20.0, 20.0);
//    gluOrtho2D(0.0, 640.0,0.0, 480.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (200, 150);
    glutCreateWindow ("DDA Line");
    cout<<"Enter an initial points:\t";
    cin>>X1;
    cin>>Y1;
    cout<<"Enter the final points:\t";
    cin>>X2;
  cin>>Y2;
    glutDisplayFunc(DDA);
    myInit ();
    glutMainLoop();
}
