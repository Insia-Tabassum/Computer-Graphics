#include <stdio.h>
#include <GL/gl.h>>
#include <GL/glut.h>



void batMan(void)
{
    // black

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(160, 40);    // x, y
	glVertex2i(500, 40);    // x, y
    glVertex2i(500, 460);    // x, y
	glVertex2i(160, 460);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(20, 180);    // x, y
	glVertex2i(640, 180);    // x, y
    glVertex2i(640, 320);    // x, y
	glVertex2i(20, 320);
	glEnd();

	//left upper
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(40, 320);    // x, y
	glVertex2i(160, 320);    // x, y
    glVertex2i(160, 340);    // x, y
	glVertex2i(40, 340);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(60, 340);    // x, y
	glVertex2i(160, 340);    // x, y
    glVertex2i(160, 360);    // x, y
	glVertex2i(60, 360);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f); //Green total
    glVertex2i(80, 360);    // x, y
	glVertex2i(160, 360);    // x, y
    glVertex2i(160, 380);    // x, y
	glVertex2i(80, 380);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(100, 380);    // x, y
	glVertex2i(160, 380);    // x, y
    glVertex2i(160, 400);    // x, y
	glVertex2i(100, 400);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(120, 400);    // x, y
	glVertex2i(160, 400);    // x, y
    glVertex2i(160, 420);    // x, y
	glVertex2i(120, 420);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(140, 420);    // x, y
	glVertex2i(160, 420);    // x, y
    glVertex2i(160, 440);    // x, y
	glVertex2i(140, 440);
	glEnd();


	//right upper corner

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 320);    // x, y
	glVertex2i(620, 320);    // x, y
    glVertex2i(620, 340);    // x, y
	glVertex2i(500, 340);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 340);    // x, y
	glVertex2i(600, 340);    // x, y
    glVertex2i(600, 360);    // x, y
	glVertex2i(500, 360);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 360);    // x, y
	glVertex2i(580, 360);    // x, y
    glVertex2i(580, 380);    // x, y
	glVertex2i(500, 380);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 380);    // x, y
	glVertex2i(560, 380);    // x, y
    glVertex2i(560, 400);    // x, y
	glVertex2i(500, 400);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 400);    // x, y
	glVertex2i(540, 400);    // x, y
    glVertex2i(540, 420);    // x, y
	glVertex2i(500, 420);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 420);    // x, y
	glVertex2i(520, 420);    // x, y
    glVertex2i(520, 440);    // x, y
	glVertex2i(500, 440);
	glEnd();

	//left lower //up to down

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(40, 160);    // x, y
	glVertex2i(160, 160);    // x, y
    glVertex2i(160, 180);    // x, y
	glVertex2i(40, 180);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(60, 140);    // x, y
	glVertex2i(160, 140);    // x, y
    glVertex2i(160, 160);    // x, y
	glVertex2i(60, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(80, 120);    // x, y
	glVertex2i(160, 120);    // x, y
    glVertex2i(160, 140);    // x, y
	glVertex2i(80, 140);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(100, 100);    // x, y
	glVertex2i(160, 100);    // x, y
    glVertex2i(160, 120);    // x, y
	glVertex2i(100, 120);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(120, 80);    // x, y
	glVertex2i(160, 80);    // x, y
    glVertex2i(160, 100);    // x, y
	glVertex2i(120, 100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(140, 60);    // x, y
	glVertex2i(160, 60);    // x, y
    glVertex2i(160, 80);    // x, y
	glVertex2i(140, 80);
	glEnd();

	//  right lower black

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 160);    // x, y
	glVertex2i(620, 160);    // x, y
    glVertex2i(620, 180);    // x, y
	glVertex2i(500, 180);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 140);    // x, y
	glVertex2i(600, 140);    // x, y
    glVertex2i(600, 160);    // x, y
	glVertex2i(500, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 120);    // x, y
	glVertex2i(580, 120);    // x, y
    glVertex2i(580, 140);    // x, y
	glVertex2i(500, 140);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 100);    // x, y
	glVertex2i(560, 100);    // x, y
    glVertex2i(560, 120);    // x, y
	glVertex2i(500, 120);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 80);    // x, y
	glVertex2i(540, 80);    // x, y
    glVertex2i(540, 100);    // x, y
	glVertex2i(500, 100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(500, 60);    // x, y
	glVertex2i(520, 60);    // x, y
    glVertex2i(520, 80);    // x, y
	glVertex2i(500, 80);
	glEnd();

	//Yellow color

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //left yellow
    glVertex2i(40, 320);    // x, y
	glVertex2i(60, 320);    // x, y
    glVertex2i(60, 180);    // x, y
	glVertex2i(40, 180);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //right yellow
    glVertex2i(600, 180);    // x, y
	glVertex2i(620, 180);    // x, y
    glVertex2i(620, 320);    // x, y
	glVertex2i(600, 320);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down yellow
    glVertex2i(160, 60);    // x, y
	glVertex2i(500, 60);    // x, y
    glVertex2i(500, 80);    // x, y
	glVertex2i(160, 80);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down yellow
    glVertex2i(140, 80);    // x, y
	glVertex2i(200, 80);    // x, y
    glVertex2i(200, 100);    // x, y
	glVertex2i(140, 100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down yellow
    glVertex2i(460, 80);    // x, y
	glVertex2i(520, 80);    // x, y
    glVertex2i(520, 100);    // x, y
	glVertex2i(460, 100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(240, 80);    // x, y
	glVertex2i(300, 80);    // x, y
    glVertex2i(300, 140);    // x, y
	glVertex2i(240, 140);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(220, 80);    // x, y
	glVertex2i(240, 80);    // x, y
    glVertex2i(240, 120);    // x, y
	glVertex2i(220, 120);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(260, 140);    // x, y
	glVertex2i(280, 140);    // x, y
    glVertex2i(280, 160);    // x, y
	glVertex2i(260, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(300, 80);    // x, y
	glVertex2i(320, 80);    // x, y
    glVertex2i(320, 100);    // x, y
	glVertex2i(300, 100);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(360, 80);    // x, y
	glVertex2i(420, 80);    // x, y
    glVertex2i(420, 140);    // x, y
	glVertex2i(360, 140);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(340, 80);    // x, y
	glVertex2i(360, 80);    // x, y
    glVertex2i(360, 100);    // x, y
	glVertex2i(340, 100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(380, 140);    // x, y
	glVertex2i(400, 140);    // x, y
    glVertex2i(400, 160);    // x, y
	glVertex2i(380, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //down
    glVertex2i(420, 80);    // x, y
	glVertex2i(440, 80);    // x, y
    glVertex2i(440, 120);    // x, y
	glVertex2i(420, 120);
	glEnd();


	//Upper
    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(160, 420);    // x, y
	glVertex2i(500, 420);    // x, y
    glVertex2i(500, 440);    // x, y
	glVertex2i(160, 440);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(220, 320);    // x, y
	glVertex2i(280, 320);    // x, y
    glVertex2i(280, 420);    // x, y
	glVertex2i(220, 420);
	glEnd();

	//
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(160, 400);    // x, y
	glVertex2i(220, 400);    // x, y
    glVertex2i(220, 440);    // x, y
	glVertex2i(160, 440);
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(200, 320);    // x, y
	glVertex2i(220, 320);    // x, y
    glVertex2i(220, 380);    // x, y
	glVertex2i(200, 380);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(200, 400);    // x, y
	glVertex2i(220, 400);    // x, y
    glVertex2i(220, 420);    // x, y
	glVertex2i(200, 420);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(160, 420);    // x, y
	glVertex2i(500, 420);    // x, y
    glVertex2i(500, 440);    // x, y
	glVertex2i(160, 440);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(220, 300);    // x, y
	glVertex2i(260, 300);    // x, y
    glVertex2i(260, 320);    // x, y
	glVertex2i(220, 320);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(300, 400);    // x, y
	glVertex2i(360, 400);    // x, y
    glVertex2i(360, 420);    // x, y
	glVertex2i(300, 420);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(380, 320);    // x, y
	glVertex2i(440, 320);    // x, y
    glVertex2i(440, 420);    // x, y
	glVertex2i(380, 420);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(400, 300);    // x, y
	glVertex2i(440, 300);    // x, y
    glVertex2i(440, 320);    // x, y
	glVertex2i(400, 320);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(440, 320);    // x, y
	glVertex2i(460, 320);    // x, y
    glVertex2i(460, 380);    // x, y
	glVertex2i(440, 380);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(440, 400);    // x, y
	glVertex2i(500, 400);    // x, y
    glVertex2i(500, 420);    // x, y
	glVertex2i(440, 420);
	glEnd();

	//Yellow Right corner up

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(500, 380);    // x, y
	glVertex2i(520, 380);    // x, y
    glVertex2i(520, 420);    // x, y
	glVertex2i(500, 420);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(520, 360);    // x, y
	glVertex2i(540, 360);    // x, y
    glVertex2i(540, 400);    // x, y
	glVertex2i(520, 400);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(540, 340);    // x, y
	glVertex2i(560, 340);    // x, y
    glVertex2i(560, 380);    // x, y
	glVertex2i(540, 380);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(560, 320);    // x, y
	glVertex2i(580, 320);    // x, y
    glVertex2i(580, 360);    // x, y
	glVertex2i(560, 360);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(580, 300);    // x, y
	glVertex2i(600, 300);    // x, y
    glVertex2i(600, 340);    // x, y
	glVertex2i(580, 340);
	glEnd();


	//Yellow left corner up

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(140, 380);    // x, y
	glVertex2i(160, 380);    // x, y
    glVertex2i(160, 420);    // x, y
	glVertex2i(140, 420);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(120, 360);    // x, y
	glVertex2i(140, 360);    // x, y
    glVertex2i(140, 400);    // x, y
	glVertex2i(120, 400);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(100, 340);    // x, y
	glVertex2i(120, 340);    // x, y
    glVertex2i(120, 380);    // x, y
	glVertex2i(100, 380);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(80, 320);    // x, y
	glVertex2i(100, 320);    // x, y
    glVertex2i(100, 360);    // x, y
	glVertex2i(80, 360);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(60, 300);    // x, y
	glVertex2i(80, 300);    // x, y
    glVertex2i(80, 340);    // x, y
	glVertex2i(60, 340);
	glEnd();


	// Yellow left corner down

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(140, 80);    // x, y
	glVertex2i(160, 80);    // x, y
    glVertex2i(160, 120);    // x, y
	glVertex2i(140, 120);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(120, 100);    // x, y
	glVertex2i(140, 100);    // x, y
    glVertex2i(140, 140);    // x, y
	glVertex2i(120, 140);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(100, 120);    // x, y
	glVertex2i(120, 120);    // x, y
    glVertex2i(120, 160);    // x, y
	glVertex2i(100, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(80, 140);    // x, y
	glVertex2i(100, 140);    // x, y
    glVertex2i(100, 180);    // x, y
	glVertex2i(80, 180);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(60, 160);    // x, y
	glVertex2i(80, 160);    // x, y
    glVertex2i(80, 200);    // x, y
	glVertex2i(60, 200);
	glEnd();

	// Yellow corner right down

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(500, 80);    // x, y
	glVertex2i(520, 80);    // x, y
    glVertex2i(520, 120);    // x, y
	glVertex2i(500, 120);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(520, 100);    // x, y
	glVertex2i(540, 100);    // x, y
    glVertex2i(540, 140);    // x, y
	glVertex2i(520, 140);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(540, 120);    // x, y
	glVertex2i(560, 120);    // x, y
    glVertex2i(560, 160);    // x, y
	glVertex2i(540, 160);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(560, 140);    // x, y
	glVertex2i(580, 140);    // x, y
    glVertex2i(580, 180);    // x, y
	glVertex2i(560, 180);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //up yellow
    glVertex2i(580, 160);    // x, y
	glVertex2i(600, 160);    // x, y
    glVertex2i(600, 200);    // x, y
	glVertex2i(580, 200);
	glEnd();



	//Lines

    glFlush();

}
void lines(void)
{
    for(int i=0;i<1;i+=1){
        for(int j=0;j<=480;j+=20){
            glColor3f (0.836f, 0.388f, 0.74f);//Pink
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(i, j);
            glVertex2i(660, j);
            glEnd();
            glFlush ();
        }
    }
    for(int x=0;x<=660;x+=20){
        for(int y=0;y<=480;y+=20){
            glColor3f (0.836f, 0.388f, 0.74f);//Pink
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(x, y);
            glVertex2i(x, y+480);
            glEnd();
            glFlush ();
        }
    }
}


/*void black(void)
{
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f); //Green total
    glVertex2i(160, 40);    // x, y
	glVertex2i(500, 40);    // x, y
    glVertex2i(500, 460);    // x, y
	glVertex2i(160, 460);
	glEnd();
	glFlush();

}*/


void myDisplay(void)
{
    //batMan();
    //lines();
   //black();
    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); //up yellow
    glVertex2i(0, 0);    // x, y
	glVertex2i(660, 0);    // x, y
    glVertex2i(660, 480);    // x, y
	glVertex2i(0, 480);
	glEnd();


    batMan();
    lines();



}



void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 660.0, 0.0, 480.0);
}


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (660, 480);
    glutInitWindowPosition (400, 25);
    glutCreateWindow ("Batman Logo");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}

