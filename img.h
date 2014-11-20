class img
{
 protected :
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

  void ppm_write_to_file(char[]);
  void ppm_read_from_file(void);
  void ppm_desaturate(void);
  void ppm_shrink(int);
 ;
};
