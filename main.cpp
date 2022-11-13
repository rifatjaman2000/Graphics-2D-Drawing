#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416

bool flagScale=false;
double sun_move=0;
double boat_move=0;
double cloud_move=0;






void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int triangleAmount = 20;


    GLfloat twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void sun()
{

    glPushMatrix();
    glColor3f(128,128,0);

    drawFilledCircle(10,16,1.5);

    glPopMatrix();


}
void sky()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.41, 0.25, 0.3);//baby Blue

    glVertex2f(-20,8);
    glVertex2f(-20,20);
    glVertex2f(20,8);
    glVertex2f(20,20);
    glEnd();
    glPopMatrix();
}
void house()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.13, 0.11, 0.12);
    glVertex2f(-3,0);
    glVertex2f(-3,5);
    glVertex2f(-7,5);
    glVertex2f(-7,0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.61, 0.79, 0.42);
    glVertex2f(-4,2);
    glVertex2f(-4,3);
    glVertex2f(-5,3);
    glVertex2f(-5,2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.61, 0.79, 0.42);
    glVertex2f(-5.5,2);
    glVertex2f(-5.5,3);
    glVertex2f(-6.5,3);
    glVertex2f(-6.5,2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.27, 0.34, 0.42);
    glVertex2f(-3,5);
    glVertex2f(-4,7);
    glVertex2f(-8.2,7);
    glVertex2f(-7,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.72, 0.28, 0.42);
    glVertex2f(-7,5);
    glVertex2f(-8.2,7);
    glVertex2f(-9,5);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.19, 0.15, 0.17);
    glVertex2f(-7,0);
    glVertex2f(-9,0);
    glVertex2f(-9,5);
    glVertex2f(-7,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.79, 0.91);
    glVertex2f(-7.7,0);
    glVertex2f(-8.4,0);
    glVertex2f(-8.4,2.5);
    glVertex2f(-7.7,2.5);
    glEnd();
    glPopMatrix();



}


void river ()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.86, 0.94, 0.94);//cyan
    glVertex2f(-20,-10);
    glVertex2f(-20,-20);
    glVertex2f(20,-20);
    glVertex2f(20,-10);
    glEnd();
    glPopMatrix();

}
void grass ()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.16, 0.87, 0.23);

    glVertex2f(-20,3);
    glVertex2f(-20,-10);
    glVertex2f(20,-10);
    glVertex2f(20,3);
    glEnd();
    glPopMatrix();

}


void road ()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.21, 0.22);

    glVertex2f(-20,3);
    glVertex2f(-20,-5);
    glVertex2f(20,-5);
    glVertex2f(20,0);
    glEnd();
    glPopMatrix();

}
void boat()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.27, 0.22, 0.17);
    glVertex2f(-2.5,-17);
    glVertex2f(-3,-19);
    glVertex2f(-7,-19);
    glVertex2f(-7.5,-17);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.51, 0.22, 0.48);
    glVertex2f(-5.2,-17);
    glVertex2f(-5.2,-13);
    glVertex2f(-6.5,-17);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.25, 0.24, 0.77);
    glVertex2f(-4.7,-17);
    glVertex2f(-4.7,-13);
    glVertex2f(-3.5,-17);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glPointSize(0.9);
    glColor3f(0,0,0);
    glVertex2f(-4.95,-13);
    glVertex2f(-4.95,-17);

    glEnd();
    glPopMatrix();




}

void tree()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 0.5f);//Violet
    glVertex2f(3.5,0);
    glVertex2f(3.5,7);

    glVertex2f(3,7);
    glVertex2f(3,0);
    glEnd();
    glPopMatrix();

 glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.22, 0.53, 0.25);//Green
    glVertex2f(1.5,5);
    glVertex2f(5,5);
    glVertex2f(3.25,8);

    glEnd();
    glPopMatrix();



}


void cloud ()
{

    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(-8,6,2);
    drawFilledCircle(-6,6,1.5);
    drawFilledCircle(-10,6,1.3);
    glPopMatrix();

}


void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 20:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}
void animate()
{
   //sun
    if (flagScale == true)
    {
        sun_move+= 0.005;
        if(sun_move > 11)
            sun_move = 0.005;
    }
    if (flagScale == false)
    {
        sun_move = 1;

    }

    //boat

    if (flagScale == true)
    {
        boat_move+= 0.005;
        if(boat_move > 24)
            boat_move = 0.005;
    }
    if (flagScale == false)
    {
        boat_move = 1;

    }
//cloud

    if (flagScale == true)
    {
        cloud_move+= 0.001;
        if(cloud_move > 24)
            cloud_move = 0.005;
    }
    if (flagScale == false)
    {
        cloud_move = 1;



    }



    glutPostRedisplay();
    }

void init()
{


    glClearColor(0.55, 0.81, 0.81,1.0);
}



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-20, 20, -20, 20);

    glMatrixMode( GL_MODELVIEW );

    glLoadIdentity();




    grass();
    road();


    house();

    glPushMatrix();

    glTranslatef(-7,0,0);
    house();
    glPopMatrix();

    river();

    glPushMatrix();
    glTranslatef(boat_move,0,0);
    boat();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(7,0,0);
    tree();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-21,0,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(11,0,0);
    tree();
    glPopMatrix();




    glPushMatrix();
    glTranslatef(cloud_move,10,0);
    cloud();
    glPopMatrix();









    glPushMatrix();
    glTranslatef(sun_move,0,0);
    sun();
    glPopMatrix();



    glFlush();
    glutSwapBuffers();
}
int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);

    glutCreateWindow("Project");


    glutKeyboardFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glutDisplayFunc(display);
    init();

    glutMainLoop();

    return 0;
}
