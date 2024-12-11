#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
// Function to set up the display
void display() {

   glClearColor(1.0f, 0.0f, 0.0f, 0.0f);  // Background color
    glClear(GL_COLOR_BUFFER_BIT);


    // Square

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.488f, 0.308f); // RGB(0, 122, 77)//Green
    glVertex2f(0, 0);
    glVertex2f(0, -600);
    glVertex2f(400, 300);
    glVertex2f(0, 128);
     glVertex2f( 128, 0);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1.02f, 0.736f, 0.112f); // RGB(255, 184, 28)  //Yellow
    glVertex2f(0, 400);
    glVertex2f(800, 600);
    glVertex2f(400, 600);
    glVertex2f(255, 204), 0;
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f); // RGB(0, 0, 0)// Black
    glVertex2f(0, 0);
    glVertex2f(400, 300);
    glVertex2f(0, 600);
    glVertex2f(0, 600);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(0.896f, 0.24f, 0.196f); // RGB(224, 60, 49)// RED
    glVertex2f(400, 0);
    glVertex2f(255, 0);
     glVertex2f(0, 0);
   glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.08f, 0.548f); //RGB(0, 20, 137)// Blue color
    glVertex2f(0, 0);
    glVertex2f(0,  255);
     glVertex2f( 255, 0);
   glEnd();



    glFlush();

}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); // Clear color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-400, 400, -150, 150); // Setting the projection range
}


// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode
    glutInitWindowSize(800, 600); // Set window size
    glutCreateWindow( "South Africa Flag"); // Create a window
    glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to white
    glOrtho(-1, 1, -1, 1, -1, 1); // Set up the coordinate system
    glutDisplayFunc(display); // Set the display function
    glutMainLoop(); // Enter the main loop
    return 0;
}
