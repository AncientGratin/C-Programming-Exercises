#include <stdio.h>

main()
{
 int c, i, j, len = 0, nlength[10];
 int max_num = 0; // Save the largest number of words to print '*' of a vertical orientation as it.
 for(i = 0; i < 10; i++)
  nlength[i] = 0;

  while((c = getchar()) != EOF)
 {
  if(c == ' ' || c == '\t' || c == '\n')
  {
   if(len > 0 && len < 10)
    ++nlength[len - 1];
   else if(len >= 10)
    ++nlength[9];
   else if(len < 0)
   {
    printf("Error: wrong word length!\n");
    return;
   }
   len = 0;
  }
  else
  {
   ++len;
  }
 }

  for(i = 0; i < 10; i++)
  if(max_num < nlength[i])
   max_num = nlength[i];

  printf("1\t2\t3\t4\t5\t6\t7\t8\t9\tEtc\n");
 for(i = 0; i <= max_num; i++)
 {
  for(j = 0; j < 10; j++)
  {
   if(i < nlength[j])
    printf("*");
   if(j < 9)
    printf("\t");
  }
  printf("\n");
 }
}