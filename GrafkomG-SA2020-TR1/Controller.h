//Author : Andres Sumihe
#include <GL/freeglut.h>

int is_depth;
class controller {
public:
	void init(void) {
		glClearColor(224 / 255, 255 / 255, 255 / 255, 0.0);
		glMatrixMode(GL_PROJECTION);
		glEnable(GL_DEPTH_TEST);
		is_depth = 1;
		glMatrixMode(GL_MODELVIEW);
		glPointSize(9.0);
		glLineWidth(1.0f);
	}
	void mouse(int &button, int &state, int &x, int &y) {
		if ((button == 3) || (button == 4)) {
			//zoom dengan scrolling mouse
			if (state == GLUT_UP) return;
			(button == 3) ? glScalef(.99f, .99f, 0.99f) : glScalef(1.01f, 1.01f, 1.01f);
		}
		glutPostRedisplay();
	}

	void ukuran(int &lebar, int &tinggi) {
		if (tinggi == 0) tinggi = 1;

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(50.0, lebar / tinggi, 5.0, 1000.0);
		glTranslatef(0.0, -5.0, -400.0);
		glMatrixMode(GL_MODELVIEW);
	}

	

	
};