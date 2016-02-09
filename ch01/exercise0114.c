#include <stdio.h>

main()
{
 int c, i, j, nother = 0, nc[26];
 
 for(i = 0; i < 26; i++)
  nc[i] = 0;

  while((c = getchar()) != EOF)
 {
  if(c >= 'A' && c <= 'Z')
   ++nc[c - 65];
  else if(c >= 'a' && c <= 'z')
   ++nc[c - 97];
  else
   ++nother;
 }

  for(i = 0; i < 26; i++)
 {
  printf("%c\t", i + 65);
  for(j = 0; j < nc[i]; j++)
   printf("*");
  printf("\n");
 }

  printf("Etc\t");
 for(j = 0; j < nother; j++)
  printf("*");
 printf("\n");
}