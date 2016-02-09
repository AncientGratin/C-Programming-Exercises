#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void detab(char from[], char to[]);

main()
{
 char from[MAXLINE], to[MAXLINE];
 int len = getline(from, MAXLINE);
 detab(from, to);
 printf("%s\n", to);
}

int getline(char s[], int lim)
{
 int c, i;
 for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
  s[i] = c;
 if(c == '\n') {
  s[i] = c;
  ++i;
 }
 s[i] = '\0';
 return i;
}

void detab(char from[], char to[])
{
 int i, j, li = 0; // li: line index
 int m = 0;   // temporary index for blank insertion
 for(i = 0; from[i] != '\0'; i++)
  if(from[i] == '\t')
  {
   m = li;
   if(m % 8 == 0)
    for(j = 0; j < 8; j++)
     to[li++] = ' ';
   else
    for(j = 0; j < 8 - m % 8; j++)
     to[li++] = ' ';
  }
  else
   to[li++] = from[i];
 to[li] = '\0';
}
