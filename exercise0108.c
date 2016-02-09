#include <stdio.h>

main()
{
 int c, nb = 0, nt = 0, nl = 0;
 while((c = getchar()) != EOF)
 {
  switch(c)
  {
  case ' ':
   nb++;
   break;
  case '\t':
   nt++;
   break;
  case '\n':
   nl++;
   break;
  }
 }
 printf("count of\n");
 printf(" blanks   = %d\n", nb);
 printf(" tabs     = %d\n", nt);
 printf(" newlines = %d\n", nl);
}