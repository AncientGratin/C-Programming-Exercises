#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

///* getbits: get n bits from potition p */
//unsigned getbits(unsigned x, int p, int n)
//{
// return (x >> (p + 1 - n)) & ~(~0 << n);
//}

main()
{
 // Test the function
 unsigned x = 127, y = 8;
 printf("%u\n", setbits(x, 4, 3, y));

  x = 55, y = 20;
 printf("%u\n", setbits(x, 4, 4, y));
}

/* return x with the n bits that begin at position p set to the rightmost n bits of y,
   leaving the other bits unchanged */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
 int i, m = n, digitsx = 0;
 unsigned z = x;
 while(1)
  if(z <= 1)
   break;
  else {
   z = z >> 1;
   digitsx++;
  }
 z = 0;
 for(i = digitsx; i >= 0; i--) {

   // reference getbits() function
  z += (i > p || i <= p - n) ? ((x >> i) & ~(~0 << 1)) : ((y >> (--m)) & ~(~0 << 1));

   z = z << 1;
 }
 z = z >> 1;
 return z;
}