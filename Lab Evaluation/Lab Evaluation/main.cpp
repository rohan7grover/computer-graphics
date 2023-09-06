//
//  main.cpp
//  Lab Evaluation
//
//  Created by Rohan Grover on 21/02/23.
//

#define GL_SILENCE_DEPRECATION
#include <stdio.h>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <math.h>
#define pi 3.142857

void myInit (void)
{
    glClearColor(0.3, 0.5, 0.7, 1.0);
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(15);
    glPointSize(5);
    gluOrtho2D(-5, 5, -5, 5);
}

void drawCircle(float x, float y, float radius) {
    int i;
    int triangleAmount = 20;
    float twicePi = 2.0f * pi;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y);
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}

void drawCloud(float x, float y, float radius) {
    drawCircle(x - radius, y, radius);
    drawCircle(x, y + radius, radius);
    drawCircle(x + radius, y, radius);
    drawCircle(x, y - radius, radius);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCloud(2.0f, -4.0f, 0.5f);
    drawCloud(-2.0f, -4.0f, 0.5f);
    
    glBegin(GL_POLYGON);
        glVertex2f(3.0, -1.0);
        glVertex2f(-1.0, -1.0);
        glVertex2f(-3.0, 1.5);
        glVertex2f(-3.0, 2.0);
        glVertex2f(3.0, 2.0);
        glVertex2f(4.0, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(-2.5, 4.0);
        glVertex2f(-2.0, 4.0);
        glVertex2f(-1.0, 2.0);
        glVertex2f(-2.0, 2.0);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(-2.5, 4.0);
        glVertex2f(-2.0, 4.0);
        glVertex2f(-1.0, 2.0);
        glVertex2f(-2.0, 2.0);
    glEnd();
    
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
        glVertex2f(3.4, 1.0);
        glVertex2f(2.5, 1.0);
        glVertex2f(2.5, 1.25);
        glVertex2f(3.4, 1.25);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.5, -1.25);
         glVertex2f(0.0, -1.25);
         glVertex2f(0.0, -1.0);
         glVertex2f(2.5, -1.0);
    glEnd();
    glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("lab Evaluation");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
}

