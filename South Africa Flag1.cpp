#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void display() {
    glClearColor(0.0f, 0.48f, 0.3f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

     gluOrtho2D(0,900,0,600);

     glBegin(GL_QUADS);

    glColor3f(0.0f, 0.14f, 0.58f);
    glVertex2f(900,0);
    glVertex2f(900,200);
    glVertex2f(470,200);
    glVertex2f(150,0);
    glEnd();



    glBegin(GL_QUADS);

    glColor3f(0.87f, 0.22f, 0.19f);
    glVertex2f(900,400);
    glVertex2f(900,600);
    glVertex2f(150,600);
    glVertex2f(470,400);
    glEnd();



   // White color for the star

  glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //white star
	glVertex2f(470, 200);
	glVertex2f(900, 200);
    glVertex2f(900, 240);
    glVertex2f(460, 240);
	glVertex2f(90, 0);
	glVertex2f(150, 0);
    glVertex2f(470, 200);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //white star

	glVertex2f(460, 360);
	glVertex2f(900, 360);
    glVertex2f(900, 400);
    glVertex2f(470, 400);
	glVertex2f(150, 600);
	glVertex2f(90, 600);
    glVertex2f(470, 360);


    glEnd();


     glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.71f, 0.07f);
    glVertex2f(0,50);
    glVertex2f(0,550);
    glVertex2f(350,300);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glVertex2f(0,80);
    glVertex2f(0,500);
    glVertex2f(300,300);

    glEnd();



   glFlush(); // Render now
}


     int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(900,600); // Set the window's initial width & height
    glutInitWindowPosition(150,150);  // Set the window's initial position according to the monitor
    glutCreateWindow("South Africa Flag"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}

