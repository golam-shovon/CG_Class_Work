#include <stdio.h>
#include <GL/glut.h>
void trainglefilled(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glEnd();
glFlush ();
}
void traingleoutlined(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_LINE_LOOP);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glEnd();
glFlush ();
}
void rectanglefilled(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glVertex2i(150, 50);
glEnd();
glFlush ();
}

void rectangleoutlined(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_LINE_LOOP);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glVertex2i(150, 50);
glEnd();
glFlush ();
}
void allforone(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);

glBegin(GL_LINE_LOOP);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glVertex2i(150, 50);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(100, 150);
glVertex2i(100, 230);
glVertex2i(150, 230);
glVertex2i(150, 150);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(100, 350);
glVertex2i(100, 430);
glVertex2i(150, 430);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(100, 250);
glVertex2i(100, 330);
glVertex2i(150, 330);
glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
 main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

glutInitWindowSize (240, 480);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Triangle Filled");
glutDisplayFunc(trainglefilled);
myInit ();

glutInitWindowSize (240,480);
glutInitWindowPosition (500, 150);
glutCreateWindow ("Triangle Outlined");
glutDisplayFunc(traingleoutlined);
myInit ();

glutInitWindowSize (240,480);
glutInitWindowPosition (800, 150);
glutCreateWindow ("Rectangle Outlined");
glutDisplayFunc(rectangleoutlined);
myInit ();

glutInitWindowSize (240,480);
glutInitWindowPosition (1100, 150);
glutCreateWindow ("Rectangle Filled");
glutDisplayFunc(rectanglefilled);
myInit ();

glutInitWindowSize (240,480);
glutInitWindowPosition (1400, 150);
glutCreateWindow ("All For One");
glutDisplayFunc(allforone);
myInit ();

glutMainLoop();

}

