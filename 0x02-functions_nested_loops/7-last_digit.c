#include "main.h"

/**
 *print_last_digit prints the last digit of a number
 * 
 *Return: value of last digit
 */
int print_last_digit(int n)
{
  if (n>=0)
    {
      int last = n%10;
    }
  else if (n < 0)
    {
      int last = (n%10)*-1;
    }
  return (last);
}
