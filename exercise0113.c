#include <stdio.h>

main()
{
 int c, i, j, nother = 0, len = 0, nlength[10];
 for(i = 0; i < 10; i++)
  nlength[i] = 0;

  while((c = getchar()) != EOF)
 {
  if(c == ' ' || c == '\t' || c == '\n')
  {
   if(len > 0 && len < 11)
    ++nlength[len - 1];
   else if(len > 10)
    ++nother;
   else if(len < 0)
   {
    printf("Error: wrong word length!\n");
    return;
   }
   len = 0;
  }
  else
   ++len;
 }

  for(i = 0; i < 10; i++)
 {
  printf("%d\t", i + 1);
  for(j = 0; j < nlength[i]; j++)
   printf("*");
  printf("\n");
 }
 printf("Etc\t");
 for(j = 0; j < nother; j++)
  printf("*");
 printf("\n");
}