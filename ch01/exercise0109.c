#include <stdio.h>

main()
{
 int c, prev_c = 65;
 while((c = getchar()) != EOF)
 {
  if(prev_c != ' ' || c != ' ')
   putchar(c);
  prev_c = c;
 }
}