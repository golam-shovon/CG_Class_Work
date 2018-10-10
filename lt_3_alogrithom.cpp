#include <stdio.h>
#include<math.h>
#include<cstdlib>
#include<Gl/gl.h>
#include <GL/glut.h>
double xx1,xx2,yy1,yy2;
void dda()
{
double x1,x2,y1,y2,length,xincre,yincre,i,x,y;
x1=xx1;
x2=xx2;
y1=yy1;
y2=yy2;
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
length=abs(x2-x1);
if(abs(y2-y1)>length)
{
    length=abs(y2-y1);
}
xincre=(x2-x1)/length;
yincre=(y2-y1)/length;
x=x+0.5;
y=y+0.5;
i=1;
glPointSize(5.0);
while(i<=length)
{
   glBegin(GL_POINTS);
   glVertex2i(trunc(x),trunc(y));
   x=x+xincre;
   y=y+yincre;
   glEnd();
}
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
float xx1,xx2,yy1,yy2;
int n;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
printf("1.DDA \n2. Bresenham\n3.exit\n");
scanf("%d",&n);
glutInitWindowSize (1920, 1080);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Plotted");
if(n==1)
{
    printf("enter starting point");
    scanf("%f%f",&xx1,&yy1);
    printf("enter end point");
    scanf("%f%f",&xx2,&yy2);
    glutDisplayFunc(dda);
    myInit();

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


