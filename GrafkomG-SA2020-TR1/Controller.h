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

	

	
};