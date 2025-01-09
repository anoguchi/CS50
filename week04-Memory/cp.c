#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
  // ready binary mode
  FILE *src = fopen(argv[1], "rb");
  // write in binary
  FILE *dst = fopen(argv[2], "wb");

  // copy 1-byte por vez
  BYTE b;

  while (fread(&b, sizeof(b), 1, src) != 0)
  {
    fwrite(&b, sizeof(b), 1, dst);
  }

  fclose(dst);
  fclose(src);
}
