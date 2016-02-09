﻿#include <stdio.h>

int any(char s1[], char s2[]);

main()
{
 char s1[14] = "AncientGratin";
 printf("%d %d\n", any(s1, "ent"), any(s1, "ntr"));
}

/* Return the first location in the string s1 where any character from the string s2 occurs,
   or -1 if s1 contains no characters from s2. */
int any(char s1[], char s2[])
{
 int i, j;
 for(i = 0; s1[i] != '\0'; i++)
  for(j = 0; s2[j] != '\0'; j++)
   if(s1[i + j] != s2[j])
    break;
   else if(s2[j + 1] == '\0')
    return i + 1;
 return -1;
}