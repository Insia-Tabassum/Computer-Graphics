#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void display() {


    glClearColor(0.078f, 0.416, 0.306f,0.0f); // Set background color to green
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
     glLineWidth(1);

glBegin(GL_QUADS);  // Set quad color to yellow
glColor3f(01.0f, 0.82f, 0.0f);
glVertex2f(0, 360);
glVertex2f(0, 480);
glVertex2f(1000,480);
glVertex2f(1000, 360);
glEnd();

                glBegin(GL_QUADS);  // Set quad color to yellow
                glColor3f(01.0f, 0.82f, 0.0f);
                glVertex2f(0,120);
                glVertex2f(0, 240);
                glVertex2f(1000,240);
                glVertex2f(1000,120);
                glEnd();


  glBegin(GL_QUADS);
    glColor3f(0.84f, 0.064f, 0.208f); // Red color
    glVertex2f(0, 240);
    glVertex2f(0, 600);
    glVertex2f(400,600);
    glVertex2f(400, 240);
    glEnd();

                           //STAR

                       glBegin(GL_TRIANGLES);
                       glColor3f(1.0f, 1.0f, 1.0f); // White

                        glVertex2f(100, 480);
                        glVertex2f(300, 480);
                        glVertex2f(200, 380);
                        glEnd();

                        glBegin(GL_QUADS);
                       glColor3f(1.0f, 1.0f, 1.0f); // White

                        glVertex2f(275,330 );
                        glVertex2f(200, 380);
                        glVertex2f(125, 330);
                        glVertex2f(200, 550);
                        glEnd();







     glFlush(); // Render now

    }


void init() {
    glClearColor(01.0, 01.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-0,1000,-0,600);
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000,600); // Set the window's initial width & height
    glutInitWindowPosition(30,20);  // Set the window's initial position according to the monitor
    glutCreateWindow("Togo"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
