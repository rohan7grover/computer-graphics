//
//  main.cpp
//  Hut_2.0
//
//  Created by Rohan Grover on 19/02/23.
//

#define GL_SILENCE_DEPRECATION
#include<stdio.h>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include<math.h>
#define pi 3.142857

// function to initialize
void myInit (void)
{
    //making background color black as first
    //3 arguments all are 0.0
    glClearColor(1.0, 0.0, 0.0, 1.0);

    // breadth of picture boundary is 1 pixel
    glPointSize(20);
    
    glLineWidth(15);

    //glMatrixMode(GL_PROJECTION);
    //glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(2, 10, 2, 10);
    //gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void display1()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1, 0, 1);
    glBegin(GL_POLYGON);
        glVertex2i(2, 2);
        glVertex2i(8, 2);
        glVertex2i(8, 2);
        glVertex2i(8, 6);
        glVertex2i(8, 6);
        glVertex2i(2, 6);
        glVertex2i(2, 6);
        glVertex2i(2, 2);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);//Blue
    glBegin(GL_POLYGON);
        glVertex2i(4, 2);
        glVertex2i(6, 2);
        glVertex2i(6, 2);
        glVertex2i(6, 4);
        glVertex2i(6, 4);
        glVertex2i(4, 4);
        glVertex2i(4, 4);
        glVertex2i(4, 2);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glBegin(GL_POLYGON);
        glVertex2i(2, 6);
        glVertex2i(8, 6);
        glVertex2i(8, 6);
        glVertex2i(5, 9);
        glVertex2i(5, 9);
        glVertex2i(2, 6);
    glEnd();
    
    glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
    glBegin(GL_POLYGON);
        glVertex2f(5.3, 3);
        glVertex2f(5.55, 2.75);
        glVertex2f(5.55, 2.75);
        glVertex2f(5.8, 3.);
        glVertex2f(5.8, 3.);
        glVertex2f(5.55, 3.25);
        glVertex2f(5.55, 3.25);
        glVertex2f(5.3, 3);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);//Green
    glBegin(GL_POLYGON);
        glVertex2f(2, 0);
        glVertex2f(4, 0);
        glVertex2f(4, 0);
        glVertex2f(6,2);
        glVertex2f(6, 2);
        glVertex2f(4,2);
        glVertex2f(4, 2);
        glVertex2f(2, 0);
    glEnd();
    
    glFlush();
}


int main (int argc, char** argv)
{
    glutInit(&argc, argv); // start

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    // glutInitWindowSize(1000, 768);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(10, 10);

    // Giving name to window
    glutCreateWindow("LAB2");
    myInit();

    glutDisplayFunc(display1);
    glutMainLoop();
}
