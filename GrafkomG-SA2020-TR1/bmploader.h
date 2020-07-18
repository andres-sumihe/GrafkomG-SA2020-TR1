#ifndef BMPLOADER_H
#define BMPLOADER_H
#include <Windows.h>

class bmploader
{
public:
	unsigned char* textureData;
	int iWidth, iHeight;
	bmploader(const char*);
	~bmploader();

private:
	BITMAPFILEHEADER bfh;
	BITMAPINFOHEADER bih;

};
#endif 

