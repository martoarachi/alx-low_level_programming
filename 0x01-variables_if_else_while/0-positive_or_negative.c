#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description; 'Check for number if it is positive or negative'
* Return: always 0
*/
int main(void) 
{
int n;
srand(time(NULL)); /** Seed the random number generator */
n = rand() % 201 - 100;  Generate a random number between - 100 and 100
printf("The number is: %d\n", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else 
{
printf("is zero\n");
}
return (0);
}
