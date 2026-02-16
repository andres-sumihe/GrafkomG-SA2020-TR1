#if defined(__APPLE__)
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
// Author: Ado Nugroho
class Mall {
public:
	void dinding(double z1, double z2) {
		int y1 = 0;
		int y2 = 35;
		glColor3ub(255, 178, 102);
		glBegin(GL_POLYGON);
		glVertex3d(-146.49, y1, 50.25);
		glVertex3d(-134.69, y1, 59.46);
		glVertex3d(-134.69, y2, 59.46);
		glVertex3d(-146.49, y2, 50.25);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-134.69, y1, 59.46);
		glVertex3d(-134.69, y2, 59.46);
		glVertex3d(-113.44, y2, 56.85);
		glVertex3d(-113.44, y1, 56.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-113.44, y2, 56.85);
		glVertex3d(-113.44, y1, 56.85);
		glVertex3d(-113.86, y1, 53.38);
		glVertex3d(-113.86, y2, 53.38);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-113.86, y1, 53.38);
		glVertex3d(-113.86, y2, 53.38);
		glVertex3d(-108.81, y2, 52.76);
		glVertex3d(-108.81, y1, 52.76);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-108.81, y2, 52.76);
		glVertex3d(-108.81, y1, 52.76);
		glVertex3d(-105.57, y1, 55.30);
		glVertex3d(-105.57, y2, 55.30);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-105.57, y1, 55.30);
		glVertex3d(-105.57, y2, 55.30);
		glVertex3d(-105.45, y2, 56.27);
		glVertex3d(-105.45, y1, 56.27);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-105.45, y2, 56.27);
		glVertex3d(-105.45, y1, 56.27);
		glVertex3d(-88.74, y1, 54.22);
		glVertex3d(-88.74, y2, 54.22);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-88.74, y1, 54.22);
		glVertex3d(-88.74, y2, 54.22);
		glVertex3d(-88.59, y2, 54.03);
		glVertex3d(-88.59, y1, 54.03);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-88.59, y2, 54.03);
		glVertex3d(-88.59, y1, 54.03);
		glVertex3d(-89.06, y1, 50.20);
		glVertex3d(-89.06, y2, 50.20);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-89.06, y1, 50.20);
		glVertex3d(-89.06, y2, 50.20);
		glVertex3d(-88.17, y2, 50.09);
		glVertex3d(-88.17, y1, 50.09);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-88.17, y2, 50.09);
		glVertex3d(-88.17, y1, 50.09);
		glVertex3d(-85.76, y1, 47.55);
		glVertex3d(-85.76, y2, 47.55);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-85.76, y1, 47.55);
		glVertex3d(-85.76, y2, 47.55);
		glVertex3d(-85.90, y2, 46.47);
		glVertex3d(-85.90, y1, 46.47);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-85.90, y2, 46.47);
		glVertex3d(-85.90, y1, 46.47);
		glVertex3d(-81.35, y1, 43.16);
		glVertex3d(-81.35, y2, 43.16);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-81.35, y1, 43.16);
		glVertex3d(-81.35, y2, 43.16);
		glVertex3d(-82.54, y2, 41.31);
		glVertex3d(-82.54, y1, 41.31);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-82.54, y2, 41.31);
		glVertex3d(-82.54, y1, 41.31);
		glVertex3d(-81.80, y1, 40.85);
		glVertex3d(-81.80, y2, 40.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-81.80, y1, 40.85);
		glVertex3d(-81.80, y2, 40.85);
		glVertex3d(-82.33, y2, 40);
		glVertex3d(-82.33, y1, 40);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-82.33, y2, 40);
		glVertex3d(-82.33, y1, 40);
		glVertex3d(-75.81, y1, 36.61);
		glVertex3d(-75.81, y2, 36.61);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-75.81, y1, 36.61);
		glVertex3d(-75.81, y2, 36.61);
		glVertex3d(-76.10, y2, 32.90);
		glVertex3d(-76.10, y1, 32.90);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-76.10, y2, 32.90);
		glVertex3d(-76.10, y1, 32.90);
		glVertex3d(-48.26, y1, 29.48);
		glVertex3d(-48.26, y2, 29.48);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-48.26, y1, 29.48);
		glVertex3d(-48.26, y2, 29.48);
		glVertex3d(-47.64, y2, 33.15);
		glVertex3d(-47.64, y1, 33.15);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-47.64, y2, 33.15);
		glVertex3d(-47.64, y1, 33.15);
		glVertex3d(-40.50, y1, 34.86);
		glVertex3d(-40.50, y2, 34.86);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-40.50, y1, 34.86);
		glVertex3d(-40.50, y2, 34.86);
		glVertex3d(-40.68, y2, 38.17);
		glVertex3d(-40.68, y1, 38.17);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-40.68, y2, 38.17);
		glVertex3d(-40.68, y1, 38.17);
		glVertex3d(-31.50, y1, 43.13);
		glVertex3d(-31.50, y2, 43.13);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-31.50, y1, 43.13);
		glVertex3d(-31.50, y2, 43.13);
		glVertex3d(-30.84, y2, 47.11);
		glVertex3d(-30.84, y1, 47.11);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-30.84, y2, 47.11);
		glVertex3d(-30.84, y1, 47.11);
		glVertex3d(-14.13, y1, 45.06);
		glVertex3d(-14.13, y2, 45.06);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-14.13, y1, 45.06);
		glVertex3d(-14.13, y2, 45.06);
		glVertex3d(-7.86, y2, 40.36);
		glVertex3d(-7.86, y1, 40.36);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-7.86, y2, 40.36);
		glVertex3d(-7.86, y1, 40.36);
		glVertex3d(93.32, y1, 119.41);
		glVertex3d(93.32, y2, 119.41);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(93.32, y1, 119.41);
		glVertex3d(93.32, y2, 119.41);
		glVertex3d(122.38, y2, 82.22);
		glVertex3d(122.38, y1, 82.22);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(122.38, y2, 82.22);
		glVertex3d(122.38, y1, 82.22);
		glVertex3d(110.56, y1, 72.98);
		glVertex3d(110.56, y2, 72.98);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(110.56, y1, 72.98);
		glVertex3d(110.56, y2, 72.98);
		glVertex3d(115.79, y2, 66.28);
		glVertex3d(115.79, y1, 66.28);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(115.79, y2, 66.28);
		glVertex3d(115.79, y1, 66.28);
		glVertex3d(127.62, y1, 66.25);
		glVertex3d(127.62, y2, 66.25);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(127.62, y1, 66.25);
		glVertex3d(127.62, y2, 66.25);
		glVertex3d(137.46, y2, 53.66);
		glVertex3d(137.46, y1, 53.66);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(137.46, y2, 53.66);
		glVertex3d(137.46, y1, 53.66);
		glVertex3d(136.19, y1, 43.36);
		glVertex3d(136.19, y2, 43.36);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(136.19, y1, 43.36);
		glVertex3d(136.19, y2, 43.36);
		glVertex3d(-75.42, y2, -122.56);
		glVertex3d(-75.42, y1, -122.56);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-75.42, y2, -122.56);
		glVertex3d(-75.42, y1, -122.56);
		glVertex3d(-76.50, y1, -131.40);
		glVertex3d(-76.50, y2, -131.40);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-76.50, y1, -131.40);
		glVertex3d(-76.50, y2, -131.40);
		glVertex3d(-79.46, y2, -133.71);
		glVertex3d(-79.46, y1, -133.71);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-79.46, y2, -133.71);
		glVertex3d(-79.46, y1, -133.71);
		glVertex3d(-85.31, y1, -132.99);
		glVertex3d(-85.31, y2, -132.99);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-85.31, y1, -132.99);
		glVertex3d(-85.31, y2, -132.99);
		glVertex3d(-87.62, y2, -130.04);
		glVertex3d(-87.62, y1, -130.04);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-87.62, y2, -130.04);
		glVertex3d(-87.62, y1, -130.04);
		glVertex3d(-86.54, y1, -121.21);
		glVertex3d(-86.54, y2, -121.21);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-86.54, y1, -121.21);
		glVertex3d(-86.54, y2, -121.21);
		glVertex3d(-94.68, y2, -112.52);
		glVertex3d(-94.68, y1, -112.52);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-94.68, y2, -112.52);
		glVertex3d(-94.68, y1, -112.52);
		glVertex3d(-113.19, y1, -88.83);
		glVertex3d(-113.19, y2, -88.83);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-113.19, y1, -88.83);
		glVertex3d(-113.19, y2, -88.83);
		glVertex3d(-111.19, y2, -72.56);
		glVertex3d(-111.19, y1, -72.56);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-111.19, y2, -72.56);
		glVertex3d(-111.19, y1, -72.56);
		glVertex3d(-113.95, y1, -72.80);
		glVertex3d(-113.95, y2, -72.80);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-113.95, y1, -72.80);
		glVertex3d(-113.95, y2, -72.80);
		glVertex3d(-116.69, y2, -72.44);
		glVertex3d(-116.69, y1, -72.44);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-116.69, y2, -72.44);
		glVertex3d(-116.69, y1, -72.44);
		glVertex3d(-119.29, y1, -71.50);
		glVertex3d(-119.29, y2, -71.50);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-119.29, y1, -71.50);
		glVertex3d(-119.29, y2, -71.50);
		glVertex3d(-121.63, y2, -70.03);
		glVertex3d(-121.63, y1, -70.03);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-121.63, y2, -70.03);
		glVertex3d(-121.63, y1, -70.03);
		glVertex3d(-123.60, y1, -68.09);
		glVertex3d(-123.60, y2, -68.09);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-123.60, y1, -68.09);
		glVertex3d(-123.60, y2, -68.09);
		glVertex3d(-125.11, y2, -65.77);
		glVertex3d(-125.11, y1, -65.77);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-125.11, y2, -65.77);
		glVertex3d(-125.11, y1, -65.77);
		glVertex3d(-126.08, y1, -63.18);
		glVertex3d(-126.08, y2, -63.18);
		glEnd();



		glBegin(GL_POLYGON);
		glVertex3d(-126.08, y1, -63.18);
		glVertex3d(-126.08, y2, -63.18);
		glVertex3d(-126.48, y2, -60.45);
		glVertex3d(-126.48, y1, -60.45);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-126.48, y2, -60.45);
		glVertex3d(-126.48, y1, -60.45);
		glVertex3d(-126.28, y1, -57.69);
		glVertex3d(-126.28, y2, -57.69);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-126.28, y1, -57.69);
		glVertex3d(-126.28, y2, -57.69);
		glVertex3d(-125.49, y2, -55.04);
		glVertex3d(-125.49, y1, -55.04);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-125.49, y2, -55.04);
		glVertex3d(-125.49, y1, -55.04);
		glVertex3d(-124.15, y1, -52.62);
		glVertex3d(-124.15, y2, -52.62);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-124.15, y1, -52.62);
		glVertex3d(-124.15, y2, -52.62);
		glVertex3d(-122.33, y2, -50.54);
		glVertex3d(-122.33, y1, -50.54);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-122.33, y2, -50.54);
		glVertex3d(-122.33, y1, -50.54);
		glVertex3d(-140.84, y1, -26.85);
		glVertex3d(-140.84, y2, -26.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-140.84, y1, -26.85);
		glVertex3d(-140.84, y2, -26.85);
		glVertex3d(-138.30, y2, -6.17);
		glVertex3d(-138.30, y1, -6.17);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-138.30, y2, -6.17);
		glVertex3d(-138.30, y1, -6.17);
		glVertex3d(-133.19, y1, -2.18);
		glVertex3d(-133.19, y2, -2.18);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-133.19, y1, -2.18);
		glVertex3d(-133.19, y2, -2.18);
		glVertex3d(-141.03, y2, 7.85);
		glVertex3d(-141.03, y1, 7.85);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-141.03, y2, 7.85);
		glVertex3d(-141.03, y1, 7.85);
		glVertex3d(-151.53, y1, 9.14);
		glVertex3d(-151.53, y2, 9.14);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-151.53, y1, 9.14);
		glVertex3d(-151.53, y2, 9.14);
		glVertex3d(-150.14, y2, 20.47);
		glVertex3d(-150.14, y1, 20.47);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-150.14, y2, 20.47);
		glVertex3d(-150.14, y1, 20.47);
		glVertex3d(-146.49, y1, 50.25);
		glVertex3d(-146.49, y2, 50.25);
		glEnd();
	}

	void garis_dinding(double z1, double z2) {
		int y1 = 0;
		int y2 = 35;
		glColor3ub(105, 105, 105);
		glBegin(GL_LINE_LOOP);
		glVertex3d(-146.49, y1, 50.25);
		glVertex3d(-134.69, y1, 59.46);
		glVertex3d(-134.69, y2, 59.46);
		glVertex3d(-146.49, y2, 50.25);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-134.69, y1, 59.46);
		glVertex3d(-134.69, y2, 59.46);
		glVertex3d(-113.44, y2, 56.85);
		glVertex3d(-113.44, y1, 56.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-113.44, y2, 56.85);
		glVertex3d(-113.44, y1, 56.85);
		glVertex3d(-113.86, y1, 53.38);
		glVertex3d(-113.86, y2, 53.38);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-113.86, y1, 53.38);
		glVertex3d(-113.86, y2, 53.38);
		glVertex3d(-108.81, y2, 52.76);
		glVertex3d(-108.81, y1, 52.76);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-108.81, y2, 52.76);
		glVertex3d(-108.81, y1, 52.76);
		glVertex3d(-105.57, y1, 55.30);
		glVertex3d(-105.57, y2, 55.30);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-105.57, y1, 55.30);
		glVertex3d(-105.57, y2, 55.30);
		glVertex3d(-105.45, y2, 56.27);
		glVertex3d(-105.45, y1, 56.27);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-105.45, y2, 56.27);
		glVertex3d(-105.45, y1, 56.27);
		glVertex3d(-88.74, y1, 54.22);
		glVertex3d(-88.74, y2, 54.22);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-88.74, y1, 54.22);
		glVertex3d(-88.74, y2, 54.22);
		glVertex3d(-88.59, y2, 54.03);
		glVertex3d(-88.59, y1, 54.03);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-88.59, y2, 54.03);
		glVertex3d(-88.59, y1, 54.03);
		glVertex3d(-89.06, y1, 50.20);
		glVertex3d(-89.06, y2, 50.20);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-89.06, y1, 50.20);
		glVertex3d(-89.06, y2, 50.20);
		glVertex3d(-88.17, y2, 50.09);
		glVertex3d(-88.17, y1, 50.09);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-88.17, y2, 50.09);
		glVertex3d(-88.17, y1, 50.09);
		glVertex3d(-85.76, y1, 47.55);
		glVertex3d(-85.76, y2, 47.55);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-85.76, y1, 47.55);
		glVertex3d(-85.76, y2, 47.55);
		glVertex3d(-85.90, y2, 46.47);
		glVertex3d(-85.90, y1, 46.47);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-85.90, y2, 46.47);
		glVertex3d(-85.90, y1, 46.47);
		glVertex3d(-81.35, y1, 43.16);
		glVertex3d(-81.35, y2, 43.16);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-81.35, y1, 43.16);
		glVertex3d(-81.35, y2, 43.16);
		glVertex3d(-82.54, y2, 41.31);
		glVertex3d(-82.54, y1, 41.31);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-82.54, y2, 41.31);
		glVertex3d(-82.54, y1, 41.31);
		glVertex3d(-81.80, y1, 40.85);
		glVertex3d(-81.80, y2, 40.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-81.80, y1, 40.85);
		glVertex3d(-81.80, y2, 40.85);
		glVertex3d(-82.33, y2, 40);
		glVertex3d(-82.33, y1, 40);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-82.33, y2, 40);
		glVertex3d(-82.33, y1, 40);
		glVertex3d(-75.81, y1, 36.61);
		glVertex3d(-75.81, y2, 36.61);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-75.81, y1, 36.61);
		glVertex3d(-75.81, y2, 36.61);
		glVertex3d(-76.10, y2, 32.90);
		glVertex3d(-76.10, y1, 32.90);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-76.10, y2, 32.90);
		glVertex3d(-76.10, y1, 32.90);
		glVertex3d(-48.26, y1, 29.48);
		glVertex3d(-48.26, y2, 29.48);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-48.26, y1, 29.48);
		glVertex3d(-48.26, y2, 29.48);
		glVertex3d(-47.64, y2, 33.15);
		glVertex3d(-47.64, y1, 33.15);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-47.64, y2, 33.15);
		glVertex3d(-47.64, y1, 33.15);
		glVertex3d(-40.50, y1, 34.86);
		glVertex3d(-40.50, y2, 34.86);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-40.50, y1, 34.86);
		glVertex3d(-40.50, y2, 34.86);
		glVertex3d(-40.68, y2, 38.17);
		glVertex3d(-40.68, y1, 38.17);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-40.68, y2, 38.17);
		glVertex3d(-40.68, y1, 38.17);
		glVertex3d(-31.50, y1, 43.13);
		glVertex3d(-31.50, y2, 43.13);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-31.50, y1, 43.13);
		glVertex3d(-31.50, y2, 43.13);
		glVertex3d(-30.84, y2, 47.11);
		glVertex3d(-30.84, y1, 47.11);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-30.84, y2, 47.11);
		glVertex3d(-30.84, y1, 47.11);
		glVertex3d(-14.13, y1, 45.06);
		glVertex3d(-14.13, y2, 45.06);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-14.13, y1, 45.06);
		glVertex3d(-14.13, y2, 45.06);
		glVertex3d(-7.86, y2, 40.36);
		glVertex3d(-7.86, y1, 40.36);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-7.86, y2, 40.36);
		glVertex3d(-7.86, y1, 40.36);
		glVertex3d(93.32, y1, 119.41);
		glVertex3d(93.32, y2, 119.41);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(93.32, y1, 119.41);
		glVertex3d(93.32, y2, 119.41);
		glVertex3d(122.38, y2, 82.22);
		glVertex3d(122.38, y1, 82.22);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(122.38, y2, 82.22);
		glVertex3d(122.38, y1, 82.22);
		glVertex3d(110.56, y1, 72.98);
		glVertex3d(110.56, y2, 72.98);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(110.56, y1, 72.98);
		glVertex3d(110.56, y2, 72.98);
		glVertex3d(115.79, y2, 66.28);
		glVertex3d(115.79, y1, 66.28);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(115.79, y2, 66.28);
		glVertex3d(115.79, y1, 66.28);
		glVertex3d(127.62, y1, 66.25);
		glVertex3d(127.62, y2, 66.25);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(127.62, y1, 66.25);
		glVertex3d(127.62, y2, 66.25);
		glVertex3d(137.46, y2, 53.66);
		glVertex3d(137.46, y1, 53.66);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(137.46, y2, 53.66);
		glVertex3d(137.46, y1, 53.66);
		glVertex3d(136.19, y1, 43.36);
		glVertex3d(136.19, y2, 43.36);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(136.19, y1, 43.36);
		glVertex3d(136.19, y2, 43.36);
		glVertex3d(-75.42, y2, -122.56);
		glVertex3d(-75.42, y1, -122.56);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glVertex3d(-75.42, y2, -122.56);
		glVertex3d(-75.42, y1, -122.56);
		glVertex3d(-76.50, y1, -131.40);
		glVertex3d(-76.50, y2, -131.40);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-76.50, y1, -131.40);
		glVertex3d(-76.50, y2, -131.40);
		glVertex3d(-79.46, y2, -133.71);
		glVertex3d(-79.46, y1, -133.71);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-79.46, y2, -133.71);
		glVertex3d(-79.46, y1, -133.71);
		glVertex3d(-85.31, y1, -132.99);
		glVertex3d(-85.31, y2, -132.99);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-85.31, y1, -132.99);
		glVertex3d(-85.31, y2, -132.99);
		glVertex3d(-87.62, y2, -130.04);
		glVertex3d(-87.62, y1, -130.04);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-87.62, y2, -130.04);
		glVertex3d(-87.62, y1, -130.04);
		glVertex3d(-86.54, y1, -121.21);
		glVertex3d(-86.54, y2, -121.21);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-86.54, y1, -121.21);
		glVertex3d(-86.54, y2, -121.21);
		glVertex3d(-94.68, y2, -112.52);
		glVertex3d(-94.68, y1, -112.52);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-94.68, y2, -112.52);
		glVertex3d(-94.68, y1, -112.52);
		glVertex3d(-113.19, y1, -88.83);
		glVertex3d(-113.19, y2, -88.83);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-113.19, y1, -88.83);
		glVertex3d(-113.19, y2, -88.83);
		glVertex3d(-111.19, y2, -72.56);
		glVertex3d(-111.19, y1, -72.56);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glVertex3d(-111.19, y2, -72.56);
		glVertex3d(-111.19, y1, -72.56);
		glVertex3d(-113.95, y1, -72.80);
		glVertex3d(-113.95, y2, -72.80);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-113.95, y1, -72.80);
		glVertex3d(-113.95, y2, -72.80);
		glVertex3d(-116.69, y2, -72.44);
		glVertex3d(-116.69, y1, -72.44);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-116.69, y2, -72.44);
		glVertex3d(-116.69, y1, -72.44);
		glVertex3d(-119.29, y1, -71.50);
		glVertex3d(-119.29, y2, -71.50);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-119.29, y1, -71.50);
		glVertex3d(-119.29, y2, -71.50);
		glVertex3d(-121.63, y2, -70.03);
		glVertex3d(-121.63, y1, -70.03);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-121.63, y2, -70.03);
		glVertex3d(-121.63, y1, -70.03);
		glVertex3d(-123.60, y1, -68.09);
		glVertex3d(-123.60, y2, -68.09);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glVertex3d(-123.60, y1, -68.09);
		glVertex3d(-123.60, y2, -68.09);
		glVertex3d(-125.11, y2, -65.77);
		glVertex3d(-125.11, y1, -65.77);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glVertex3d(-125.11, y2, -65.77);
		glVertex3d(-125.11, y1, -65.77);
		glVertex3d(-126.08, y1, -63.18);
		glVertex3d(-126.08, y2, -63.18);
		glEnd();



		glBegin(GL_LINE_LOOP);
		glVertex3d(-126.08, y1, -63.18);
		glVertex3d(-126.08, y2, -63.18);
		glVertex3d(-126.48, y2, -60.45);
		glVertex3d(-126.48, y1, -60.45);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glVertex3d(-126.48, y2, -60.45);
		glVertex3d(-126.48, y1, -60.45);
		glVertex3d(-126.28, y1, -57.69);
		glVertex3d(-126.28, y2, -57.69);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-126.28, y1, -57.69);
		glVertex3d(-126.28, y2, -57.69);
		glVertex3d(-125.49, y2, -55.04);
		glVertex3d(-125.49, y1, -55.04);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-125.49, y2, -55.04);
		glVertex3d(-125.49, y1, -55.04);
		glVertex3d(-124.15, y1, -52.62);
		glVertex3d(-124.15, y2, -52.62);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-124.15, y1, -52.62);
		glVertex3d(-124.15, y2, -52.62);
		glVertex3d(-122.33, y2, -50.54);
		glVertex3d(-122.33, y1, -50.54);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-122.33, y2, -50.54);
		glVertex3d(-122.33, y1, -50.54);
		glVertex3d(-140.84, y1, -26.85);
		glVertex3d(-140.84, y2, -26.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-140.84, y1, -26.85);
		glVertex3d(-140.84, y2, -26.85);
		glVertex3d(-138.30, y2, -6.17);
		glVertex3d(-138.30, y1, -6.17);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-138.30, y2, -6.17);
		glVertex3d(-138.30, y1, -6.17);
		glVertex3d(-133.19, y1, -2.18);
		glVertex3d(-133.19, y2, -2.18);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glVertex3d(-133.19, y1, -2.18);
		glVertex3d(-133.19, y2, -2.18);
		glVertex3d(-141.03, y2, 7.85);
		glVertex3d(-141.03, y1, 7.85);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glVertex3d(-141.03, y2, 7.85);
		glVertex3d(-141.03, y1, 7.85);
		glVertex3d(-151.53, y1, 9.14);
		glVertex3d(-151.53, y2, 9.14);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-151.53, y1, 9.14);
		glVertex3d(-151.53, y2, 9.14);
		glVertex3d(-150.14, y2, 20.47);
		glVertex3d(-150.14, y1, 20.47);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-150.14, y2, 20.47);
		glVertex3d(-150.14, y1, 20.47);
		glVertex3d(-146.49, y1, 50.25);
		glVertex3d(-146.49, y2, 50.25);
		glEnd();
	}

	void atas_bawah(int r, int g, int b, double y1) {
		glColor3ub(r, g, b);
		glBegin(GL_POLYGON);
		glVertex3d(-149.10, y1, 28.99);
		glVertex3d(-146.49, y1, 50.25);
		glVertex3d(-134.69, y1, 59.46);
		glVertex3d(-113.44, y1, 56.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-113.44, y1, 56.85);
		glVertex3d(-113.86, y1, 53.38);
		glVertex3d(-151.53, y1, 9.14);
		glVertex3d(-149.10, y1, 28.99);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-105.57, y1, 55.30);
		glVertex3d(-105.45, y1, 56.27);
		glVertex3d(-88.74, y1, 54.22);
		glVertex3d(-88.59, y1, 54.03);
		glVertex3d(-88.69, y1, 53.22);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-105.57, y1, 55.30);
		glVertex3d(-88.69, y1, 53.22);
		glVertex3d(-89.06, y1, 50.20);
		glVertex3d(-88.17, y1, 50.09);
		glVertex3d(-85.76, y1, 47.55);
		glVertex3d(-85.90, y1, 46.47);
		glVertex3d(-81.35, y1, 43.16);
		glVertex3d(-133.19, y1, -2.18);
		glVertex3d(-141.03, y1, 7.85);
		glVertex3d(-151.53, y1, 9.14);
		glVertex3d(-150.14, y1, 20.47);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-113.86, y1, 53.38);
		glVertex3d(-108.81, y1, 52.76);
		glVertex3d(-150.14, y1, 20.47);
		glVertex3d(-145.62, y1, 28.56);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-7.86, y1, 40.36);
		glVertex3d(93.32, y1, 119.41);
		glVertex3d(122.38, y1, 82.22);
		glVertex3d(110.56, y1, 72.98);
		glVertex3d(115.79, y1, 66.28);
		glVertex3d(127.62, y1, 66.25);
		glVertex3d(137.46, y1, 53.66);
		glVertex3d(136.19, y1, 43.36);
		glVertex3d(49.92, y1, -24.55);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-76.10, y1, 32.90);
		glVertex3d(-48.26, y1, 29.48);
		glVertex3d(-43.25, y1, -25.85);
		glVertex3d(-84.53, y1, -63.02);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-43.25, y1, -25.85);
		glVertex3d(-84.53, y1, -63.02);
		glVertex3d(-37.15, y1, -92.60);
		glVertex3d(-75.42, y1, -122.56);
		glVertex3d(-84.53, y1, -63.02);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-75.42, y1, -122.56);
		glVertex3d(-76.50, y1, -131.40);
		glVertex3d(-79.46, y1, -133.71);
		glVertex3d(-85.31, y1, -132.99);
		glVertex3d(-87.62, y1, -130.04);
		glVertex3d(-86.54, y1, -121.21);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-86.54, y1, -121.21);
		glVertex3d(-94.68, y1, -112.52);
		glVertex3d(-113.19, y1, -88.83);
		glVertex3d(-111.19, y1, -72.56);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-111.19, y1, -72.56);
		glVertex3d(-84.53, y1, -63.02);
		glVertex3d(-75.42, y1, -122.56);
		glVertex3d(-86.54, y1, -121.21);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-111.19, y1, -72.56);
		glVertex3d(-113.95, y1, -72.80);
		glVertex3d(-116.69, y1, -72.44);
		glVertex3d(-119.29, y1, -71.50);
		glVertex3d(-121.63, y1, -70.03);
		glVertex3d(-123.60, y1, -68.09);
		glVertex3d(-125.11, y1, -65.77);
		glVertex3d(-126.08, y1, -63.18);
		glVertex3d(-126.48, y1, -60.45);
		glVertex3d(-126.28, y1, -57.69);
		glVertex3d(-125.49, y1, -55.04);
		glVertex3d(-124.15, y1, -52.62);
		glVertex3d(-122.33, y1, -50.54);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3d(-122.33, y1, -50.54);
		glVertex3d(-76.10, y1, 32.90);
		glVertex3d(-140.84, y1, -26.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-84.53, y1, -63.02);
		glVertex3d(-111.19, y1, -72.56);
		glVertex3d(-122.33, y1, -50.54);
		glVertex3d(-76.10, y1, 32.90);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-140.84, y1, -26.85);
		glVertex3d(-138.30, y1, -6.17);
		glVertex3d(-133.19, y1, -2.18);
		glVertex3d(-81.35, y1, 43.16);
		glVertex3d(-82.54, y1, 41.31);
		glVertex3d(-81.80, y1, 40.85);
		glVertex3d(-82.33, y1, 40);
		glVertex3d(-75.81, y1, 36.61);
		glVertex3d(-76.10, y1, 32.90);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-140.84, y1, -26.85);
		glVertex3d(-138.30, y1, -6.17);
		glVertex3d(-133.19, y1, -2.18);
		glVertex3d(-81.35, y1, 43.16);
		glVertex3d(-82.54, y1, 41.31);
		glVertex3d(-81.80, y1, 40.85);
		glVertex3d(-82.33, y1, 40);
		glVertex3d(-75.81, y1, 36.61);
		glVertex3d(-76.10, y1, 32.90);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-48.26, y1, 29.48);
		glVertex3d(-47.64, y1, 33.15);
		glVertex3d(-40.50, y1, 34.86);
		glVertex3d(49.92, y1, -24.55);
		glVertex3d(-37.15, y1, -92.60);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-40.50, y1, 34.86);
		glVertex3d(-40.68, y1, 38.17);
		glVertex3d(-31.50, y1, 43.13);
		glVertex3d(49.92, y1, -24.55);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-31.50, y1, 43.13);
		glVertex3d(-30.84, y1, 47.11);
		glVertex3d(-14.13, y1, 45.06);
		glVertex3d(-7.86, y1, 40.36);
		glVertex3d(49.92, y1, -24.55);

		glEnd();
	}
};

