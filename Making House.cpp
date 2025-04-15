#include <GL/glut.h>

void drawHouse() {
    // House base 
    glColor3f(0.812f, 0.376f, 0.173f); //reddish  colour
    glBegin(GL_POLYGON); 
        glVertex2f(-0.4f, -0.4f);
        glVertex2f(0.4f, -0.4f);
        glVertex2f(0.4f, 0.1f);
        glVertex2f(-0.4f, 0.1f);
    glEnd();
    
    //for grass
    glColor3f(0.259f, 0.761f, 0.153f); // green colour
    glBegin(GL_POLYGON); 
    glVertex2f(-1.0f, -1.0f); 
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.4f); 
    glVertex2f(-1.0f, -0.4f);
    glEnd();

    // for Roof 
    glColor4f(0.659f, 0.459f, 0.325f, 0.941f);//brown color 
    glBegin(GL_POLYGON); 
        glVertex2f(-0.45f, 0.1f);
        glVertex2f(0.45f, 0.1f);
        glVertex2f(0.0f, 0.5f);
    glEnd();

    // for Door
    glColor4f(0.11, 0.098, 0.09, 0.941); //balck color
    glBegin(GL_POLYGON); 
        
       
	glVertex2f(-0.05f, -0.4f);
    glVertex2f(0.05f, -0.4f);
    glVertex2f(0.05f, -0.1f);
    glVertex2f(-0.05f, -0.1f);
    glEnd();

    //for Left window 
    glColor4f(0.251, 0.753, 0.929, 0.941); //blue color
    glBegin(GL_POLYGON); 
        glVertex2f(-0.3f, -0.1f);
        glVertex2f(-0.15f, -0.1f);
        glVertex2f(-0.15f, 0.05f);
        glVertex2f(-0.3f, 0.05f);
    glEnd();

    // for Right window 
    glBegin(GL_POLYGON); 
        glVertex2f(0.15f, -0.1f);
        glVertex2f(0.3f, -0.1f);
        glVertex2f(0.3f, 0.05f);
        glVertex2f(0.15f, 0.05f);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT); 
    glLoadIdentity(); 
    drawHouse(); 
    glFlush();
}

void init() {
    glClearColor(0.761, 0.957, 0.969, 0.859); // Light sky blue background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    
    glutCreateWindow("Simple House");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
