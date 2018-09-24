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
void ship(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(10.0);

glBegin(GL_LINE_LOOP);
glVertex2i(80, 150);
glVertex2i(560, 150);
glVertex2i(400, 120);
glVertex2i(200, 120);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(380, 150);
glVertex2i(420, 150);
glVertex2i(420, 250);
glVertex2i(380, 250);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(220, 150);
glVertex2i(260, 150);
glVertex2i(260, 280);
glVertex2i(220, 280);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(180, 150);
glVertex2i(140, 150);
glVertex2i(140, 230);
glVertex2i(180, 230);
glEnd();

glBegin(GL_POINTS);
glVertex2i(150, 240);
glVertex2i(160, 260);
glVertex2i(170, 280);
glEnd();

glBegin(GL_POINTS);
glVertex2i(230, 290);
glVertex2i(245, 320);
glVertex2i(255, 340);
glEnd();

glBegin(GL_POINTS);
glVertex2i(395, 290);
glVertex2i(400, 330);
glVertex2i(410, 360);
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

glutInitWindowSize (240,480);
glutInitWindowPosition (1600, 150);
glutCreateWindow ("Ship");
glutDisplayFunc(ship);
myInit ();

glutInitWindowSize (1024,768);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Ship");
glutDisplayFunc(ship);
myInit ();

glutMainLoop();

}

