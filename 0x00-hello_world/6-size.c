#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long: %zu byte(s)\n", sizeof(long));
printf("Size of long long: %zu byte(s)\n", sizeof(long long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
This program uses the printf function to print the sizes of various types. The sizeof operator is used to obtain the size of each type in bytes, and the %zu format specifier is used to print the size as an unsigned integer.

By running this program, you will get the output similar to the following example:

csharp
Copy code
Size of char: 1 byte(s)
Size of short: 2 byte(s)
Size of int: 4 byte(s)
Size of long: 8 byte(s)
Size of long long: 8 byte(s)
Size of float: 4 byte(s)
Size of double: 8 byte(s)
Size of long double: 16 byte(s)
Please note that the sizes may vary depending on the computer architecture and compiler being used.







