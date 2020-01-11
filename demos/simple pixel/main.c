#include "generator.c"

int main(int argc, char *argv[]){
    char output[] = "pic.bmp";
                  // Blue Gree Red
    char pixel[3] = {0xFF,0x52,0x00};
    buildBitMap(output,pixel);
}