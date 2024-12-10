#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float x = 0.0f;
float y = 0.0f;
float p = 0.0f;
float s = 0.0f;
float z = -50.0f;
float xOffset;
float yOffset;
int numVertices = 40;
int trafficLightState = 0;
void init() {
    // Set the background color to white
    glClearColor(0.53f, 0.81f, 0.92f, 0.0f);
    // Set up the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50, 50, -45, 45);
    glMatrixMode(GL_MODELVIEW);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Home 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-41.05, 1);
    glVertex2d(-41.05, 23);
    glVertex2d(-30.90, 23);
    glVertex2d(-30.90, 1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192); // Gray color
    glVertex2d(-41, 1);
    glVertex2d(-41, 23);
    glVertex2d(-31, 23);
    glVertex2d(-31, 1);
    glEnd();
    // Border 1
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-41, 4);
    glVertex2d(-41, 5);
    glVertex2d(-31, 5);
    glVertex2d(-31, 4);
    glEnd();
    // Border 2
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-41, 13);
    glVertex2d(-41, 14);
    glVertex2d(-31, 14);
    glVertex2d(-31, 13);
    glEnd();
    // Border 3
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-41, 22);
    glVertex2d(-41, 23);
    glVertex2d(-31, 23);
    glVertex2d(-31, 22);
    glEnd();
    // Door 1
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(-40, 1);
    glVertex2d(-40, 2);
    glVertex2d(-37, 2);
    glVertex2d(-37, 1);
    glEnd();
    // Door 2
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(-40, 5);
    glVertex2d(-40, 11);
    glVertex2d(-37, 11);
    glVertex2d(-37, 5);
    glEnd();
    // Door 3
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(-40, 14);
    glVertex2d(-40, 20);
    glVertex2d(-37, 20);
    glVertex2d(-37, 14);
    glEnd();
    // Window 2
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(-36, 7);
    glVertex2d(-36, 10);
    glVertex2d(-32, 10);
    glVertex2d(-32, 7);
    glEnd();
    // Window 3
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(-36, 16);
    glVertex2d(-36, 19);
    glVertex2d(-32, 19);
    glVertex2d(-32, 16);
    glEnd();

    //Home 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-30.10, 1);
    glVertex2d(-30.10, 30);
    glVertex2d(-15, 30);
    glVertex2d(-9.90, 25);
    glVertex2d(-9.90, 1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(70, 130, 180); // Black color
    glVertex2d(-30, 1);
    glVertex2d(-30, 30);
    glVertex2d(-15, 30);
    glVertex2d(-15, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(70, 130, 180); // Black color
    glVertex2d(-14.90, 1);
    glVertex2d(-14.90, 30);
    glVertex2d(-10, 25);
    glVertex2d(-10, 1);
    glEnd();

    //Border 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-30, 4.90);
    glVertex2d(-30, 5.05);
    glVertex2d(-15, 5.05);
    glVertex2d(-15, 4.90);
    glEnd();
    //Border 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-30, 9.95);
    glVertex2d(-30, 10.05);
    glVertex2d(-15, 10.05);
    glVertex2d(-15, 9.95);
    glEnd();
    //Border 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-30, 14.95);
    glVertex2d(-30, 15.05);
    glVertex2d(-15, 15.05);
    glVertex2d(-15, 14.95);
    glEnd();
    //Border 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-30, 19.95);
    glVertex2d(-30, 20.05);
    glVertex2d(-15, 20.05);
    glVertex2d(-15, 19.95);
    glEnd();
    //Border 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-30, 24.90);
    glVertex2d(-30, 25.05);
    glVertex2d(-15, 25.05);
    glVertex2d(-15, 24.90);
    glEnd();
    //Border 5
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-30, 29.95);
    glVertex2d(-30, 30.05);
    glVertex2d(-15, 30.05);
    glVertex2d(-15, 29.95);
    glEnd();
    //Side view Border 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-15.10, 4.95);
    glVertex2d(-15.10, 5.05);
    glVertex2d(-10, 1.05);
    glVertex2d(-10, 0.95);
    glEnd();
    //Side view Border 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-15.10, 9.95);
    glVertex2d(-15.10, 10.05);
    glVertex2d(-10, 5.05);
    glVertex2d(-10, 4.95);
    glEnd();
    //Side view Border 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-15.10, 14.95);
    glVertex2d(-15.10, 15.05);
    glVertex2d(-10, 10.05);
    glVertex2d(-10, 9.95);
    glEnd();
    //Side view Border 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-15.10, 19.95);
    glVertex2d(-15.10, 20.05);
    glVertex2d(-10, 15.05);
    glVertex2d(-10, 14.95);
    glEnd();
    //Side view Border 5
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-15.10, 24.95);
    glVertex2d(-15.10, 25.05);
    glVertex2d(-10, 20.05);
    glVertex2d(-10, 19.95);
    glEnd();
    //Side view Border top
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-15.10, 29.95);
    glVertex2d(-15.10, 30.05);
    glVertex2d(-10, 25.05);
    glVertex2d(-10, 24.95);
    glEnd();
    //Window1.1
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-29, 1);
    glVertex2d(-29, 4);
    glVertex2d(-26, 4);
    glVertex2d(-26, 1);
    glEnd();
    //Window1.2
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-24, 1);
    glVertex2d(-24, 4);
    glVertex2d(-21, 4);
    glVertex2d(-21, 1);
    glEnd();
    //Window1.3
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-19, 1);
    glVertex2d(-19, 4);
    glVertex2d(-16, 4);
    glVertex2d(-16, 1);
    glEnd();
    //Window2.1
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-29, 6);
    glVertex2d(-29, 9);
    glVertex2d(-26, 9);
    glVertex2d(-26, 6);
    glEnd();
    //Window2.2
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-24, 6);
    glVertex2d(-24, 9);
    glVertex2d(-21, 9);
    glVertex2d(-21, 6);
    glEnd();
    //Window2.3
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-19, 6);
    glVertex2d(-19, 9);
    glVertex2d(-16, 9);
    glVertex2d(-16, 6);
    glEnd();
    //Window3.1
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-29, 11);
    glVertex2d(-29, 14);
    glVertex2d(-26, 14);
    glVertex2d(-26, 11);
    glEnd();
    //Window3.2
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-24, 11);
    glVertex2d(-24, 14);
    glVertex2d(-21, 14);
    glVertex2d(-21, 11);
    glEnd();
    //Window3.3
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-19, 11);
    glVertex2d(-19, 14);
    glVertex2d(-16, 14);
    glVertex2d(-16, 11);
    glEnd();
    //Window4.1
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-29, 16);
    glVertex2d(-29, 19);
    glVertex2d(-26, 19);
    glVertex2d(-26, 16);
    glEnd();
    //Window4.2
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-24, 16);
    glVertex2d(-24, 19);
    glVertex2d(-21, 19);
    glVertex2d(-21, 16);
    glEnd();
    //Window4.3
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-19, 16);
    glVertex2d(-19, 19);
    glVertex2d(-16, 19);
    glVertex2d(-16, 16);
    glEnd();
    //Window5.1
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-29, 21);
    glVertex2d(-29, 24);
    glVertex2d(-26, 24);
    glVertex2d(-26, 21);
    glEnd();
    //Window5.2
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-24, 21);
    glVertex2d(-24, 24);
    glVertex2d(-21, 24);
    glVertex2d(-21, 21);
    glEnd();
    //Window5.3
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-19, 21);
    glVertex2d(-19, 24);
    glVertex2d(-16, 24);
    glVertex2d(-16, 21);
    glEnd();
    //Window6.1
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-29, 26);
    glVertex2d(-29, 29);
    glVertex2d(-26, 29);
    glVertex2d(-26, 26);
    glEnd();
    //Window6.2
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-24, 26);
    glVertex2d(-24, 29);
    glVertex2d(-21, 29);
    glVertex2d(-21, 26);
    glEnd();
    //Window6.3
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255); // Black color
    glVertex2d(-19, 26);
    glVertex2d(-19, 29);
    glVertex2d(-16, 29);
    glVertex2d(-16, 26);
    glEnd();



    //Home 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(14.90, 1);
    glVertex2d(14.90, 30);
    glVertex2d(30, 30);
    glVertex2d(35.10, 25);
    glVertex2d(35.10, 1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 224); // Black color
    glVertex2d(30, 1);
    glVertex2d(30, 30);
    glVertex2d(15, 30);
    glVertex2d(15, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 224); // Black color
    glVertex2d(30.10, 1);
    glVertex2d(30.10, 30);
    glVertex2d(35, 25);
    glVertex2d(35, 1);
    glEnd();

    //Border 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(20, 4.90);
    glVertex2d(20, 5.05);
    glVertex2d(15, 5.05);
    glVertex2d(15, 4.90);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30, 4.90);
    glVertex2d(30, 5.05);
    glVertex2d(25, 5.05);
    glVertex2d(25, 4.90);
    glEnd();
    //Border 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30, 9.95);
    glVertex2d(30, 10.05);
    glVertex2d(15, 10.05);
    glVertex2d(15, 9.95);
    glEnd();
    //Border 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30, 14.95);
    glVertex2d(30, 15.05);
    glVertex2d(15, 15.05);
    glVertex2d(15, 14.95);
    glEnd();
    //Border 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30, 19.95);
    glVertex2d(30, 20.05);
    glVertex2d(15, 20.05);
    glVertex2d(15, 19.95);
    glEnd();
    //Border 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30, 24.90);
    glVertex2d(30, 25.05);
    glVertex2d(15, 25.05);
    glVertex2d(15, 24.90);
    glEnd();
    //Border 5
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30, 29.95);
    glVertex2d(30, 30.05);
    glVertex2d(15, 30.05);
    glVertex2d(15, 29.95);
    glEnd();
    //Side view Border 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30.10, 4.95);
    glVertex2d(30.10, 5.05);
    glVertex2d(35, 1.05);
    glVertex2d(35, 0.95);
    glEnd();
    //Side view Border 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30.10, 9.95);
    glVertex2d(30.10, 10.05);
    glVertex2d(35, 5.05);
    glVertex2d(35, 4.95);
    glEnd();
    //Side view Border 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30.10, 14.95);
    glVertex2d(30.10, 15.05);
    glVertex2d(35, 10.05);
    glVertex2d(35, 9.95);
    glEnd();
    //Side view Border 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30.10, 19.95);
    glVertex2d(30.10, 20.05);
    glVertex2d(35, 15.05);
    glVertex2d(35, 14.95);
    glEnd();
    //Side view Border 5
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30.10, 24.95);
    glVertex2d(30.10, 25.05);
    glVertex2d(35, 20.05);
    glVertex2d(35, 19.95);
    glEnd();
    //Side view Border top
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(30.10, 29.95);
    glVertex2d(30.10, 30.05);
    glVertex2d(35, 25.05);
    glVertex2d(35, 24.95);
    glEnd();
    //Door
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(20, 1);
    glVertex2d(20, 10);
    glVertex2d(25, 10);
    glVertex2d(25, 1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(135, 206, 235); // Paste color
    glVertex2d(20.10, 1);
    glVertex2d(20.10, 9.95);
    glVertex2d(24.90, 9.95);
    glVertex2d(24.90, 1);
    glEnd();

    // Home 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(46.05, 1); // Added 5 to x-axis
    glVertex2d(46.05, 23);
    glVertex2d(35.90, 23);
    glVertex2d(35.90, 1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192); // Gray color
    glVertex2d(46, 1); // Added 5 to x-axis
    glVertex2d(46, 23);
    glVertex2d(36, 23);
    glVertex2d(36, 1);
    glEnd();

    // Border 1
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(46, 4); // Added 5 to x-axis
    glVertex2d(46, 5);
    glVertex2d(36, 5);
    glVertex2d(36, 4);
    glEnd();

    // Border 2
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(46, 13); // Added 5 to x-axis
    glVertex2d(46, 14);
    glVertex2d(36, 14);
    glVertex2d(36, 13);
    glEnd();

    // Border 3
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(46, 22); // Added 5 to x-axis
    glVertex2d(46, 23);
    glVertex2d(36, 23);
    glVertex2d(36, 22);
    glEnd();

    // Door 1
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(45, 1); // Added 5 to x-axis
    glVertex2d(45, 2);
    glVertex2d(42, 2);
    glVertex2d(42, 1);
    glEnd();

    // Door 2
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(45, 5); // Added 5 to x-axis
    glVertex2d(45, 11);
    glVertex2d(42, 11);
    glVertex2d(42, 5);
    glEnd();

    // Door 3
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(45, 14); // Added 5 to x-axis
    glVertex2d(45, 20);
    glVertex2d(42, 20);
    glVertex2d(42, 14);
    glEnd();

    // Window 2
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(41, 7); // Added 5 to x-axis
    glVertex2d(41, 10);
    glVertex2d(37, 10);
    glVertex2d(37, 7);
    glEnd();

    // Window 3
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(41, 16); // Added 5 to x-axis
    glVertex2d(41, 19);
    glVertex2d(37, 19);
    glVertex2d(37, 16);
    glEnd();

    // Building 5 base
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192); // Gray color
    glVertex2d(-9, 0);  // Bottom-left corner
    glVertex2d(-9, 35); // Top-left corner
    glVertex2d(12, 35); // Top-right corner
    glVertex2d(12, 0);  // Bottom-right corner
    glEnd();

    // Building border (top)
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Black color
    glVertex2d(-9, 34);  // Bottom-left of the border
    glVertex2d(-9, 35);  // Top-left of the border
    glVertex2d(12, 35);  // Top-right of the border
    glVertex2d(12, 34);  // Bottom-right of the border
    glEnd();

    // Building windows (rows of windows)
    for (int y = 3; y <= 32; y += 6) { // Loop for rows
        for (int x = -7; x <= 10; x += 5) { // Loop for columns
            glBegin(GL_POLYGON);
            glColor3ub(128, 128, 128); // Dark gray for windows
            glVertex2d(x, y);        // Bottom-left corner of window
            glVertex2d(x, y + 3);    // Top-left corner of window
            glVertex2d(x + 3, y + 3); // Top-right corner of window
            glVertex2d(x + 3, y);    // Bottom-right corner of window
            glEnd();
        }
    }

    // Building door
    glBegin(GL_POLYGON);
    glColor3ub(100, 100, 100); // Darker gray for door
    glVertex2d(-2, 0);  // Bottom-left corner of door
    glVertex2d(-2, 6);  // Top-left corner of door
    glVertex2d(3, 6);   // Top-right corner of door
    glVertex2d(3, 0);   // Bottom-right corner of door
    glEnd();



    //Tree
    glBegin(GL_POLYGON);
    glColor3ub(128, 0, 0); // Black color
    glVertex2d(-2, 0);
    glVertex2d(-2, 12);
    glVertex2d(-1, 12);
    glVertex2d(0, 10);
    glVertex2d(1, 12);
    glVertex2d(2, 12);
    glVertex2d(2, 0);
    glEnd();
    //Leaf 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0); // Black color
    glVertex2d(-2, 10);
    glVertex2d(-5, 9);
    glVertex2d(-8, 10);
    glVertex2d(-10, 12);
    glVertex2d(-9, 15);
    glVertex2d(-6, 17);
    glVertex2d(-2, 14);
    glEnd();
    //Leaf 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 100, 0); // Black color
    glVertex2d(-6, 17);
    glVertex2d(-8, 20);
    glVertex2d(-7, 24);
    glVertex2d(-4, 26);
    glVertex2d(0, 25);
    glVertex2d(2, 22);
    glVertex2d(3, 18);
    glVertex2d(1, 14);
    glVertex2d(-2, 14);
    glEnd();
    //Leaf 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0); // Black color
    glVertex2d(2, 12);
    glVertex2d(0, 14);
    glVertex2d(1, 17);
    glVertex2d(3, 20);
    glVertex2d(6, 21);
    glVertex2d(9, 19);
    glVertex2d(11, 16);
    glVertex2d(9, 12);
    glVertex2d(7, 10);
    glVertex2d(4, 10);
    glEnd();
    //Wall Top
    glBegin(GL_POLYGON);
    glColor3ub(255, 250, 205);
    glVertex2d(-50, 0);
    glVertex2d(-50, 1);
    glVertex2d(50, 1);
    glVertex2d(50, 0);
    glEnd();
    //Wall down
    glBegin(GL_POLYGON);
    glColor3ub(255, 250, 205);
    glVertex2d(-50, -11);
    glVertex2d(-50, -10);
    glVertex2d(50, -10);
    glVertex2d(50, -11);
    glEnd();
    //Wall middle
    glBegin(GL_POLYGON);
    glColor3ub(205, 92, 92);
    glVertex2d(-50, -10);
    glVertex2d(-50, 0);
    glVertex2d(50, 0);
    glVertex2d(50, -10);
    glEnd();
    //Wall border 1
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(-50, -10);
    glVertex2d(-50, 0);
    glVertex2d(-49, 0);
    glVertex2d(-49, -10);
    glEnd();
    //Wall border 2
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(-40, -10);
    glVertex2d(-40, 0);
    glVertex2d(-39, 0);
    glVertex2d(-39, -10);
    glEnd();
    //Wall border 3
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(-30, -10);
    glVertex2d(-30, 0);
    glVertex2d(-29, 0);
    glVertex2d(-29, -10);
    glEnd();
    //Wall border 4
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(-20, -10);
    glVertex2d(-20, 0);
    glVertex2d(-19, 0);
    glVertex2d(-19, -10);
    glEnd();
    //Wall border 5
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(-10, -10);
    glVertex2d(-10, 0);
    glVertex2d(-9, 0);
    glVertex2d(-9, -10);
    glEnd();
    //Wall border 6
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(0, -10);
    glVertex2d(0, 0);
    glVertex2d(1, 0);
    glVertex2d(1, -10);
    glEnd();
    //Wall border 7
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(10, -10);
    glVertex2d(10, 0);
    glVertex2d(11, 0);
    glVertex2d(11, -10);
    glEnd();
    //Wall border 8
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(20, -10);
    glVertex2d(20, 0);
    glVertex2d(21, 0);
    glVertex2d(21, -10);
    glEnd();
    //Wall border 9
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(30, -10);
    glVertex2d(30, 0);
    glVertex2d(31, 0);
    glVertex2d(31, -10);
    glEnd();
    //Wall border 10
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(40, -10);
    glVertex2d(40, 0);
    glVertex2d(41, 0);
    glVertex2d(41, -10);
    glEnd();
    //Wall border 11
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2d(49.6, -10);
    glVertex2d(49.6, 0);
    glVertex2d(51, 0);
    glVertex2d(51, -10);
    glEnd();

    //Road
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(-50, -45);
    glVertex2d(-50, -11);
    glVertex2d(50, -11);
    glVertex2d(50, -45);
    glEnd();

    //Middle Road devider
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(-50, -29.5);
    glVertex2d(-50, -25.5);
    glVertex2d(50, -25.5);
    glVertex2d(50, -29.5);
    glEnd();

    // Airplane (scaled down by 0.6 and moved 17 pixels up)
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(z - 50 * 0.6, (40 * 0.6) + 17);
    glVertex2d(z - 30 * 0.6, (40 * 0.6) + 17);
    glVertex2d(z - 25 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 30 * 0.6, (35 * 0.6) + 17);
    glVertex2d(z - 45 * 0.6, (35 * 0.6) + 17);
    glEnd();

    // Right Wing
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(z - 40 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 36 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 42 * 0.6, (31 * 0.6) + 17);
    glVertex2d(z - 45 * 0.6, (31 * 0.6) + 17);
    glEnd();

    // Left Wing
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(z - 40 * 0.6, (40 * 0.6) + 17);
    glVertex2d(z - 42 * 0.6, (43 * 0.6) + 17);
    glVertex2d(z - 40 * 0.6, (43 * 0.6) + 17);
    glVertex2d(z - 36 * 0.6, (40 * 0.6) + 17);
    glEnd();

    // Back Wing
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(z - 47 * 0.6, (40 * 0.6) + 17);
    glVertex2d(z - 49 * 0.6, (43 * 0.6) + 17);
    glVertex2d(z - 50 * 0.6, (43 * 0.6) + 17);
    glVertex2d(z - 50 * 0.6, (40 * 0.6) + 17);
    glEnd();

    // Window 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(z - 32 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 32 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 30 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 30 * 0.6, (38 * 0.6) + 17);
    glEnd();

    // Window 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(z - 35 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 35 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 34 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 34 * 0.6, (38 * 0.6) + 17);
    glEnd();

    // Window 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(z - 38 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 38 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 37 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 37 * 0.6, (38 * 0.6) + 17);
    glEnd();

    // Window 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(z - 41 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 41 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 40 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 40 * 0.6, (38 * 0.6) + 17);
    glEnd();

    // Window 5
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(z - 44 * 0.6, (38 * 0.6) + 17);
    glVertex2d(z - 44 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 43 * 0.6, (39 * 0.6) + 17);
    glVertex2d(z - 43 * 0.6, (38 * 0.6) + 17);
    glEnd();

    if (z < 70)
        z += .01;
    else
        z = -70;
    glutPostRedisplay();


    //Road divider 1
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-48, -19);
    glVertex2d(-48, -18);
    glVertex2d(-43, -18);
    glVertex2d(-43, -19);
    glEnd();
    //Road divider 2
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-38, -19);
    glVertex2d(-38, -18);
    glVertex2d(-33, -18);
    glVertex2d(-33, -19);
    glEnd();
    //Road divider 3
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-28, -19);
    glVertex2d(-28, -18);
    glVertex2d(-23, -18);
    glVertex2d(-23, -19);
    glEnd();
    //Road divider 4
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-18, -19);
    glVertex2d(-18, -18);
    glVertex2d(-13, -18);
    glVertex2d(-13, -19);
    glEnd();
    //Road divider 5
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-8, -19);
    glVertex2d(-8, -18);
    glVertex2d(-3, -18);
    glVertex2d(-3, -19);
    glEnd();
    //Road divider 6
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(2, -19);
    glVertex2d(2, -18);
    glVertex2d(7, -18);
    glVertex2d(7, -19);
    glEnd();
    //Road divider 7
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(12, -19);
    glVertex2d(12, -18);
    glVertex2d(17, -18);
    glVertex2d(17, -19);
    glEnd();
    //Road divider 8
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(22, -19);
    glVertex2d(22, -18);
    glVertex2d(27, -18);
    glVertex2d(27, -19);
    glEnd();
    //Road divider 9
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(32, -19);
    glVertex2d(32, -18);
    glVertex2d(37, -18);
    glVertex2d(37, -19);
    glEnd();
    //Road divider 10
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(42, -19);
    glVertex2d(42, -18);
    glVertex2d(47, -18);
    glVertex2d(47, -19);
    glEnd();


    // Down side road divider 
    //Road divider 1
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-48, -38);
    glVertex2d(-48, -37);
    glVertex2d(-43, -37);
    glVertex2d(-43, -38);
    glEnd();
    //Road divider 2
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-38, -38);
    glVertex2d(-38, -37);
    glVertex2d(-33, -37);
    glVertex2d(-33, -38);
    glEnd();
    //Road divider 3
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-28, -38);
    glVertex2d(-28, -37);
    glVertex2d(-23, -37);
    glVertex2d(-23, -38);
    glEnd();
    //Road divider 4
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-18, -38);
    glVertex2d(-18, -37);
    glVertex2d(-13, -37);
    glVertex2d(-13, -38);
    glEnd();
    //Road divider 5
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(-8, -38);
    glVertex2d(-8, -37);
    glVertex2d(-3, -37);
    glVertex2d(-3, -38);
    glEnd();
    //Road divider 6
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(2, -38);
    glVertex2d(2, -37);
    glVertex2d(7, -37);
    glVertex2d(7, -38);
    glEnd();
    //Road divider 7
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(12, -38);
    glVertex2d(12, -37);
    glVertex2d(17, -37);
    glVertex2d(17, -38);
    glEnd();
    //Road divider 8
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(22, -38);
    glVertex2d(22, -37);
    glVertex2d(27, -37);
    glVertex2d(27, -38);
    glEnd();
    //Road divider 9
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(32, -38);
    glVertex2d(32, -37);
    glVertex2d(37, -37);
    glVertex2d(37, -38);
    glEnd();
    //Road divider 10
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(42, -38);
    glVertex2d(42, -37);
    glVertex2d(47, -37);
    glVertex2d(47, -38);
    glEnd();


    // Car 1
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2i(y - 40, -17);
    glVertex2i(y - 40, -13);
    glVertex2i(y - 28, -13);
    glVertex2i(y - 28, -17);
    glEnd();

    // Car 1 top
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2i(y - 38, -13);
    glVertex2i(y - 36, -10);
    glVertex2i(y - 31, -10);
    glVertex2i(y - 30, -13);
    glEnd();

    // Car 1 Wheel 1
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192); // Silver color for wheels
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (y - 38) + 1.5 * cos(angle);
        float z = -17 + 1.5 * sin(angle);
        glVertex2f(x, z);
    }
    glEnd();

    // Car 1 Wheel 2
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192); // Silver color for wheels
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (y - 30) + 1.5 * cos(angle);
        float z = -17 + 1.5 * sin(angle);
        glVertex2f(x, z);
    }
    glEnd();

    // Car 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2i(y - 60, -24);
    glVertex2i(y - 60, -20);
    glVertex2i(y - 48, -20);
    glVertex2i(y - 48, -24);
    glEnd();

    // Car 2 top
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2i(y - 58, -20);
    glVertex2i(y - 56, -17);
    glVertex2i(y - 51, -17);
    glVertex2i(y - 50, -20);
    glEnd();

    // Car 2 Wheel 1
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192); // Silver color for wheels
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (y - 58) + 1.5 * cos(angle);
        float z = -24 + 1.5 * sin(angle);
        glVertex2f(x, z);
    }
    glEnd();

    // Car 2 Wheel 2
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192); // Silver color for wheels
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (y - 50) + 1.5 * cos(angle);
        float z = -24 + 1.5 * sin(angle);
        glVertex2f(x, z);
    }
    glEnd();


    //Lamppost Middle Road 1
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(-30, -27);
    glVertex2d(-30, -8);
    glVertex2d(-31, -8);
    glVertex2d(-31, -27);
    glVertex2d(-32, -28);
    glVertex2d(-29, -28);
    glEnd();
    //Light 1 Right
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(-30, -8);
    glVertex2d(-25, -5);
    glVertex2d(-25, -4);
    glVertex2d(-31, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(-26, -5);
    glVertex2d(-24, -5);
    glVertex2d(-26, -7);
    glEnd();
    //Light 1 Left
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(-31, -8);
    glVertex2d(-36, -5);
    glVertex2d(-36, -4);
    glVertex2d(-30, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(-35, -5);
    glVertex2d(-37, -5);
    glVertex2d(-35, -7);
    glEnd();

    //Lamppost Middle Road 2
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(-10, -27);
    glVertex2d(-10, -8);
    glVertex2d(-11, -8);
    glVertex2d(-11, -27);
    glVertex2d(-12, -28);
    glVertex2d(-9, -28);
    glEnd();
    //Light 1 Right
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(-10, -8);
    glVertex2d(-5, -5);
    glVertex2d(-5, -4);
    glVertex2d(-11, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(-6, -5);
    glVertex2d(-4, -5);
    glVertex2d(-6, -7);
    glEnd();
    //Light 1 Left
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(-11, -8);
    glVertex2d(-16, -5);
    glVertex2d(-16, -4);
    glVertex2d(-10, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(-15, -5);
    glVertex2d(-17, -5);
    glVertex2d(-15, -7);
    glEnd();

    //Lamppost Middle Road 3
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(10, -27);
    glVertex2d(10, -8);
    glVertex2d(11, -8);
    glVertex2d(11, -27);
    glVertex2d(12, -28);
    glVertex2d(9, -28);
    glEnd();
    //Light 1 Right
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(10, -8);
    glVertex2d(5, -5);
    glVertex2d(5, -4);
    glVertex2d(11, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(6, -5);
    glVertex2d(4, -5);
    glVertex2d(6, -7);
    glEnd();
    //Light 1 Left
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(11, -8);
    glVertex2d(16, -5);
    glVertex2d(16, -4);
    glVertex2d(10, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(15, -5);
    glVertex2d(17, -5);
    glVertex2d(15, -7);
    glEnd();

    //Lamppost Middle Road 4
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(30, -27);
    glVertex2d(30, -8);
    glVertex2d(31, -8);
    glVertex2d(31, -27);
    glVertex2d(32, -28);
    glVertex2d(29, -28);
    glEnd();
    //Light 1 Right
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(30, -8);
    glVertex2d(25, -5);
    glVertex2d(25, -4);
    glVertex2d(31, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(26, -5);
    glVertex2d(24, -5);
    glVertex2d(26, -7);
    glEnd();
    //Light 1 Left
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(31, -8);
    glVertex2d(36, -5);
    glVertex2d(36, -4);
    glVertex2d(30, -8);
    glEnd();
    glBegin(GL_POLYGON);//Golden color
    glColor3ub(255, 215, 0);
    glVertex2d(35, -5);
    glVertex2d(37, -5);
    glVertex2d(35, -7);
    glEnd();

    // New Car 3 
    int x1 = 120 - y; // Moving left to right
    glBegin(GL_POLYGON);
    glColor3ub(255, 165, 0); // Orange color for Car 3
    glVertex2i(x1 - 60, -34);
    glVertex2i(x1 - 60, -30);
    glVertex2i(x1 - 48, -30);
    glVertex2i(x1 - 48, -34);
    glEnd();

    // Car 3 top
    glBegin(GL_POLYGON);
    glColor3ub(255, 165, 0);
    glVertex2i(x1 - 58, -30);
    glVertex2i(x1 - 56, -27);
    glVertex2i(x1 - 51, -27);
    glVertex2i(x1 - 50, -30);
    glEnd();

    // Car 3 Wheel 1
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (x1 - 58) + 1.5 * cos(angle);
        float z = -34 + 1.5 * sin(angle); // Increased Y by 5
        glVertex2f(x, z);
    }
    glEnd();

    // Car 3 Wheel 2
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (x1 - 50) + 1.5 * cos(angle);
        float z = -34 + 1.5 * sin(angle); // Increased Y by 5
        glVertex2f(x, z);
    }
    glEnd();


    // New Car 4 (below Car 3, Y = -54, moved up by 10 pixels to Y = -44)
    int x2 = x1 - 30; // Adjusted for spacing
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0); // Green color for Car 4
    glVertex2i(x2 - 50, -44);
    glVertex2i(x2 - 50, -40);
    glVertex2i(x2 - 38, -40);
    glVertex2i(x2 - 38, -44);
    glEnd();

    // Car 4 top
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2i(x2 - 48, -40);
    glVertex2i(x2 - 46, -37);
    glVertex2i(x2 - 41, -37);
    glVertex2i(x2 - 40, -40);
    glEnd();

    // Car 4 Wheel 1
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (x2 - 48) + 1.5 * cos(angle);
        float z = -44 + 1.5 * sin(angle); // Increased Y by 10
        glVertex2f(x, z);
    }
    glEnd();

    // Car 4 Wheel 2
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    for (int i = 0; i <= 20; i++) {
        float angle = 2.0f * M_PI * i / 20;
        float x = (x2 - 40) + 1.5 * cos(angle);
        float z = -44 + 1.5 * sin(angle); // Increased Y by 10
        glVertex2f(x, z);
    }
    glEnd();


    // Update Car 1 and Car 2 positions
    if (y > -70)
        y -= .02;
    else
        y = 120;

    // Update Car 3 and Car 4 positions
    if (x1 < 120)
        x1 += .02;
    else
        x1 = 0;

    if (x2 < 120)
        x2 = .02;
    else
        x2 = 0;

    glutPostRedisplay();

    //Cloud
    // Part 1: Main lower cloud
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255);
    glVertex2i(p - 0, 40);
    glVertex2i(p - 3, 42);
    glVertex2i(p - 6, 40);
    glVertex2i(p - 8, 39);
    glVertex2i(p - 6, 35);
    glVertex2i(p - 2, 35);
    glVertex2i(p - 0, 37);
    glEnd();
    // Part 2: Main lower cloud
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2i(p - 5, 41);
    glVertex2i(p - 8, 43);
    glVertex2i(p - 12, 43);
    glVertex2i(p - 15, 40);
    glVertex2i(p - 15, 38);
    glVertex2i(p - 13, 35);
    glVertex2i(p - 8, 35);
    glVertex2i(p - 5, 38);
    glEnd();
    if (p > -70)
        p -= .006;
    else
        p = 70;
    glutPostRedisplay();

    // Part 1: Main lower cloud
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2i(s + 5, 40);
    glVertex2i(s + 8, 42);
    glVertex2i(s + 11, 40);
    glVertex2i(s + 13, 39);
    glVertex2i(s + 11, 35);
    glVertex2i(s + 7, 35);
    glVertex2i(s + 5, 37);
    glEnd();

    // Part 2: Main lower cloud
    glBegin(GL_POLYGON);
    glColor3ub(224, 255, 255);
    glVertex2i(s + 10, 41);
    glVertex2i(s + 13, 43);
    glVertex2i(s + 17, 43);
    glVertex2i(s + 20, 40);
    glVertex2i(s + 20, 38);
    glVertex2i(s + 18, 35);
    glVertex2i(s + 13, 35);
    glVertex2i(s + 10, 38);
    glEnd();


    if (s > -80)
        s -= .005;
    else
        s = 80;
    glutPostRedisplay();


    // Light Pole
    glBegin(GL_POLYGON);
    glColor3ub(50, 50, 50);
    glVertex2d(0, -27); // Same position for pole
    glVertex2d(0, 0);
    glVertex2d(1, 0);   // Reduced width to make it thinner
    glVertex2d(1, -27);
    glEnd();

    // Traffic Light Box
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(-2, -5);   // Moved 1 pixel left
    glVertex2d(-2, 2);    // Moved 1 pixel left
    glVertex2d(2, 2);     // Moved 1 pixel left
    glVertex2d(2, -5);    // Moved 1 pixel left
    glEnd();

    // Red Light
    glColor3ub((trafficLightState == 0) ? 255 : 100, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(-1, 0);    // Moved 1 pixel down
    glVertex2d(-1, 1);    // Moved 1 pixel down
    glVertex2d(1, 1);     // Moved 1 pixel down
    glVertex2d(1, 0);     // Moved 1 pixel down
    glEnd();

    // Yellow Light
    glColor3ub((trafficLightState == 1) ? 255 : 100, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(-1, -1.5); // Moved 1 pixel down
    glVertex2d(-1, -0.5); // Moved 1 pixel down
    glVertex2d(1, -0.5);  // Moved 1 pixel down
    glVertex2d(1, -1.5);  // Moved 1 pixel down
    glEnd();

    // Green Light
    glColor3ub(0, (trafficLightState == 2) ? 255 : 100, 0);
    glBegin(GL_POLYGON);
    glVertex2d(-1, -3);   // Moved 1 pixel down
    glVertex2d(-1, -2);   // Moved 1 pixel down
    glVertex2d(1, -2);    // Moved 1 pixel down
    glVertex2d(1, -3);    // Moved 1 pixel down
    glEnd();





    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    //glutInitWindowSize(1500, 780);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("city scenery");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
