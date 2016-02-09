#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
 printf("range of char : %d ~ %d\n", CHAR_MIN, CHAR_MAX);
 printf("range of short: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
 printf("range of int  : %d ~ %d\n", INT_MIN, INT_MAX);
 printf("range of long : %d ~ %d\n", LONG_MIN, LONG_MAX);
 printf("range of unsigned char : 0 ~ %u\n", UCHAR_MAX);
 printf("range of unsigned short: 0 ~ %u\n", USHRT_MAX);
 printf("range of unsigned int  : 0 ~ %u\n", UINT_MAX);
 printf("range of unsigned long : 0 ~ %u\n", ULONG_MAX);

  printf("range of float: %lf ~ %lf\n", FLT_MIN, FLT_MAX);
 printf("range of double: %lf ~ %lf\n", DBL_MIN, DBL_MAX);
}