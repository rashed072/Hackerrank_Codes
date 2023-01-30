/*#include<stdio.h>

int main() {
   char inputString[128];

   printf("Enter a multi line string( press ';' to end input)\n");
   scanf("%[^\n]s", inputString);

   printf("Input String = %s", inputString);

   return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch;
    scanf("%c\n",&ch);
    char s[20];
    scanf("%s\n",s);
    char sen[100];
    scanf("%[^\n]s\n",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
}
