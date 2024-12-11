#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void display() {


glClearColor(0.320f, 0.78, 00.27f,0.0f);// Set background color to green
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
     glLineWidth(1);



                     glBegin(GL_POLYGON);
                  glColor3f(0.45f, 0.66, 0.94f);
                     glVertex2f(00,600);
                     glVertex2f(1200,600);
                    glVertex2f(1200, 320);
                     glVertex2f(00,340);
                    //glVertex2f(700,320);

                    glEnd();


//river
                 glBegin(GL_POLYGON);
                    glColor3f(0.267f, 0.62f, 0.77f);
                    glVertex2f(400,0);
                    glVertex2f(1200, 00);
                    glVertex2f(1200,430);
                     glVertex2f(1000,370);
                     glVertex2f(800,270);
                    glEnd();



glBegin(GL_QUADS);  // lower part of home
         glColor3f(0.23f, 0.20f, 0.13f);
         glVertex2f(445,350);
        glVertex2f(260, 345);
        glVertex2f(260,250);
        glVertex2f(445, 250);

        glEnd();


          glBegin(GL_POLYGON);  // home
                glColor3f(0.80f, 0.41f, 0.14f);
               glVertex2f(260, 345);
               glVertex2f(260,250);
                glVertex2f(145,270);
                glVertex2f(145,357);
                glVertex2f(225,435);
                glEnd();

                  glBegin(GL_QUADS);  // door
                    glColor3f(0.9f, 0.6f, 0.59f);
                    glVertex2f(355,250);
                    glVertex2f(390, 250);
                    glVertex2f(390,310);
                    glVertex2f(355, 310);
                    glEnd();

                     glBegin(GL_QUADS);  // window
                    glColor3f(0.9f, 0.6f, 0.59f);
                    glVertex2f(300,280);
                    glVertex2f(330, 280);
                    glVertex2f(330,310);
                    glVertex2f(300, 310);
                    glEnd();

                     glBegin(GL_QUADS);  // window
                    glColor3f(0.9f, 0.6f, 0.59f);
                    glVertex2f(180,295);
                    glVertex2f(210, 290);
                    glVertex2f(210,325);
                    glVertex2f(180, 321);
                    glEnd();


glBegin(GL_QUADS);  // chal
glColor3f(0.35f, 0.15f, 0.15f);
glVertex2f(200,450);
glVertex2f(225,435);
glVertex2f(130,345);
glVertex2f(145, 360);
glEnd();

glBegin(GL_QUADS);  // chal Main
glColor3f(0.53f, 0.46f, 0.44f);
glVertex2f(200,450);
glVertex2f(400, 450);
glVertex2f(454,350);
glVertex2f(250, 345);
glEnd();


                      glBegin(GL_POLYGON);// tree
                    glColor3f(.38f, 0.19f, .08f); // tree color
                    glVertex2f(70,270);
                    glVertex2f(115,270);
                    glVertex2f(110,320);
                    glVertex2f(115,350);
                    glVertex2f(77, 350);
                    glVertex2f(75,300);

                    glEnd();




                     glBegin(GL_TRIANGLES);

                        glColor3f(.26f, 0.44f, .18f); // leaf
                        glVertex2f(47, 350);
                        glVertex2f(138, 350);
                        glVertex2f( 100,450);
                        glEnd();
                        glBegin(GL_TRIANGLES);

                        glColor3f(.27f, 0.46f, .18f); // leaf
                        glVertex2f(50, 380);
                        glVertex2f(135, 380);
                        glVertex2f( 98,480);
                        glEnd();
                         glBegin(GL_TRIANGLES);

                        glColor3f(.27f, 0.49f, .18f); // leaf
                        glVertex2f(51, 410);
                        glVertex2f(135, 410);
                        glVertex2f( 97,510);
                                                    glEnd();
glBegin(GL_POLYGON);  // Begin drawing a polygon
glColor3f(0.80f, 0.41f, 0.14f);  // Set color for the sun or home shape

// Define vertices for a circle shape with 10 points
glVertex2f(1000, 550);    // 0° (Top)
glVertex2f(1033, 530); // 36° (Top-right)
glVertex2f(1048, 500);     // 72° (Right)
glVertex2f(1031.8, 469.1); // 108° (Bottom-right)
glVertex2f(1000, 455);     // 144° (Bottom)
glVertex2f(968.2, 469.1);  // 180° (Bottom-left)
glVertex2f(950, 500);      // 216° (Left)
glVertex2f(968,530); // 252° (Top-left)
    // 288° (Top, repeating the first point to close the shape)
glEnd();
                            /*


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



*/
                                                            ;

     glFlush(); // Render now

    }


void init() {
    glClearColor(01.0, 01.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-0,1200,-0,600);
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200,600); // Set the window's initial width & height
    glutInitWindowPosition(30,20);  // Set the window's initial position according to the monitor
    glutCreateWindow("Home"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
