//Author : Andres Sumihe
#include <GL/freeglut.h>
#include "Mall.h"
#include "Tower.h"
#include "Object.h"


float xpos = 0.0f;
float ypos = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;

tower tw;
Mall dd;
object obj;

int is_depth;

class controller {
public:
	void tampil() {
		if (is_depth)
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		else
			glClear(GL_COLOR_BUFFER_BIT);
	
		glRotatef(xpos, 1.0f, 0.0f, 0.0f);
		glRotatef(ypos, 0.0f, 1.0f, 0.0f);
	
		//Lantai 1
		dd.dinding(0.0, 35.0);
		dd.garis_dinding(0.0, 35.0);
		dd.atas_bawah(173, 216, 230, 0);
		dd.atas_bawah(154, 205, 50, 33);

		//Tower
		tw.dinding_tower(0, 0);
		tw.dinding_tower(13.77, -52.08);
		tw.dinding_tower(58.58, -23.08);
		tw.dinding_tower(93.18, -61.83);
		tw.dinding_tower(119.11, -14.63);
		tw.dinding_tower(190.02, 30.5);
		tw.dinding_tower(170.74, -18.53);
		tw.dinding_tower(48.58, -103.08);

		//Garis Tower
		tw.garis_dinding_tower(0, 0);
		tw.garis_dinding_tower(13.77, -52.08);
		tw.garis_dinding_tower(58.58, -23.08);
		tw.garis_dinding_tower(93.18, -61.83);
		tw.garis_dinding_tower(119.11, -14.63);
		tw.garis_dinding_tower(190.02, 30.5);
		tw.garis_dinding_tower(170.74, -18.53);
		tw.garis_dinding_tower(48.58, -103.08);

		//Penutup Atas
		tw.penutup_atas(0, 0);
		tw.penutup_atas(13.77, -52.08);
		tw.penutup_atas(58.58, -23.08);
		tw.penutup_atas(93.18, -61.83);
		tw.penutup_atas(119.11, -14.63);
		tw.penutup_atas(190.02, 30.5);
		tw.penutup_atas(170.74, -18.53);
		tw.penutup_atas(48.58, -103.08);

		//Octagon
		tw.octagon(0, 0);
		tw.octagon(13.77, -52.08);
		tw.octagon(58.58, -23.08);
		tw.octagon(93.18, -61.83);
		tw.octagon(119.11, -14.63);
		tw.octagon(190.02, 30.5);
		tw.octagon(170.74, -18.53);
		tw.octagon(48.58, -103.08);

		//Dinding Octagon
		tw.dinding_octagon(0, 0);
		tw.dinding_octagon(13.77, -52.08);
		tw.dinding_octagon(58.58, -23.08);
		tw.dinding_octagon(93.18, -61.83);
		tw.dinding_octagon(119.11, -14.63);
		tw.dinding_octagon(190.02, 30.5);
		tw.dinding_octagon(170.74, -18.53);
		tw.dinding_octagon(48.58, -103.08);

		//Biru-Biru
		tw.biru_biru(0, 0);
		tw.biru_biru(13.77, -52.08);
		tw.biru_biru(58.58, -23.08);
		tw.biru_biru(93.18, -61.83);
		tw.biru_biru(119.11, -14.63);
		tw.biru_biru(190.02, 30.5);
		tw.biru_biru(170.74, -18.53);
		tw.biru_biru(48.58, -103.08);

		//Garis Biru-Biru
		tw.garis_biru_biru(0, 0);
		tw.garis_biru_biru(13.77, -52.08);
		tw.garis_biru_biru(58.58, -23.08);
		tw.garis_biru_biru(93.18, -61.83);
		tw.garis_biru_biru(119.11, -14.63);
		tw.garis_biru_biru(190.02, 30.5);
		tw.garis_biru_biru(170.74, -18.53);
		tw.garis_biru_biru(48.58, -103.08);

		//Octagon-Atas
		tw.octagon_atas(0, 0);
		tw.octagon_atas(13.77, -52.08);
		tw.octagon_atas(58.58, -23.08);
		tw.octagon_atas(93.18, -61.83);
		tw.octagon_atas(119.11, -14.63);
		tw.octagon_atas(190.02, 30.5);
		tw.octagon_atas(170.74, -18.53);
		tw.octagon_atas(48.58, -103.08);

		//Dinding-Octagon-Atas
		tw.dinding_octagon_atas(0, 0);
		tw.dinding_octagon_atas(13.77, -52.08);
		tw.dinding_octagon_atas(58.58, -23.08);
		tw.dinding_octagon_atas(93.18, -61.83);
		tw.dinding_octagon_atas(119.11, -14.63);
		tw.dinding_octagon_atas(190.02, 30.5);
		tw.dinding_octagon_atas(170.74, -18.53);
		tw.dinding_octagon_atas(48.58, -103.08);
		glPushMatrix();
		glPopMatrix();
		glutSwapBuffers();
	}
	void init() {
		glClearColor(224 / 255, 255 / 255, 255 / 255, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glEnable(GL_LIGHTING);
		glEnable(GL_COLOR_MATERIAL);
		glEnable(GL_LIGHT0);
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glEnable(GL_LINE_SMOOTH);
		glEnable(GL_POINT_SMOOTH);
		glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
		glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
		gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
		glRotatef(xpos, 1.0f, 0.0f, 0.0f);
		glRotatef(ypos, 0.0f, 1.0f, 0.0f);
		is_depth = 1;
		glMatrixMode(GL_MODELVIEW);
		glPointSize(9.0);
		glLineWidth(1.0f);
	}
	void mouse(int* button, int* state, int* x, int* y) {
		if (*button == GLUT_LEFT_BUTTON && *state == GLUT_DOWN) {
			mouseDown = true;
			xdiff = (*x/1000 - ypos) /1000;
			ydiff = (-*y/1000 + xpos) /1000;
			std::cout << *x << std::endl;
		}
		else {
			mouseDown = false;
		}
		if ((*button == 3) || (*button == 4)) {
			mouseDown = false;
			//zoom dengan scrolling mouse
			if (*state == GLUT_UP) return;
			(*button == 4 && *state != GLUT_UP) ? glScalef(.99f, .99f, 0.99f) : glScalef(1.01f, 1.01f, 1.01f);
		}
		glutPostRedisplay();
	}

	void Idle() {
		if (!mouseDown) {
			xpos += 0.3f;
			ypos += 0.4f;
		}
		glutPostRedisplay();
	}

	void keyboard(unsigned char* key, int* x, int* y) {
		switch (*key) {
		case 'd':
		case 'D':
			glTranslatef(3.0, 0.0, 0.0);
			break;

		case 'a':
		case 'A':
			glTranslatef(-3.0, 0.0, 0.0);
			break;	
		}
		glutPostRedisplay();
	}

	void MouseMotion(int *x, int *y) {
		if (mouseDown) {
			ypos = *x/100 - xdiff;
			xpos = *y/100 + xdiff;
			std::cout << ypos << " : " << xpos << std::endl;
			glutPostRedisplay();
		}
	}

	void ukuran(int *lebar, int *tinggi) {
		if (*tinggi == 0) *tinggi = 1;
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(50.0, *lebar / *tinggi, 5.0, 1000.0);
		glTranslatef(0.0, -70.0, -600.0);
		glMatrixMode(GL_MODELVIEW);

	}

};