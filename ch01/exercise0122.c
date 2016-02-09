#include <stdio.h>
#define MAXLINE 1000

int getstr(char str[], int maxline);
void fold(char str[], int len);
void detab(char from[], char to[]);

main()
{
 char s[MAXLINE];
 int len = getstr(s, MAXLINE);
 fold(s, len);
}

int getstr(char s[], int lim)
{
 int c, i;
 for(i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)
  s[i] = c;
 if(c == EOF)
 {
  s[i] = c;
  i++;
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

void fold(char s[])
{
 int i = 0;
 char tmp[MAXLINE];
 detab(s, tmp);
 while(tmp[i] != '\0')
 {
  if(i > 0 && i % 40 == 0)
   printf("\n");
  printf("%c", tmp[i++]);
 }
}