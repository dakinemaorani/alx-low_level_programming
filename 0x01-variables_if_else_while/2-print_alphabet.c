#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *
 *Return: 0
 */

int main(void)
{
  char letter = 'a';
  for (letter ='a'; letter <= 'z'; letter++)
    putchar(letter);
  putchar('\n');
  return(0);
}
