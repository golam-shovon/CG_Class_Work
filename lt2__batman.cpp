#include <stdio.h>
#include <GL/glut.h>
void batman(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 1.0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(513, 376);
glVertex2i(558, 331);
glVertex2i(612, 368);
glVertex2i(656, 333);
glVertex2i(720, 367);
glVertex2i(765, 305);
glVertex2i(764, 214);
glVertex2i(720, 180);
glVertex2i(702, 195);
glVertex2i(719, 420);
glVertex2i(703, 241);
glVertex2i(702, 251);
glVertex2i(675, 249);
glVertex2i(674, 244);
glVertex2i(640, 244);
glVertex2i(637, 170);
glVertex2i(630, 170);
glVertex2i(630, 195);
glVertex2i(576, 195);
glVertex2i(576, 169);
glVertex2i(566, 172);
glVertex2i(566, 239);
glVertex2i(541, 242);
glVertex2i(539, 248);
glVertex2i(512, 252);
glVertex2i(512, 241);
glVertex2i(504, 241);
glVertex2i(504, 217);
glVertex2i(522, 215);
glVertex2i(522, 198);
glVertex2i(504, 196);
glVertex2i(442, 225);
glVertex2i(442, 332);


glEnd();
glFlush ();
}

void rectangle(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 0.0);
glPointSize(5.0);

glBegin(GL_POLYGON);
glVertex2i(480, 405);
glVertex2i(784, 396);
glVertex2i(845, 343);
glVertex2i(847, 186);
glVertex2i(801, 134);
glVertex2i(477, 133);
glVertex2i(396, 198);
glVertex2i(396, 360);
glColor3f (1.0, 1.0, 1.0);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(513, 376);
glVertex2i(558, 331);
glVertex2i(612, 368);
glVertex2i(656, 333);
glVertex2i(720, 367);
glVertex2i(765, 305);
glVertex2i(764, 214);
glVertex2i(720, 180);
glVertex2i(702, 195);
glVertex2i(719, 420);
glVertex2i(703, 241);
glVertex2i(702, 251);
glVertex2i(675, 249);
glVertex2i(674, 244);
glVertex2i(640, 244);
glVertex2i(637, 170);
glVertex2i(630, 170);
glVertex2i(630, 195);
glVertex2i(576, 195);
glVertex2i(576, 169);
glVertex2i(566, 172);
glVertex2i(566, 239);
glVertex2i(541, 242);
glVertex2i(539, 248);
glVertex2i(512, 252);
glVertex2i(512, 241);
glVertex2i(504, 241);
glVertex2i(504, 217);
glVertex2i(522, 215);
glVertex2i(522, 198);
glVertex2i(504, 196);
glVertex2i(442, 225);
glVertex2i(442, 332);


glEnd();



glFlush ();


}


void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 1920.0, 0.0, 1080.0);
}
 main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize (1920,1080);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Batman");
glutDisplayFunc(rectangle);

myInit ();




glutMainLoop();

}

