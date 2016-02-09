#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAXLINE 1000

int htoi(char s[]);

int err = 0;

main()
{
 extern int err;
 int dec = 0;
 char h[MAXLINE];
 printf("Input a heximal number: ");
 scanf("%s", h);
 dec = htoi(h);
 if(err == 0)
  printf("Decimal number is %d\n", dec);
}

int htoi(char s[])
{
 extern int err;
 int dec = 0, i, hdigit = strlen(s);
 for(i = 0; i < hdigit; i++)
 {
  if(s[i] >= '0' && s[i] <= '9')
   dec += (int)(s[i] - '0') * pow(16.0, hdigit - i - 1);
  else if(s[i] >= 'A' && s[i] <= 'F')
   dec += (int)(s[i] - 'A' + 10) * pow(16.0, hdigit - i - 1);
  else if(s[i] >= 'a' && s[i] <= 'f')
   dec += (int) (s[i] - 'a' + 10) * pow(16.0, hdigit - i - 1);
  else
  {
   printf("Error: parameter is not a heximal number.\n");
   err = 1;
   return 0;
  }
 }
 return dec;
}