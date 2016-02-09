#include <stdio.h>

main()
{
 int c;

  while((c = getchar()) != EOF)
 {
  switch(c)
  {
  case '\t':
   putchar('\\');
   putchar('t');
   break;
  case '\b':    // backspace
   putchar('\\');
   putchar('b');
   break;
  case '\\':
   putchar('\\');
   putchar('\\');
   break;
  default:
   putchar(c);
   break;
  }
 }
}