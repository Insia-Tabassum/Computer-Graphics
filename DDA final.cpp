#include <iostream>
#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h>
#include<math.h>
#include <stdio.h> // GLUT, include glu.h and gl.h
using namespace std;

void display() {

     glClearColor(0.408f, 0.816f, 1.02f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


     int x1;
     int x2;
     int y1;
     int y2;
     int x;
     int y;

     cout<< "enter the value x1:"<<endl;
     cin>>x1;

     cout<< "enter the value x2:"<<endl;
     cin>>x2;

     cout<< "enter the value y1:"<<endl;
     cin>>y1;

     cout<< "enter the value y2:"<<endl;
     cin>>y2;

     float mod = (float)((y2-y1)/(x2-x1));
     cout<<"mod"<<mod<<endl;


     glPointSize(4.0f);
     glBegin(GL_POINTS);
     glColor3b(0.0f,0.1f,0.0f);
     gluOrtho2D(-10, 10, -10, 10);


             if (mod == 1)
                {
                    x = x1;
                    y = y1;
                    while (x<=x2)
                    {
                        glVertex2f(x++, y++);
                    }
                }


                else if (mod < 1)
                 {
                    float y = y1;
                    x = x1;
                    while (x<=x2)
                    {
                        glVertex2f(x++, round(y));
                        y = y+mod;
                    }
                 }


             else {
                    float x = x1;
                    y = y1;
                    while (y<=y2)
                    {
                        glVertex2f(round(x), y++);
                        x = x+ (1 / mod);
                    }
                }


     glEnd();
    glFlush();

}
    void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(400,400); // Set the window's initial width & height
    glutInitWindowPosition(0,0);  // Set the window's initial position according to the monitor
    glutCreateWindow("DDA"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
