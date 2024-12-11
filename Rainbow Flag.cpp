#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
    glBegin(GL_QUADS); // Start drawing quads

    // Define colors for each stripe
    float colors[6][3] = {
        {1.0, 0.0, 0.0}, // Red
        {1.0, 0.5, 0.0}, // Orange
        {1.0, 1.0, 0.0}, // Yellow
        {0.13, 0.54, 0.13}, // Green
        {0.0, 0.0, 1.0}, // Blue
        {0.5, 0.0, 0.5}  // Purple
    };

    // Draw 6 horizontal stripes
    for (int i = 0; i < 6; i++)
    {
        glColor3f(colors[i][0], colors[i][1], colors[i][2]); // Set color for each stripe
        glVertex2f(0.0, 1.0 - i * (1.0 / 6)); // Bottom left
        glVertex2f(1.0, 1.0 - i * (1.0 / 6)); // Bottom right
        glVertex2f(1.0, 1.0 - (i + 1) * (1.0 / 6)); // Top right
        glVertex2f(0.0, 1.0 - (i + 1) * (1.0 / 6)); // Top left
    }

    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0); // Set background color to white
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0); // Set up an orthographic projection
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1228, 759); // Set the window size
    glutInitWindowPosition(100, 100); // Set the window position
    glutCreateWindow("Rainbow Flag"); // Create the window with a title
    init();
    glutDisplayFunc(display); // Register the display callback
    glutMainLoop(); // Enter the main loop
    return 0;
}


