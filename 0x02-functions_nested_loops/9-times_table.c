#include "main.h"

/**
 *prints the times table till 9
 */

void times_table(void);
{
  int a;
  int b;
  int product;
  for (a = 0; a <= 9; a++)
    {
      for (b = 0; b <= 9; b++)
	{
	  prod = a*b;
	  _putchar(prod);
	  _putchar(',');
	  _putchar(' ');
	  _putchar('\n');
	}
    }
}

	  
