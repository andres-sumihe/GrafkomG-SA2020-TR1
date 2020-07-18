#include "bmploader.h"
#include <stdio.h>
#include <iostream>

using namespace std;

bmploader::bmploader(const char* image) {
	/*FILE* file = 0;
	file = fopen(image, "rb");
	if (!file) cout << "Image Not Found" << endl;
	if (bfh.bfType != 0x4D42) cout << "Format Not Supported" << endl;
	if (bih.biSizeImage == 0)
		bih.biSizeImage = bih.biHeight * bih.biWidth * 3;
	textureData = new unsigned char[bih.biSizeImage];
	fseek(file, bfh.bfOffBits, SEEK_SET);
	fread(textureData, 1, bih.biSizeImage, file);
	unsigned char temp;
	for (int i = 0; i < i < bih.biSizeImage; i += 3) {
		temp = textureData[i];
		textureData[i] = textureData[i + 2];
		textureData[i + 2] = temp;

	}

	iWidth = bih.biWidth;
	iHeight = bih.biHeight;
	fclose(file);*/

}

bmploader::~bmploader() {
	delete[] textureData;
}