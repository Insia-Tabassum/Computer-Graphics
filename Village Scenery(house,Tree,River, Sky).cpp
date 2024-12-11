#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void display() {


    glClearColor(0.54f, 0.824f, 0.94f, 0.0f);// beground color sky blue
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


     // Draw the grass
    glColor3f(0.252f, 0.62f, 0.044f); //Grass Green
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
    glEnd();



    // Draw the river
    glColor3f(0.0f, 0.764f, 1.02f); // deep sky blue
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(-1.0f, -1.0f);
    glEnd();





    // Roof
    glBegin(GL_TRIANGLES);
     glColor3f(0.4f, 0.4f, 0.4f); // Gray
        glVertex2f(0.25, 0.5);
        glVertex2f(0.75, 0.5);
        glVertex2f(0.5, 0.75);
    glEnd();

    // House body
    glBegin(GL_QUADS);
     glColor3f(1.008f, 0.896f, 0.928f); // rose pink
        glVertex2f(0.2, 0.2);
        glVertex2f(0.8, 0.2);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.2, 0.5);
    glEnd();

    // Door
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f); // black
        glVertex2f(0.35, 0.2);
        glVertex2f(0.65, 0.2);
        glVertex2f(0.65, 0.4);
        glVertex2f(0.35, 0.4);
    glEnd();

    // Door handle
    glBegin(GL_QUADS);
       glColor3f(0.768f, 0.768f, 0.768f); // silver
        glVertex2f(0.55, 0.3);
        glVertex2f(0.6, 0.3);
        glVertex2f(0.6, 0.35);
        glVertex2f(0.55, 0.35);
    glEnd();

    // Windows
    glBegin(GL_QUADS);
       glColor3f(0.82f, 0.508f, 0.2f); // bronze
        glVertex2f(0.25, 0.4);
        glVertex2f(0.4, 0.4);
        glVertex2f(0.4, 0.5);
        glVertex2f(0.25, 0.5);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(0.204f, 0.204f, 1.02f); // lavender
        glVertex2f(0.6, 0.4);
        glVertex2f(0.75, 0.4);
        glVertex2f(0.75, 0.5);
        glVertex2f(0.6, 0.5);
    glEnd();

    // Window panes (lines)
    glBegin(GL_LINES);
       glColor3f(0.408f, 0.204f, 0.0f); // brown
        glVertex2f(0.3, 0.4);
        glVertex2f(0.3, 0.5);
        glVertex2f(0.35, 0.4);
        glVertex2f(0.35, 0.5);
        glVertex2f(0.25, 0.45);
        glVertex2f(0.4, 0.45);

        glVertex2f(0.65, 0.4);
        glVertex2f(0.65, 0.5);
        glVertex2f(0.7, 0.4);
        glVertex2f(0.7, 0.5);
        glVertex2f(0.6, 0.45);
        glVertex2f(0.75, 0.45);
    glEnd();








     glFlush(); // Render now

    }


void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,800,0,600);
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800,600); // Set the window's initial width & height
    glutInitWindowPosition(0,0);  // Set the window's initial position according to the monitor
    glutCreateWindow("Scenario"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}

