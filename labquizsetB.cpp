#include <stdio.h>
#include<Gl/gl.h>
#include <GL/glut.h>
void myDisplay(void)
{
    int xx1,yy1,xx2,yy2;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);

    glColor3f (1.0, 0.58, 0.38);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//magnda background
    glVertex2i(100,10);
    glVertex2i(300,10);
    glVertex2i(300,300);
    glVertex2i(100,300);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//lower  black
    glVertex2i(80,0);
    glVertex2i(320,0);
    glVertex2i(320,10);
    glVertex2i(80,10);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//right  black
    glVertex2i(300,10);
    glVertex2i(320,10);
    glVertex2i(320,310);
    glVertex2i(300,310);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//upper  red
    glVertex2i(300,300);
    glVertex2i(300,310);
    glVertex2i(100,310);
    glVertex2i(100,300);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//single left black
    glVertex2i(80,300);
    glVertex2i(100,300);
    glVertex2i(100,310);
    glVertex2i(80,310);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//left red
    glVertex2i(80,10);
    glVertex2i(100,10);
    glVertex2i(100,300);
    glVertex2i(80,300);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//left lower black box
    glVertex2i(120,20);
    glVertex2i(140,20);
    glVertex2i(140,40);
    glVertex2i(120,40);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//right lower black box
    glVertex2i(260,20);
    glVertex2i(280,20);
    glVertex2i(280,40);
    glVertex2i(260,40);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//right upper black box
    glVertex2i(260,270);
    glVertex2i(280,270);
    glVertex2i(280,290);
    glVertex2i(260,290);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//left upper black box
    glVertex2i(120,270);
    glVertex2i(140,270);
    glVertex2i(140,290);
    glVertex2i(120,290);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark first part
    glVertex2i(150,200);
    glVertex2i(160,200);
    glVertex2i(160,240);
    glVertex2i(150,240);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark second part
    glVertex2i(155,240);
    glVertex2i(200,240);
    glVertex2i(200,250);
    glVertex2i(155,250);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark third part
    glVertex2i(195,240);
    glVertex2i(205,240);
    glVertex2i(205,200);
    glVertex2i(195,200);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark fourth part
    glVertex2i(175,190);
    glVertex2i(205,190);
    glVertex2i(205,200);
    glVertex2i(175,200);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark fifth part
    glVertex2i(165,180);
    glVertex2i(180,180);
    glVertex2i(180,190);
    glVertex2i(165,190);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark sixth part
    glVertex2i(165,160);
    glVertex2i(180,160);
    glVertex2i(180,170);
    glVertex2i(165,170);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade first  part
    glVertex2i(160,230);
    glVertex2i(195,230);
    glVertex2i(195,240);
    glVertex2i(160,240);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade second  part
    glVertex2i(160,190);
    glVertex2i(170,190);
    glVertex2i(170,230);
    glVertex2i(160,230);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade third  part
    glVertex2i(155,190);
    glVertex2i(160,190);
    glVertex2i(160,200);
    glVertex2i(155,200);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade fourth  part
    glVertex2i(205,230);
    glVertex2i(210,230);
    glVertex2i(210,190);
    glVertex2i(205,190);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade fifth  part
    glVertex2i(180,185);
    glVertex2i(205,185);
    glVertex2i(205,190);
    glVertex2i(180,190);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade sixth  part
    glVertex2i(180,170);
    glVertex2i(190,170);
    glVertex2i(190,190);
    glVertex2i(180,190);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade seventh  part
    glVertex2i(175,170);
    glVertex2i(180,170);
    glVertex2i(180,180);
    glVertex2i(175,180);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade eights  part
    glVertex2i(180,160);
    glVertex2i(190,160);
    glVertex2i(190,165);
    glVertex2i(180,165);
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);//question mark shade ninth  part
    glVertex2i(170,150);
    glVertex2i(190,150);
    glVertex2i(190,160);
    glVertex2i(170,160);
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
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Batman !");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
    return 0;
}
