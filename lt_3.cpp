#include <stdio.h>
#include<math.h>
#include<cstdlib>
#include<Gl/gl.h>
#include <GL/glut.h>
float xx1,xx2,yy1,yy2;
void dda()
{
float x1,x2,y1,y2,dx,dy,m,x,y,xend,yend;
x1=xx1;
x2=xx2;
y1=yy1;
y2=yy2;
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
dx=x2-x1;
dy=y2-y1;
m=(abs(dx/dy));
if(m<=1)
{
    if(dx>0)
    {
        x=round(x1);
        y=y1;
        xend=round(x2);
    }
    else
    {
        x=round(x2);
        y=y2;
        xend=round(x1);
    }

while(x<=xend)
{
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(x, y);
glEnd();
glFlush ();
float yf=yf+m;
y=round(yf);
x++;
}

}
if(m>1)
{
    if(dy>0)
    {
        y=y1;
        x=x1;
        yend=round(y2);
    }
    else
    {
        y=y2;
        x=x2;
        yend=round(y1);
    }
while(y<=yend)
{
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(x, y);
glEnd();
glFlush ();
float xf=xf+(1/m);
x=round(xf);
y++;
}
}

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
float xx1,xx2,yy1,yy2;
int n;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
printf("1.DDA \n2. Bresenham\n3.exit\n");
scanf("%d",&n);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Plotted");
if(n==1)
{
    printf("enter starting point");
    scanf("%f%f",&xx1,&yy1);
    printf("enter end point");
    scanf("%f%f",&xx2,&yy2);
    glutDisplayFunc(dda);

}
/*if(n==2)
{
    glutDisplayFunc(br);

}
if(n==3)
{
    exit();
}
*/
myInit ();
glutMainLoop();
}


