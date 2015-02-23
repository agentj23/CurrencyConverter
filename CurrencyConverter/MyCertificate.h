/**
 * MyCertificate.h
 */

#include <stdlib.h>

#ifndef VO_CERTIFICATE_TYPE
#define VO_CERTIFICATE_TYPE

/**
 * Holds a certificate.
 */
typedef struct _voCertificate
{
  /**
   * Pointer to the bytes composing the certificate.
   */
  const unsigned char* bytes;

  /**
   * Length of the certificate.
   */
  size_t length;
}
voCertificate;

#endif // end of: #ifndef VO_CERTIFICATE_TYPE

static unsigned char const myCertificate_BYTES[] =
{
    50,  112,   -7, -114,   57,  122,  -68,  -73,
    86,   53,   49,  -98, -106,  -63,   61, -101,
  -115,   22,   12,   -4,   84,   -2, -118, -113,
    49,  123,   -7,   11,  -72,    8,  -46,   74,
   -82,  -66,  -75,   45,  121,   68,  -80,  -52,
    23,  -29,   91,  101,   60, -102,  -18,    4,
   -88,   73, -109, -115, -101,  -27,   75, -105,
    96,  112,  -98,   36,   41,   38,  102,   66,
    24,   68,   65,   83,   77,   24,  -58,  108,
    83, -128,  124,  -19,  108,  -19,   33,  -39,
     8,   19,   -9,   50,  -75,  -58, -113,   70,
    12,  -69,  -26, -105,  -61,  -76,  -28,   12,
   -63,  -72,  108,  -64,   26,  -33,   29,   40,
   -45,   36, -115,  -79,  120,  113,  -30,  -15,
   -86,  -69,  102,  -65, -121,    3,  126,  -86,
    58,  -19,  -61,  -38,  -75,  -66, -107,  -49,
   -83,   53,  -47,  126,  -57,  105, -120,   -1,
   -15,  -67, -123,   17,  -69,   77,  -64,   73,
   100,  -57,   90, -118,  -88,  -66,  -61, -106,
   -43,   61,   50,  -35,  -68,  -48,  -54,  -79,
    -2,  -55, -127, -108,  -14,  -49,  -34, -124,
   -66,   38,   33,   64, -111,   86,   37,  -60,
   -58,   65,   95, -122,    8,  -65,   30,  -98,
   -55, -100,  -18,   90,  120,   30, -113,  -46,
     3,   86, -121,  -62,  -23,  106,  -18, -118,
   -25,  -32,  -60,   68,  -97,  101,  -45,   14,
     8,  -76,  117,  -15,   76,  -21,  -41,  124,
     8,  -78,  -24,  121, -116, -104,   68,  -63,
   -10,   56,  -65,   73,   -7,    7,  -80, -100,
    -1,   63,  123,  -93,  -70,   74,  -76,   67,
   -15,   32,  -34,   79,   25,   51,    7, -111,
   -40,   26,  -66,   89,   14,  -22,  -50,   41,
    34,  -89,  111,   30,  -18,   11, -117,   66,
   124,  -42,  -71,    3, -102,  -76,   55, -126,
   119,  -91,  111,   30,   68,   18, -117,   66,
   -80,   40,   69,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -101,  -76,   55, -126,
    39,   70,  -78,   28,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   68,   18, -117,   66,
   -64,   21,  101,   87,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -101,  -76,   55, -126,
    -9,  -39,   90,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   68,   18, -117,   66,
    -6,  -70, -103,   84,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -101,  -76,   55, -126,
  -107,  -28,  -47,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   71,   18, -117,   66,
    25,  -28,  -11,   84,  -82,  -71,   55, -126,
    43,  -91,  111,   30,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -104,  -76,   55, -126,
    34,   91, -116,   27,  121,   31, -117,   66,
   126,  -34,  -15,   86,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   71,   18, -117,   66,
   118,   70,   18,   84,  -92,  -71,   55, -126,
    32,  -91,  111,   30,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -104,  -76,   55, -126,
   -13, -109,  -39,   29,    4,   31, -117,   66,
   118,  -34,  -15,   86,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   71,   18, -117,   66,
  -100,  -34,    5,   85,  -47,  -71,   55, -126,
    38,  -91,  111,   30,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86,  -98,  -76,   55, -126,
   126,  -14, -102,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   65,   18, -117,   66,
  -106,  115,   62,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86,  -98,  -76,   55, -126,
   -10, -118,   46,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   65,   18, -117,   66,
    48,   53,  -20,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    57,  -26,  -73,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    21,  123, -126,   87,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    46,  -95, -101,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    94,  -68, -110,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -88,   38,  -41,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    87,  -57,   23,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   117,  118, -104,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    58,  -44,  -40,   87,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
  -111,   51,   66,   31,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    20,  -44,  120,   87,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
     3,   66,  -99,   31,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    -2,  -49,    9,   87,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   107,   20,   95,   28,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   -12,  119,  -61,   84,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   124,  126,   51,   28,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
  -115,  -76,  -82,   84,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    26,   59,  -61,   28,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    78,    8,   45,   84,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
     7,  -72,  110,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    48,  -47, -111,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -31,   21,   10,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   -43,   54, -105,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
  -117,   -1,    2,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
  -113, -110,  116,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    36,   10,  -59,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   105,   52,   92,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    51,   72,  -42,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
  -114,  -74,   48,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    31,  110, -119,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    51,   88,   25,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
  -101,   75, -112,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
  -121,  -28,  -14,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -81,   72,  102,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
     6,  -89,  -90,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    29,  -88,   54,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   -52,   76, -114,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
  -116,   16,   -5,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   -27,  -99,  102,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -58,   34,  -10,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    -3,   29,   89,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    75,    9,  -35,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    53,  125,   57,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    -6,  -19,  -75,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    79,   35,   46,   82,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    60, -101, -101,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    55,  -39,  -13,   83,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    82,  -94,  100,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   -53,   29,   -4,   83,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    24,   32,   90,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    13,   57,  -87,   83,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
  -123,   67,   53,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   -25,   67, -103,   83,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -22,  -15,    2,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    41,  127, -126,   83,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -72,  -47,   27,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
  -113,  -63,  124,   83,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -10,  -29,   -4,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    -1,    9,   79,   83,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    83,    2,  -70,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    13, -120,    9,   84,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    62,   26,   81,   29,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
    -3,   79,   64,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    80,   54,   93,   27,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
   -64, -107,  -83,   85,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
  -110,  127,    7,   28,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
  -115,   62,   85,   84,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
    32,  109,  101,   26,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,   70,   18, -117,   66,
  -103, -105, -126,   87,  101,   75,  -56,  125,
   -36,   90, -112,  -31,  -70,  -19,  116,  -67,
   100,  -34,  -15,   86,  101,   75,  -56,  125,
   -36,   90, -112,  -31,   69,   26,  -61,   23,
   124,  -34,  -15,   86, -103,  -76,   55, -126,
   -30,   88,  -76,   31,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87,  101,   75,  -56,  125,
    59,  -91,  111,   30,  -70,  -19,  116,  -67,
  -125,   33,   14,  -87, -102,  -68,  127,  -41,
    35,  -91,  111,   30,    0,   99,   -2,   35,
     8,  -73,  -98,   56,  -88,  -16,  127,  -43,
   113,  -11,   29,  123,   33,  123,  -24,   54,
    21,  -79,  -97,    5,  -14,  -43,   71,  -25
};

/**
 * Certificate that grants your application the right to use MyScript.
 */
static voCertificate const myCertificate =
{
  myCertificate_BYTES,
  sizeof(myCertificate_BYTES)
};

