#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void display() {
    glClearColor(0.5f, 0.5f, 0.5f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)





     gluOrtho2D(0,400,0,400);

    glBegin(GL_QUADS);//square
    int flag=0;
    for(int y=0;y<400;y+=50){
        for(int x=0;x<400;x+=50){
        if(flag == 0){
            glColor3f(0.0f, 0.0f, 0.0f);flag = 1;//Black
        }
        else{
            glColor3f(1.0f,1.0f,1.0f);flag=0;//White
        }
        glVertex2f(x,y);
        glVertex2f(x+50, y);
        glVertex2f(x+50 , y+50);
        glVertex2f(x , y+50);

     }
     if (flag ==0){
        flag=1;
     }
     else{
        flag=0;
     }
    }


    glEnd();
    glFlush(); // Render now
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(400, 400); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow("Chess Board"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}

