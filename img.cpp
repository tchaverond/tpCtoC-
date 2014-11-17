#include <cstdio>
#include "img.h"
#include <cstdlib>


img :: img(void)
{
  // Nothing to do
}

img :: img(const img& model)
{
  *image = *(model.image);
  width = model.width;
  height = model.height;
  *data = *(model.data);
}

void img :: ppm_write_to_file(int width, int height, unsigned char* data, FILE* file, char string[])
{

}

void img :: ppm_read_from_file(int *width, int *height, unsigned char** data, FILE* file)
{

}

void img :: ppm_desaturate(unsigned char* image, int width, int height)
{

}

void img :: ppm_shrink(unsigned char** image, int *width, int *height, int factor)
{

}
