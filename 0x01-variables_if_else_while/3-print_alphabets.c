#include <stdio.h>
/**
 *main- print lower case and upper case alphabet
 *return 0
 */

int main(void){
  char letter = 'a';
  char uletter = 'A';
  for (letter ='a'; letter <= 'z'; letter++){
    putchar(letter);}
  for (uletter = 'A'; uletter <= 'Z'; uletter++){
    putchar(uletter);}
  putchar('\n');
    return(0);
}
  
