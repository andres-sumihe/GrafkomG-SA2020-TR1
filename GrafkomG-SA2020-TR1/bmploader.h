#ifndef BMPLOADER_H
#define BMPLOADER_H

class bmploader
{
public:
	unsigned char* textureData;
	int iWidth, iHeight;
	bmploader(const char*);
	~bmploader();

};
#endif 

