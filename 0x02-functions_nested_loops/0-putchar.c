#include <stdio.h>
#include "main.h"
/**
 * main - this is the starting point of the program
 * Return ; 0
 **/
int main(void)
{
  int i, size;
  int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
  size = sizeof(str) / sizeof(int);
  for (i = 0; i < size; i++)
    {
      _putchar(str[i]);
      _putchar('\n');
    }
  return (0);
}
