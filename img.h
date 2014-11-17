class img
{
 protected :
  FILE* image;
  int width;
  int height;
  unsigned char* data;
  ;

 public :
  img(void);
  img(const img&);

  int getwidth(void) const;
  int getheight(void) const;
  unsigned char* getdata(void) const;

  void setwidth(int);
  void setheight(int);
  void setdata(unsigned char*);

  void ppm_write_to_file(int width, int height, unsigned char* data, FILE* file, char string[]);
  void ppm_read_from_file(int *width, int *height, unsigned char** data, FILE* file);
  void ppm_desaturate(unsigned char* image, int width, int height);
  void ppm_shrink(unsigned char** image, int *width, int *height, int factor);
 ;
};
