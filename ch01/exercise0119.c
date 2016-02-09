#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char s[]);

main()
{
 char line[MAXLINE];
 int len = getline(line, MAXLINE);
 reverse(line);
 printf("%s\n", line);
}

int getline(char s[], int lim)
{
 int c, i;

  for(i = 0; i < lim - 1 &&(c = getchar()) != EOF && c != '\n'; i++)
  s[i] = c;
 s[i] = '\0';
 return i;
}

void reverse(char s[])
{
 int i, len;
 char tmp[MAXLINE];
 for(i= 0; s[i] != '\0'; i++);
 len = i;
 for(i = 0; i < len; i++)
  tmp[i] = s[len - i - 1];
 tmp[len] = '\0';
 for(i = 0; i < len; i++)
  s[i] = tmp[i];
}