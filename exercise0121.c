#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void entab(char from[], char to[]);

main()
{
 char from[MAXLINE], to[MAXLINE];
 int len = getline(from, MAXLINE);
 entab(from, to);
 printf("%s\n", to);
}

int getline(char s[], int lim)
{
 int c, i;
 for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
  s[i] = c;
 if(c == '\n')
 {
  s[i] = c;
  i++;
 }
 s[i] = '\0';
 return i;
}

void entab(char from[], char to[])
{
 int nblank = 0, i, j, ti = 0;
 
 for(i = 0; from[i] != '\0'; i++)
  if(from[i] == ' ' && i % 8 == 7) {
    for(j = 0; j < nblank; j++) {
     ti--;
    }
    to[ti++] = '\t';
   }
  else {
   nblank = from[i] == ' ' ? nblank + 1 : 0;
   to[ti++] = from[i];
  }

  to[ti] = '\0';
}