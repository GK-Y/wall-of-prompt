#include <iostream>

// mention the #define to include even the function implementations
// mentioned in the first line of the lib
#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb/stb_image_write.h"

int main() {
  // image meta-data para
  int width, height, channels;
  // in the last para based on the number mnetioned the buffer will give us data
  // of only that pixel values even if more exsist so a colored image and we ask
  // for channel 1 then we get a black and white image 0 i am guessing is just
  // give all details
  unsigned char *img =
      stbi_load("test_image.png", &width, &height, &channels, 1);

  if (img == NULL) {
    std::cout << "Image Load error";
  }

  // the sixth para in write_png stride_in_bytes is the total row size so
  // that is width * data_in_each_pixel so that means the number
  // of channels aare we stroing rgb or rgb alpha or only black
  // and white which is black and white in our case so only 1
  int saved =
      stbi_write_png("black_white_op.png", width, height, 1, img, width * 1);
  if (saved == 0) {
    std::cout << "Image Save had an Error";
  }

  return 0;
}

// channels basically mean the number of pixel states we can have
// so 1 means it is a black and white image 2 is grey and alpha(trnasparency)
// and so on
//     N=#comp     components
//       1           grey
//       2           grey, alpha
//       3           red, green, blue
//       4           red, green, blue, alpha
