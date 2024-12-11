#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;
int roundOff(double value)
{
   if (value > 0)
       return (int)(value + 0.5);
   else
       return (int)(value - 0.5);
}
double x1, y1, x2, y2;
void init()
{
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}
void bresenham(double x1, double y1, double x2, double y2)
{
   glBegin(GL_POINTS);
   // Calculate dx, dy, and their doubles (dx2, dy2)
   int dx = abs(x2 - x1);
   int dy = abs(y2 - y1);
   int dx2 = 2 * dx;
   int dy2 = 2 * dy;
   int dstart;
   // Initial coordinates rounded off
   int x = roundOff(x1);
   int y = roundOff(y1);
   int xEnd = roundOff(x2);
   int yEnd = roundOff(y2);
   // Start point
   glVertex2i(x, y);
   cout << "x = " << x << ", y = " << y << endl;
   // Case 1: Line is more horizontal (dx > dy)
   if (dx > dy)
   {
       // Determine the direction of drawing (right or left)
       if (x1 < x2)  // Moving right
       {
           dstart = dy2 - dx;
           while (x < xEnd)
           {
               x++;
               if (dstart < 0)
               {
                   dstart += dy2;
               }
               else
               {
                   if (y1 < y2) y++;  // Moving up
                   else y--;  // Moving down
                   dstart += dy2 - dx2;
               }
               glVertex2i(x, y);
               cout << "x = " << x << ", y = " << y << endl;
           }
       }
       else  // Moving left
       {
           dstart = dy2 + dx;
           while (x > xEnd)
           {
               x--;
               if (dstart < 0)
               {
                   dstart += dy2;
               }
               else
               {
                   if (y1 < y2) y++;  // Moving up
                   else y--;  // Moving down
                   dstart += dy2 - dx2;
               }
               glVertex2i(x, y);
               cout << "x = " << x << ", y = " << y << endl;
           }
       }
   }
   // Case 2: Line is more vertical (dy > dx)
   else
   {
       // Determine the direction of drawing (up or down)
       if (y1 < y2)  // Moving up
       {
           dstart = dx2 - dy;
           while (y < yEnd)
           {
               y++;
               if (dstart < 0)
               {
                   dstart += dx2;
               }
               else
               {
                   if (x1 < x2) x++;  // Moving right
                   else x--;  // Moving left
                   dstart += dx2 - dy2;
               }
               glVertex2i(x, y);
               cout << "x = " << x << ", y = " << y << endl;
           }
       }
       else  // Moving down
       {
           dstart = dx2 + dy;
           while (y > yEnd)
           {
               y--;
               if (dstart < 0)
               {
                   dstart += dx2;
               }
               else
               {
                   if (x1 < x2) x++;  // Moving right
                   else x--;  // Moving left
                   dstart += dx2 - dy2;
               }
               glVertex2i(x, y);
               cout << "x = " << x << ", y = " << y << endl;
           }
       }
   }
   glEnd();
}
void display()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.0f, 0.0f, 0.0f);
   glPointSize(3.0);
   bresenham(x1, y1, x2, y2);
   glFlush();
}
int main(int argc, char** argv)
{
   cout << "Enter starting points (x1, y1): ";
   cin >> x1 >> y1;
   cout << "Enter ending points (x2, y2): ";
   cin >> x2 >> y2;
   cout << endl;
   glutInit(&argc, argv);
   glutInitWindowSize(500, 500);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("Bresenham's Line Algorithm");
   init();
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}
