// Author: Sean A. P
#include <GL/freeglut.h>

class tower {
public:
	void dinding_tower(double x, double z) {
		int y1 = 35;
		int y2 = 170;
		glColor3ub(169, 169, 169);
		glBegin(GL_POLYGON);
		glVertex3d(x + -143.19, y1, z + 44.17);
		glVertex3d(x + -142.30, y1, z + 44.87);
		glVertex3d(x + -142.30, y2, z + 44.87);
		glVertex3d(x + -143.19, y2, z + 44.17);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -142.30, y1, z + 44.87);
		glVertex3d(x + -142.30, y2, z + 44.87);
		glVertex3d(x + -136.74, y2, z + 44.19);
		glVertex3d(x + -136.74, y1, z + 44.19);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -136.74, y2, z + 44.19);
		glVertex3d(x + -136.74, y1, z + 44.19);
		glVertex3d(x + -131.17, y1, z + 48.54);
		glVertex3d(x + -131.17, y2, z + 48.54);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -131.17, y1, z + 48.54);
		glVertex3d(x + -131.17, y2, z + 48.54);
		glVertex3d(x + -130.49, y2, z + 54.10);
		glVertex3d(x + -130.49, y1, z + 54.10);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -130.49, y2, z + 54.10);
		glVertex3d(x + -130.49, y1, z + 54.10);
		glVertex3d(x + -129.60, y1, z + 54.80);
		glVertex3d(x + -129.60, y2, z + 54.80);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -129.60, y1, z + 54.80);
		glVertex3d(x + -129.60, y2, z + 54.80);
		glVertex3d(x + -110.16, y2, z + 52.41);
		glVertex3d(x + -110.16, y1, z + 52.41);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -110.16, y2, z + 52.41);
		glVertex3d(x + -110.16, y1, z + 52.41);
		glVertex3d(x + -109.47, y1, z + 51.52);
		glVertex3d(x + -109.47, y2, z + 51.52);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -109.47, y1, z + 51.52);
		glVertex3d(x + -109.47, y2, z + 51.52);
		glVertex3d(x + -110.15, y2, z + 45.96);
		glVertex3d(x + -110.15, y1, z + 45.96);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -110.15, y2, z + 45.96);
		glVertex3d(x + -110.15, y1, z + 45.96);
		glVertex3d(x + -105.80, y1, z + 40.39);
		glVertex3d(x + -105.80, y2, z + 40.39);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -105.80, y1, z + 40.39);
		glVertex3d(x + -105.80, y2, z + 40.39);
		glVertex3d(x + -100.24, y2, z + 39.71);
		glVertex3d(x + -100.24, y1, z + 39.71);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -100.24, y2, z + 39.71);
		glVertex3d(x + -100.24, y1, z + 39.71);
		glVertex3d(x + -99.54, y1, z + 38.81);
		glVertex3d(x + -99.54, y2, z + 38.81);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -99.54, y1, z + 38.81);
		glVertex3d(x + -99.54, y2, z + 38.81);
		glVertex3d(x + -101.93, y2, z + 19.38);
		glVertex3d(x + -101.93, y1, z + 19.38);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -101.93, y2, z + 19.38);
		glVertex3d(x + -101.93, y1, z + 19.38);
		glVertex3d(x + -102.82, y1, z + 18.68);
		glVertex3d(x + -102.82, y2, z + 18.68);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -102.82, y1, z + 18.68);
		glVertex3d(x + -102.82, y2, z + 18.68);
		glVertex3d(x + -108.38, y2, z + 19.37);
		glVertex3d(x + -108.38, y1, z + 19.37);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -108.38, y2, z + 19.37);
		glVertex3d(x + -108.38, y1, z + 19.37);
		glVertex3d(x + -113.95, y1, z + 15.01);
		glVertex3d(x + -113.95, y2, z + 15.01);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -113.95, y1, z + 15.01);
		glVertex3d(x + -113.95, y2, z + 15.01);
		glVertex3d(x + -114.63, y2, z + 9.45);
		glVertex3d(x + -114.63, y1, z + 9.45);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -114.63, y2, z + 9.45);
		glVertex3d(x + -114.63, y1, z + 9.45);
		glVertex3d(x + -115.52, y1, z + 8.76);
		glVertex3d(x + -115.52, y2, z + 8.76);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -115.52, y1, z + 8.76);
		glVertex3d(x + -115.52, y2, z + 8.76);
		glVertex3d(x + -134.96, y2, z + 11.14);
		glVertex3d(x + -134.96, y1, z + 11.14);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -134.96, y2, z + 11.14);
		glVertex3d(x + -134.96, y1, z + 11.14);
		glVertex3d(x + -135.65, y1, z + 12.04);
		glVertex3d(x + -135.65, y2, z + 12.04);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -135.65, y1, z + 12.04);
		glVertex3d(x + -135.65, y2, z + 12.04);
		glVertex3d(x + -134.97, y2, z + 17.59);
		glVertex3d(x + -134.97, y1, z + 17.59);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -134.97, y2, z + 17.59);
		glVertex3d(x + -134.97, y1, z + 17.59);
		glVertex3d(x + -139.32, y1, z + 23.17);
		glVertex3d(x + -139.32, y2, z + 23.17);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -139.32, y1, z + 23.17);
		glVertex3d(x + -139.32, y2, z + 23.17);
		glVertex3d(x + -144.88, y2, z + 23.85);
		glVertex3d(x + -144.88, y1, z + 23.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -144.88, y2, z + 23.85);
		glVertex3d(x + -144.88, y1, z + 23.85);
		glVertex3d(x + -145.58, y1, z + 24.74);
		glVertex3d(x + -145.58, y2, z + 24.74);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -145.58, y1, z + 24.74);
		glVertex3d(x + -145.58, y2, z + 24.74);
		glVertex3d(x + -143.19, y2, z + 44.17);
		glVertex3d(x + -143.19, y1, z + 44.17);
		glEnd();
	}

	void garis_dinding_tower(double x, double z) {
		int y1 = 35;
		int y2 = 170;
		glLineWidth(1.0);
		glColor3ub(0, 0, 0);
		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -143.19, y1, z + 44.17);
		glVertex3d(x + -142.30, y1, z + 44.87);
		glVertex3d(x + -142.30, y2, z + 44.87);
		glVertex3d(x + -143.19, y2, z + 44.17);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -142.30, y1, z + 44.87);
		glVertex3d(x + -142.30, y2, z + 44.87);
		glVertex3d(x + -136.74, y2, z + 44.19);
		glVertex3d(x + -136.74, y1, z + 44.19);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -136.74, y2, z + 44.19);
		glVertex3d(x + -136.74, y1, z + 44.19);
		glVertex3d(x + -131.17, y1, z + 48.54);
		glVertex3d(x + -131.17, y2, z + 48.54);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -131.17, y1, z + 48.54);
		glVertex3d(x + -131.17, y2, z + 48.54);
		glVertex3d(x + -130.49, y2, z + 54.10);
		glVertex3d(x + -130.49, y1, z + 54.10);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -130.49, y2, z + 54.10);
		glVertex3d(x + -130.49, y1, z + 54.10);
		glVertex3d(x + -129.60, y1, z + 54.80);
		glVertex3d(x + -129.60, y2, z + 54.80);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -129.60, y1, z + 54.80);
		glVertex3d(x + -129.60, y2, z + 54.80);
		glVertex3d(x + -110.16, y2, z + 52.41);
		glVertex3d(x + -110.16, y1, z + 52.41);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -110.16, y2, z + 52.41);
		glVertex3d(x + -110.16, y1, z + 52.41);
		glVertex3d(x + -109.47, y1, z + 51.52);
		glVertex3d(x + -109.47, y2, z + 51.52);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -109.47, y1, z + 51.52);
		glVertex3d(x + -109.47, y2, z + 51.52);
		glVertex3d(x + -110.15, y2, z + 45.96);
		glVertex3d(x + -110.15, y1, z + 45.96);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -110.15, y2, z + 45.96);
		glVertex3d(x + -110.15, y1, z + 45.96);
		glVertex3d(x + -105.80, y1, z + 40.39);
		glVertex3d(x + -105.80, y2, z + 40.39);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -105.80, y1, z + 40.39);
		glVertex3d(x + -105.80, y2, z + 40.39);
		glVertex3d(x + -100.24, y2, z + 39.71);
		glVertex3d(x + -100.24, y1, z + 39.71);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -100.24, y2, z + 39.71);
		glVertex3d(x + -100.24, y1, z + 39.71);
		glVertex3d(x + -99.54, y1, z + 38.81);
		glVertex3d(x + -99.54, y2, z + 38.81);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -99.54, y1, z + 38.81);
		glVertex3d(x + -99.54, y2, z + 38.81);
		glVertex3d(x + -101.93, y2, z + 19.38);
		glVertex3d(x + -101.93, y1, z + 19.38);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -101.93, y2, z + 19.38);
		glVertex3d(x + -101.93, y1, z + 19.38);
		glVertex3d(x + -102.82, y1, z + 18.68);
		glVertex3d(x + -102.82, y2, z + 18.68);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -102.82, y1, z + 18.68);
		glVertex3d(x + -102.82, y2, z + 18.68);
		glVertex3d(x + -108.38, y2, z + 19.37);
		glVertex3d(x + -108.38, y1, z + 19.37);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -108.38, y2, z + 19.37);
		glVertex3d(x + -108.38, y1, z + 19.37);
		glVertex3d(x + -113.95, y1, z + 15.01);
		glVertex3d(x + -113.95, y2, z + 15.01);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -113.95, y1, z + 15.01);
		glVertex3d(x + -113.95, y2, z + 15.01);
		glVertex3d(x + -114.63, y2, z + 9.45);
		glVertex3d(x + -114.63, y1, z + 9.45);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -114.63, y2, z + 9.45);
		glVertex3d(x + -114.63, y1, z + 9.45);
		glVertex3d(x + -115.52, y1, z + 8.76);
		glVertex3d(x + -115.52, y2, z + 8.76);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -115.52, y1, z + 8.76);
		glVertex3d(x + -115.52, y2, z + 8.76);
		glVertex3d(x + -134.96, y2, z + 11.14);
		glVertex3d(x + -134.96, y1, z + 11.14);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -134.96, y2, z + 11.14);
		glVertex3d(x + -134.96, y1, z + 11.14);
		glVertex3d(x + -135.65, y1, z + 12.04);
		glVertex3d(x + -135.65, y2, z + 12.04);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -135.65, y1, z + 12.04);
		glVertex3d(x + -135.65, y2, z + 12.04);
		glVertex3d(x + -134.97, y2, z + 17.59);
		glVertex3d(x + -134.97, y1, z + 17.59);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -134.97, y2, z + 17.59);
		glVertex3d(x + -134.97, y1, z + 17.59);
		glVertex3d(x + -139.32, y1, z + 23.17);
		glVertex3d(x + -139.32, y2, z + 23.17);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -139.32, y1, z + 23.17);
		glVertex3d(x + -139.32, y2, z + 23.17);
		glVertex3d(x + -144.88, y2, z + 23.85);
		glVertex3d(x + -144.88, y1, z + 23.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -144.88, y2, z + 23.85);
		glVertex3d(x + -144.88, y1, z + 23.85);
		glVertex3d(x + -145.58, y1, z + 24.74);
		glVertex3d(x + -145.58, y2, z + 24.74);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -145.58, y1, z + 24.74);
		glVertex3d(x + -145.58, y2, z + 24.74);
		glVertex3d(x + -143.19, y2, z + 44.17);
		glVertex3d(x + -143.19, y1, z + 44.17);
		glEnd();
	}
	void penutup_atas(double x, double z) {
		int y = 170;
		glColor3ub(226, 226, 226);
		glBegin(GL_POLYGON);
		glVertex3d(x + -143.19, y, z + 44.17);
		glVertex3d(x + -142.30, y, z + 44.87);
		glVertex3d(x + -136.74, y, z + 44.19);
		glVertex3d(x + -139.32, y, z + 23.17);
		glVertex3d(x + -144.88, y, z + 23.85);
		glVertex3d(x + -145.58, y, z + 24.74);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -131.17, y, z + 48.54);
		glVertex3d(x + -130.49, y, z + 54.10);
		glVertex3d(x + -129.60, y, z + 54.80);
		glVertex3d(x + -110.16, y, z + 52.41);
		glVertex3d(x + -109.47, y, z + 51.52);
		glVertex3d(x + -110.15, y, z + 45.96);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -105.80, y, z + 40.39);
		glVertex3d(x + -100.24, y, z + 39.71);
		glVertex3d(x + -99.54, y, z + 38.81);
		glVertex3d(x + -101.93, y, z + 19.38);
		glVertex3d(x + -102.82, y, z + 18.68);
		glVertex3d(x + -108.38, y, z + 19.37);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -113.95, y, z + 15.01);
		glVertex3d(x + -114.63, y, z + 9.45);
		glVertex3d(x + -115.52, y, z + 8.76);
		glVertex3d(x + -134.96, y, z + 11.14);
		glVertex3d(x + -135.65, y, z + 12.04);
		glVertex3d(x + -134.97, y, z + 17.59);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -139.32, y, z + 23.17);
		glVertex3d(x + -136.74, y, z + 44.19);
		glVertex3d(x + -131.17, y, z + 48.54);
		glVertex3d(x + -110.15, y, z + 45.96);
		glVertex3d(x + -105.80, y, z + 40.39);
		glVertex3d(x + -108.38, y, z + 19.37);
		glVertex3d(x + -113.95, y, z + 15.01);
		glVertex3d(x + -134.97, y, z + 17.59);
		glEnd();
	}

	void octagon(double x, double z) {
		int y3 = 172;
		glColor3ub(226, 226, 226);
		glBegin(GL_POLYGON);
		glVertex3d(x + -137.67, y3, z + 37.52);
		glVertex3d(x + -124.47, y3, z + 47.83);
		glVertex3d(x + -116.82, y3, z + 46.89);
		glVertex3d(x + -106.51, y3, z + 33.69);
		glVertex3d(x + -107.45, y3, z + 26.04);
		glVertex3d(x + -120.65, y3, z + 15.73);
		glVertex3d(x + -128.30, y3, z + 16.67);
		glVertex3d(x + -138.61, y3, z + 29.86);
		glEnd();
	}

	void dinding_octagon(double x, double z) {
		int y3 = 170;
		int y4 = 172;

		glColor3ub(169, 169, 169);
		glBegin(GL_POLYGON);
		glVertex3d(x + -137.67, y3, z + 37.52);
		glVertex3d(x + -124.47, y3, z + 47.83);
		glVertex3d(x + -124.47, y4, z + 47.83);
		glVertex3d(x + -137.67, y4, z + 37.52);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -124.47, y3, z + 47.83);
		glVertex3d(x + -124.47, y4, z + 47.83);
		glVertex3d(x + -116.82, y4, z + 46.89);
		glVertex3d(x + -116.82, y3, z + 46.89);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -116.82, y4, z + 46.89);
		glVertex3d(x + -116.82, y3, z + 46.89);
		glVertex3d(x + -106.51, y3, z + 33.69);
		glVertex3d(x + -106.51, y4, z + 33.69);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -106.51, y3, z + 33.69);
		glVertex3d(x + -106.51, y4, z + 33.69);
		glVertex3d(x + -107.45, y4, z + 26.04);
		glVertex3d(x + -107.45, y3, z + 26.04);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -107.45, y4, z + 26.04);
		glVertex3d(x + -107.45, y3, z + 26.04);
		glVertex3d(x + -120.65, y3, z + 15.73);
		glVertex3d(x + -120.65, y4, z + 15.73);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -120.65, y3, z + 15.73);
		glVertex3d(x + -120.65, y4, z + 15.73);
		glVertex3d(x + -128.30, y4, z + 16.67);
		glVertex3d(x + -128.30, y3, z + 16.67);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -128.30, y4, z + 16.67);
		glVertex3d(x + -128.30, y3, z + 16.67);
		glVertex3d(x + -138.61, y3, z + 29.86);
		glVertex3d(x + -138.61, y4, z + 29.86);
		glEnd();
	}

	void biru_biru(double x, double z) {
		int y4 = 172;
		int y5 = 176;

		glColor3ub(101, 255, 255);
		//1
		glBegin(GL_TRIANGLES);
		glVertex3d(x + -127.94, y5, z + 37.72);
		glVertex3d(x + -130.60, y4, z + 41.13);
		glVertex3d(x + -127.94, y4, z + 37.72);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -136.26, y4, z + 36.72);
		glVertex3d(x + -130.52, y5, z + 35.70);
		glVertex3d(x + -127.94, y5, z + 37.72);
		glVertex3d(x + -130.60, y4, z + 41.13);
		glEnd();

		glColor3ub(101, 255, 255);
		glBegin(GL_POLYGON);
		glVertex3d(x + -137.05, y4, z + 30.30);
		glVertex3d(x + -136.26, y4, z + 36.72);
		glVertex3d(x + -130.52, y5, z + 35.70);
		glVertex3d(x + -131.23, y5, z + 29.90);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -137.05, y4, z + 30.30);
		glVertex3d(x + -131.23, y5, z + 29.90);
		glVertex3d(x + -129.21, y5, z + 27.32);
		glVertex3d(x + -132.63, y4, z + 24.65);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3d(x + -129.21, y5, z + 27.32);
		glVertex3d(x + -132.63, y4, z + 24.65);
		glVertex3d(x + -129.21, y4, z + 27.32);
		glEnd();

		//2
		glBegin(GL_TRIANGLES);
		glVertex3d(x + -127.02, y5, z + 38.43);
		glVertex3d(x + -129.69, y4, z + 41.85);
		glVertex3d(x + -127.02, y4, z + 38.43);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -127.02, y5, z + 38.43);
		glVertex3d(x + -129.69, y4, z + 41.85);
		glVertex3d(x + -124.24, y4, z + 46.26);
		glVertex3d(x + -124.44, y5, z + 40.45);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -124.24, y4, z + 46.26);
		glVertex3d(x + -124.44, y5, z + 40.45);
		glVertex3d(x + -118.64, y5, z + 39.73);
		glVertex3d(x + -117.62, y4, z + 45.47);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -118.64, y5, z + 39.73);
		glVertex3d(x + -117.62, y4, z + 45.47);
		glVertex3d(x + -113.20, y4, z + 39.82);
		glVertex3d(x + -116.62, y5, z + 37.15);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3d(x + -113.20, y4, z + 39.82);
		glVertex3d(x + -116.62, y5, z + 37.15);
		glVertex3d(x + -116.62, y4, z + 37.15);
		glEnd();

		//3
		glBegin(GL_TRIANGLES);
		glVertex3d(x + -115.91, y4, z + 36.24);
		glVertex3d(x + -112.49, y4, z + 38.91);
		glVertex3d(x + -115.91, y5, z + 36.24);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -112.49, y4, z + 38.91);
		glVertex3d(x + -115.91, y5, z + 36.24);
		glVertex3d(x + -113.89, y5, z + 33.66);
		glVertex3d(x + -108.07, y4, z + 33.26);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -113.89, y5, z + 33.66);
		glVertex3d(x + -108.07, y4, z + 33.26);
		glVertex3d(x + -108.86, y4, z + 26.84);
		glVertex3d(x + -114.60, y5, z + 27.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -108.86, y4, z + 26.84);
		glVertex3d(x + -114.60, y5, z + 27.85);
		glVertex3d(x + -117.18, y5, z + 25.84);
		glVertex3d(x + -114.51, y4, z + 22.42);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3d(x + -117.18, y5, z + 25.84);
		glVertex3d(x + -114.51, y4, z + 22.42);
		glVertex3d(x + -117.18, y4, z + 25.84);
		glEnd();

		//4
		glBegin(GL_TRIANGLES);
		glVertex3d(x + -118.10, y4, z + 25.12);
		glVertex3d(x + -115.43, y4, z + 21.71);
		glVertex3d(x + -118.10, y5, z + 25.12);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -115.43, y4, z + 21.71);
		glVertex3d(x + -118.10, y5, z + 25.12);
		glVertex3d(x + -120.68, y5, z + 23.11);
		glVertex3d(x + -121.08, y4, z + 17.29);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -120.68, y5, z + 23.11);
		glVertex3d(x + -121.08, y4, z + 17.29);
		glVertex3d(x + -127.50, y4, z + 18.08);
		glVertex3d(x + -126.48, y5, z + 23.82);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -127.50, y4, z + 18.08);
		glVertex3d(x + -126.48, y5, z + 23.82);
		glVertex3d(x + -128.50, y5, z + 26.40);
		glVertex3d(x + -131.91, y4, z + 23.73);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3d(x + -128.50, y5, z + 26.40);
		glVertex3d(x + -131.91, y4, z + 23.73);
		glVertex3d(x + -128.50, y4, z + 26.40);
		glEnd();
	}

	void garis_biru_biru(double x, double z) {
		int y4 = 172;
		int y5 = 176;

		glLineWidth(2.0f);
		glColor3ub(0, 0, 0);
		//1
		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -127.94, y5, z + 37.72);
		glVertex3d(x + -130.60, y4, z + 41.13);
		glVertex3d(x + -127.94, y4, z + 37.72);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -136.26, y4, z + 36.72);
		glVertex3d(x + -130.52, y5, z + 35.70);
		glVertex3d(x + -127.94, y5, z + 37.72);
		glVertex3d(x + -130.60, y4, z + 41.13);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -137.05, y4, z + 30.30);
		glVertex3d(x + -136.26, y4, z + 36.72);
		glVertex3d(x + -130.52, y5, z + 35.70);
		glVertex3d(x + -131.23, y5, z + 29.90);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -137.05, y4, z + 30.30);
		glVertex3d(x + -131.23, y5, z + 29.90);
		glVertex3d(x + -129.21, y5, z + 27.32);
		glVertex3d(x + -132.63, y4, z + 24.65);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -129.21, y5, z + 27.32);
		glVertex3d(x + -132.63, y4, z + 24.65);
		glVertex3d(x + -129.21, y4, z + 27.32);
		glEnd();

		//2
		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -127.02, y5, z + 38.43);
		glVertex3d(x + -129.69, y4, z + 41.85);
		glVertex3d(x + -127.02, y4, z + 38.43);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -127.02, y5, z + 38.43);
		glVertex3d(x + -129.69, y4, z + 41.85);
		glVertex3d(x + -124.24, y4, z + 46.26);
		glVertex3d(x + -124.44, y5, z + 40.45);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -124.24, y4, z + 46.26);
		glVertex3d(x + -124.44, y5, z + 40.45);
		glVertex3d(x + -118.64, y5, z + 39.73);
		glVertex3d(x + -117.62, y4, z + 45.47);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -118.64, y5, z + 39.73);
		glVertex3d(x + -117.62, y4, z + 45.47);
		glVertex3d(x + -113.20, y4, z + 39.82);
		glVertex3d(x + -116.62, y5, z + 37.15);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -113.20, y4, z + 39.82);
		glVertex3d(x + -116.62, y5, z + 37.15);
		glVertex3d(x + -116.62, y4, z + 37.15);
		glEnd();

		//3
		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -115.91, y4, z + 36.24);
		glVertex3d(x + -112.49, y4, z + 38.91);
		glVertex3d(x + -115.91, y5, z + 36.24);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -112.49, y4, z + 38.91);
		glVertex3d(x + -115.91, y5, z + 36.24);
		glVertex3d(x + -113.89, y5, z + 33.66);
		glVertex3d(x + -108.07, y4, z + 33.26);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -113.89, y5, z + 33.66);
		glVertex3d(x + -108.07, y4, z + 33.26);
		glVertex3d(x + -108.86, y4, z + 26.84);
		glVertex3d(x + -114.60, y5, z + 27.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -108.86, y4, z + 26.84);
		glVertex3d(x + -114.60, y5, z + 27.85);
		glVertex3d(x + -117.18, y5, z + 25.84);
		glVertex3d(x + -114.51, y4, z + 22.42);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -117.18, y5, z + 25.84);
		glVertex3d(x + -114.51, y4, z + 22.42);
		glVertex3d(x + -117.18, y4, z + 25.84);
		glEnd();

		//4
		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -118.10, y4, z + 25.12);
		glVertex3d(x + -115.43, y4, z + 21.71);
		glVertex3d(x + -118.10, y5, z + 25.12);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -115.43, y4, z + 21.71);
		glVertex3d(x + -118.10, y5, z + 25.12);
		glVertex3d(x + -120.68, y5, z + 23.11);
		glVertex3d(x + -121.08, y4, z + 17.29);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -120.68, y5, z + 23.11);
		glVertex3d(x + -121.08, y4, z + 17.29);
		glVertex3d(x + -127.50, y4, z + 18.08);
		glVertex3d(x + -126.48, y5, z + 23.82);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -127.50, y4, z + 18.08);
		glVertex3d(x + -126.48, y5, z + 23.82);
		glVertex3d(x + -128.50, y5, z + 26.40);
		glVertex3d(x + -131.91, y4, z + 23.73);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(x + -128.50, y5, z + 26.40);
		glVertex3d(x + -131.91, y4, z + 23.73);
		glVertex3d(x + -128.50, y4, z + 26.40);
		glEnd();
	}

	void octagon_atas(double x, double z) {
		int y5 = 176;
		glColor3ub(226, 226, 226);
		glBegin(GL_POLYGON);
		glVertex3d(-131.23, y5, 29.90);
		glVertex3d(-130.52, y5, 35.70);
		glVertex3d(-124.44, y5, 40.45);
		glVertex3d(-118.64, y5, 39.73);
		glVertex3d(-113.89, y5, 33.66);
		glVertex3d(-114.60, y5, 27.85);
		glVertex3d(-120.68, y5, 23.11);
		glVertex3d(-126.48, y5, 23.82);
		glEnd();
	}

	void dinding_octagon_atas(double x, double z) {
		int y4 = 172;
		int y5 = 180;

		glColor3ub(169, 169, 169);
		glBegin(GL_POLYGON);
		glVertex3d(x + -131.23, y4, z + 29.90);
		glVertex3d(x + -130.52, y4, z + 35.70);
		glVertex3d(x + -130.52, y5, z + 35.70);
		glVertex3d(x + -131.23, y5, z + 29.90);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -130.52, y4, z + 35.70);
		glVertex3d(x + -130.52, y5, z + 35.70);
		glVertex3d(x + -124.44, y5, z + 40.45);
		glVertex3d(x + -124.44, y4, z + 40.45);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -124.44, y5, z + 40.45);
		glVertex3d(x + -124.44, y4, z + 40.45);
		glVertex3d(x + -118.64, y4, z + 39.73);
		glVertex3d(x + -118.64, y5, z + 39.73);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -118.64, y4, z + 39.73);
		glVertex3d(x + -118.64, y5, z + 39.73);
		glVertex3d(x + -113.89, y5, z + 33.66);
		glVertex3d(x + -113.89, y4, z + 33.66);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -113.89, y5, z + 33.66);
		glVertex3d(x + -113.89, y4, z + 33.66);
		glVertex3d(x + -114.60, y4, z + 27.85);
		glVertex3d(x + -114.60, y5, z + 27.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -114.60, y4, z + 27.85);
		glVertex3d(x + -114.60, y5, z + 27.85);
		glVertex3d(x + -120.68, y5, z + 23.11);
		glVertex3d(x + -120.68, y4, z + 23.11);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -120.68, y5, z + 23.11);
		glVertex3d(x + -120.68, y4, z + 23.11);
		glVertex3d(x + -126.48, y4, z + 23.82);
		glVertex3d(x + -126.48, y5, z + 23.82);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(x + -131.23, y5, z + 29.90);
		glVertex3d(x + -131.23, y4, z + 29.90);
		glVertex3d(x + -126.48, y4, z + 23.82);
		glVertex3d(x + -126.48, y5, z + 23.82);
		glEnd();
	}
};