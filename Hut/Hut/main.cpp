//
//  main.cpp
//  Hut
//
//  Created by Rohan Grover on 07/02/23.
//

#include<stdio.h>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include<math.h>
#define pi 3.142857

/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 0.0f, 0.0f, 0.1f); // Black and opaque
}
 
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
   glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
 
   // Define shapes enclosed within a pair of glBegin and glEnd
   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
 
      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-0.7f, -0.6f);
      glVertex2f(-0.1f, -0.6f);
      glVertex2f(-0.1f,  0.0f);
      glVertex2f(-0.7f,  0.0f);
        
        glColor3f(1.0f, 0.0f, 0.0f); // Red
        glVertex2f(-0.1f, -0.6f);     // Define vertices in counter-clockwise (CCW) order
        glVertex2f(0.7f, -0.6f);     //  so that the normal (front-face) is facing you
        glVertex2f(0.7f, 0.0f);
        glVertex2f(-0.1f, 0.0f);
    
        glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
        glVertex2f(-0.1f,  0.0f);
        glVertex2f(-0.4f, 0.5f);
        glVertex2f(0.7f, 0.0f);
        glVertex2f(0.4f, 0.5f);
    
   glEnd();
 
   glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
        glColor3f(0.0f, 0.0f, 1.0f); // Blue
        glVertex2f(-0.1f,  0.0f);
        glVertex2f(-0.7f,  0.0f);
        glVertex2f(-0.4f, 0.5f);
   glEnd();
   
    glFlush();  // Render now
}
 
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInit(&argc, argv);          // Initialize GLUT
   glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
   glutInitWindowSize(320, 320);   // Set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   initGL();                       // Our own OpenGL initialization
   glutMainLoop();                 // Enter the event-processing loop
   return 0;
}
