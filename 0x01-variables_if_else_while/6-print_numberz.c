#include <stdio.h>
/**
 *main - prints all numbers of base 10
 * 
 *Return: 0 always success
 */
int main(void)
{
  int num = '0';
  for (num = '0'; num <= '9'; num++)
    putchar(num);
  putchar('\n');
  return(0);
}
