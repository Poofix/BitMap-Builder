/* --- HEADER ------------------------------------------------ (14 bytes) ---------------------------- */
const short _BMP_HEADER_SIGNATURE = 0x4D42; // HEADER image    (2 bytes : 0x424D)
int _BMP_HEADER_SIZE              = 0;      // HEADER size     (4 bytes)
const int _BMP_HEADER_RESERVED    = 0;      // HEADER reserved (4 bytes)
const int _BMP_HEADER_DATA_OFFST  = 0x36;   // HEADER offset   (4 bytes)

/* --- INFO HEADER -------------------------------------------------------------------- (40 bytes) --- */
const int _BMP_INFHEADER_SIZE          = 0x28; // INF_HEADER size                       (4 bytes)
int _BMP_INFHEADER_WIDTH               = 0;    // INF_HEADER picture width              (4 bytes)
int _BMP_INFHEADER_HEIGHT              = 0;    // INF_HEADER picture height             (4 bytes)
const short _BMP_INFHEADER_NBPLANES    = 0x01; // INF_HEADER nbPlanes                   (2 bytes)
const short _BMP_INFHEADER_BITS_PXL    = 0x18; // INF_HEADER bits per pixels            (2 bytes) (1,4,8,16,24) (24 = 0x18)
const int _BMP_INFHEADER_COMPRESS      = 0;    // INF_HEADER compression                (2 bytes) (0 = no compression, 1 = 8 bits, 2 = 4 bits)
const int _BMP_INFHEADER_IMGSIZE       = 0;    // INF_HEADER img size after compression (4 bytes) (set 0 if not compressed)
int _BMP_INFHEADER_X_PIXELS_PER_M      = 0;    // INF_HEADER X pixels per meter         (4 bytes)
int _BMP_INFHEADER_Y_PIXELS_PER_M      = 0;    // INF_HEADER Y pixels per meter         (4 bytes)
const int _BMP_INFHEADER_COLORS_USED   = 0;    // INF_HEADER colors used                (4 bytes) (Ex : 8bit / pixels = 100h (256 colors))
const int _BMP_INFHEADER_IMPORTANT_CLR = 0;    // INF_HEADER important color            (4 bytes) (0 = ALL)

/* --- COLOR TABLE --- */
// Note : Needed only if `_BMP_INFHEADER_BITS_PXL` is less 8 colors