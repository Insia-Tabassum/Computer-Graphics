#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
// Function to set up the display
void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

    // Draw the black stripe
    glColor3f(0.0, 0.0, 0.0); // black
    glBegin(GL_QUADS); //  rectangle
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, 0.30);
        glVertex2f(-1.0, 0.30);

    glEnd();

     // white stripe
    glColor3f(1.0, 1.0, 1.0); //  white
    glBegin(GL_QUADS);
        glVertex2f(1.0, -0.33);
        glVertex2f(-1.0, 0.33);
        glVertex2f(-1.0, -0.33);
        glVertex2f(1.0, 0.33);
    glEnd();

     // green stripe
    glColor3f(0.13, 0.54, 0.13); //  green
    glBegin(GL_QUADS); //  rectangle
        glVertex2f(-1.0, -1.0); // Bottom-left corner
        glVertex2f(1.0, -1.0);  // Bottom-right corner
        glVertex2f(1.0, -0.33); // Top-right corner
        glVertex2f(-1.0, -0.33);// Top-left corner
    glEnd();



     // red triangle
    glColor3f(1.0, 0.0, 0.0); //  red
    glBegin(GL_TRIANGLES); // triangle
        glVertex2f(-1.0, 1.0);  // Top corner
        glVertex2f(-1.0, -1.0); // Bottom corner
        glVertex2f(0.0, 0.0);
        glVertex2f(-1.0, 1.0);
    glEnd(); //


    glFlush(); // Render the shapes on the screen
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(900, 600); // Set window size
    glutCreateWindow( "Palestine Flag"); // Create a window
    glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to white
    glOrtho(-1, 1, -1, 1, -1, 1); // Set up the coordinate system
    glutDisplayFunc(display); // Set the display function
    glutMainLoop(); // Enter the main loop
    return 0;
}
