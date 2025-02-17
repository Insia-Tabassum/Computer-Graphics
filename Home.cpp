#include <GL/gl.h>
#include <GL/glut.h>

void display () {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* future matrix manipulations should affect the modelview matrix */
    glMatrixMode(GL_MODELVIEW);

    /* draw scene */
    glPushMatrix();
    //glScalef(0.33,0.33,0.33);
    // house
    glPushMatrix();
    glutSolidCube(2);                 // building

    glTranslatef(0,1,0);
    glColor3f(0.0,0.0,1.0);
    glPushMatrix();                   // roof
    glRotatef(-90,1,0,0);
    glutSolidCone(1.6,1,16,8);
    glPopMatrix();

    glTranslatef(.75,.5,-.75);
    glColor3f(0.0,1.0,0.5);
    glPushMatrix();                   // chimney
    glScalef(1,3,1);
    glRotatef(90,1,0,0);
    glutSolidCube(.25);
    glPopMatrix();
    glPopMatrix();

    glTranslatef(0,-.65,2);

    // car
    glPushMatrix();

    glColor3f(1.0,0.6,0.2);
    glPushMatrix();                   // body
    glScalef(2,.5,1);
    glutSolidCube(.5);
    glPopMatrix();

    glTranslatef(0,0,.25);

    glColor3f(1.0,0.0,1.0);
    glPushMatrix();
    glTranslatef(-.4,-.2,0);
    glutSolidTorus(.05,.1,8,8);       // wheel

    glTranslatef(.8,0,0);
    glutSolidTorus(.05,.1,8,8);       // wheel
    glPopMatrix();

    glTranslatef(0,0,-.5);

    glPushMatrix();
    glTranslatef(-.4,-.2,0);
    glutSolidTorus(.05,.1,8,8);       // wheel

    glTranslatef(.8,0,0);
    glutSolidTorus(.05,.1,8,8);       // wheel
    //glMap1f(GL_MAP1_VERTEX_3,0,1,3,3,&ctrlpoints[0][0]);
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();


   /* glTranslatef(2,0,0);
    glColor3f(0.0,1.0,0.5);
    glPushMatrix();                   // chimney
    glScalef(.5,5,.5);
    glRotatef(-75,1,1,1);
    glutSolidCube(.25);
    glPopMatrix();
    glPopMatrix();*/

    /* flush drawing routines to the window */
    glFlush();
}

void reshape ( int width, int height ) {

    /* define the viewport transformation */
    glViewport(0,0,width,height);
}

void myInit()
{
    /* set up depth-buffering */
    glEnable(GL_DEPTH_TEST);

    /* turn on default lighting */
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    /* define the projection transformation */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40,1,4,20);

    /* define the viewing transformation */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(5.0,2.0,10.0,0.0,0.0,0.0,0.0,1.0,0.0);
}

int main ( int argc, char * argv[] ) {

    /* initialize GLUT, using any commandline parameters passed to the
       program */
    glutInit(&argc,argv);

    /* setup the size, position, and display mode for new windows */
    glutInitWindowSize(800,700);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);

    /* create and set up a window */
    glutCreateWindow("home sweet home!");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    myInit();

    /* tell GLUT to wait for events */
    glutMainLoop();
}
