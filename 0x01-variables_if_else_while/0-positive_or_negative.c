#include <stdio.h>
#include <time.h>
/* more headers goes here */

/*main - is n positive negative or 0 */

int main(void){
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0){
    printf("%d: is positive", n"\n");}
      else if (n < 0){
	printf("%d: is negative", n"\n");}
      else{
	printf("%d: is 0", n"\n");}
  return(0);
}