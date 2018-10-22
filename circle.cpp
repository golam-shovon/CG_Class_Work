#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
int xx=0,y,a=250,b=150;
void draw(int x,int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x+a,y+b);
    glVertex2i(x+a,-y+b);
    glVertex2i(-x+a,y+b);
    glVertex2i(-x+a,-y+b);
    glVertex2i(y+a,x+b);
    glVertex2i(y+a,-x+b);
    glVertex2i(-y+a,x+b);
    glVertex2i(-y+a,-x+b);
    glEnd();
}
void modpoint(void)
{

int xx=0;
int r=10;
int yy=r;
int p=1-r;


while(xx<=yy)
{
    draw(xx,yy);
    if(p<0)
    {
        p=p+2*xx+3;
    }
    else
    {
        int r=2*xx-2*yy;
        p=p+r+5;
        yy--;
    }
    xx++;
}
}

void circle(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    modpoint();
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
glutCreateWindow ("circle");
glutDisplayFunc(circle);
myInit ();
glutMainLoop();
}
