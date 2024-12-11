#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void display() {
    glClearColor(0.5f, 0.5f, 0.5f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    gluOrtho2D(-250,250,-250,250);//divided window

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.02f, 1.004f, 0.136f);// Green
    glVertex2f(-250,0);
    glVertex2f(250,0);

    glColor3f(0.02f, 1.004f, 0.136f);//Green
    glVertex2f(0,-250);
    glVertex2f(0,250);

    glEnd();


    gluOrtho2D(250,-250,250,250);

    glBegin(GL_QUADS); //square
    glColor3f(0.02f, 1.004f, 0.136f);//Green
    glVertex2f(-200, -50);
    glVertex2f(-200, -200);
    glVertex2f(-50, -200);
    glVertex2f(-50, -50);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.012f, 0.964f, 0.012f);//Yellow
    glVertex2f(50,100);
    glVertex2f(75,50);
    glVertex2f(125,50);
    glVertex2f(150,100);
    glVertex2f(125,150);
    glVertex2f(75,150);
    glEnd();

     // gluOrtho2D(0,250,0,250);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);// Red
    glVertex2f(-200,50);
    glVertex2f(-50,50);
    glVertex2f(-125,150);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.352f, 0.16f, 0.032f);// deep red
    glVertex2f(100,-200);
    glVertex2f(180,-200);
    glVertex2f(140,-70);
    glEnd();





    glFlush(); // Render now
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow("QUADS, POLYGON, TRIANGLES"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}

