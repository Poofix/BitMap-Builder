#include <stdio.h>
#include "generator.h"

int main(int argc, char *argv[]) {

    printf("Building BitMap picture...");

    FILE *fp;

    fp = fopen ("pic.bmp","w");
    
    /* --------- File Generation --------- */
    // Write HEADER
    fwrite(&_BMP_HEADER_SIGNATURE, 1, sizeof(_BMP_HEADER_SIGNATURE), fp);
    fwrite(&_BMP_HEADER_FILE_SIZE, 1, sizeof(_BMP_HEADER_FILE_SIZE), fp);
    fwrite(&_BMP_HEADER_RESERVED, 1, sizeof(_BMP_HEADER_RESERVED), fp);
    fwrite(&_BMP_HEADER_DATA_OFFST, 1, sizeof(_BMP_HEADER_DATA_OFFST), fp);
    
    //Write HEADER INFO
    fwrite(&_BMP_INFHEADER_SIZE, 1, sizeof(_BMP_INFHEADER_SIZE), fp);
    fwrite(&_BMP_INFHEADER_WIDTH, 1, sizeof(_BMP_INFHEADER_WIDTH), fp);
    fwrite(&_BMP_INFHEADER_HEIGHT, 1, sizeof(_BMP_INFHEADER_HEIGHT), fp);
    fwrite(&_BMP_INFHEADER_NBPLANES, 1, sizeof(_BMP_INFHEADER_NBPLANES), fp);
    fwrite(&_BMP_INFHEADER_BITS_PXL, 1, sizeof(_BMP_INFHEADER_BITS_PXL), fp);
    fwrite(&_BMP_INFHEADER_COMPRESS, 1, sizeof(_BMP_INFHEADER_COMPRESS), fp);
    fwrite(&_BMP_INFHEADER_IMGSIZE, 1, sizeof(_BMP_INFHEADER_IMGSIZE), fp);
    fwrite(&_BMP_INFHEADER_X_PIXELS_PER_M, 1, sizeof(_BMP_INFHEADER_X_PIXELS_PER_M), fp);
    fwrite(&_BMP_INFHEADER_Y_PIXELS_PER_M, 1, sizeof(_BMP_INFHEADER_Y_PIXELS_PER_M), fp);
    fwrite(&_BMP_INFHEADER_COLORS_USED, 1, sizeof(_BMP_INFHEADER_COLORS_USED), fp);
    fwrite(&_BMP_INFHEADER_IMPORTANT_CLR, 1, sizeof(_BMP_INFHEADER_IMPORTANT_CLR), fp);

    // Write COLOR TABLE

    // Write DATA

    /* ------ End File Generation -------- */

    fclose (fp);
    printf("Done.\n");
    return 0;
}