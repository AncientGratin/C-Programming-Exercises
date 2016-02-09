#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

main()
{
 // test the function
 unsigned x = 55;
 printf("%u\n", invert(x, 3, 3));

  x = 41;
 printf("%u\n", invert(x, 5, 5));
}

/* return x with the n bits that begin at position p inverted (i.e., 1 changed into o and vice versa),
   leaving the others unchanged */
unsigned invert(unsigned x, int p, int n)
{
 int i, m = p - n + 1, digitsx = 0;
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
  z += (i > p || i <= p - n) ? ((x >> i) & ~(~0 << 1)) : ((x >> (m++)) & ~(~0 << 1));

   z = z << 1;
 }
 z = z >> 1;
 return z;
}