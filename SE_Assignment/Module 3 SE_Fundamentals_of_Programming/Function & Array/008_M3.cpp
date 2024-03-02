#include <stdio.h>
#include <ctype.h>

int main() {
   char string[100];
   int i, length, status = 0;

   printf("Enter a string: ");
   gets(string);

   for(length = 0; string[length] != '\0'; length++);

   for(i=0; i<length; i++) {
      if((string[i]) !=(string[length-i-1])) {
         status = 1;
         break;
      }
   }

   if(status == 0)
      printf("%s is a palindrome string.\n", string);
   else
      printf("%s is not a palindrome string.\n", string);

   return 0;
}
