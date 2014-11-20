#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "img.h"


//============================================================================
//                                  Main
//============================================================================
int main(int argc, char* argv[])
{
  //--------------------------------------------------------------------------
  // Read file "gargouille.ppm" into image (width and height)
  //--------------------------------------------------------------------------
  img* gargouille = new img();
  gargouille->ppm_read_from_file();

  //--------------------------------------------------------------------------
  // Create a desaturated (B&W) copy of the image we've just read and
  // write it into "gargouille_BW.ppm"
  //--------------------------------------------------------------------------
  // Copy image into image_bw
  img* gargouille_bw = new img(*gargouille); 

  // Desaturate image_bw
  gargouille_bw->ppm_desaturate();

  // Write the desaturated image into "gargouille_BW.ppm"
  char output[] = "gargouille_BW.ppm";
  gargouille_bw->ppm_write_to_file(output);

  // Free the desaturated image
  delete(gargouille_bw);

  //--------------------------------------------------------------------------
  // Create a resized copy of the image and
  // write it into "gargouille_small.ppm"
  //--------------------------------------------------------------------------
  // Copy image into image_small
  img* gargouille_small = new img(*gargouille);

  // Shrink image_small size 2-fold
  gargouille_small->ppm_shrink(2);

  // Write the desaturated image into "gargouille_small.ppm"
  char output2[] = "gargouille_small.ppm";
  gargouille_small->ppm_write_to_file(output2);

  // Free the not yet freed images
  delete(gargouille);
  delete(gargouille_small);

  return 0;
}
