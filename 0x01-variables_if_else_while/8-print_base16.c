#include <stdio.h>
/**
 *main - print base 16 numbers
 *
 *return : 0
 */
int main(void){
  char num = '0';
  char let = 'a';
  for(num = '0'; num <= '9'; num++){
    putchar(num);}
  for(let = 'a'; let <= 'f'; let++){
    putchar(let);}
  putchar('\n');
  return(0);
}
