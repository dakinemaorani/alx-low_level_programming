#include <stdio.h>
/**
 *main - numbers with a comma and space in between
 *
 *return : 0
 */
int main(void){
  int num = '0';
  for (num = '0'; num <= '9'; num++){
    putchar(num);
    if (num!= '9'){
       putchar(',');
       putchar(' ');}}
    putchar('\n');
  return(0);
}
