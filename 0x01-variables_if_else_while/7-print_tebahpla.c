#include <stdio.h>
/**
 *main - alphabet backwards
 *
 *return 0
 */
int main(void){
  char letter = 'z';
  for (letter = 'z'; letter >= 'a'; letter--)
    putchar(letter);
  putchar('\n');
  return(0);
}
