#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Largest palindrome from two 3-digit numbers.
 */
static int test_palindromic(unsigned int n);
int main(void)
{

unsigned int i, j, max = 0;
for (i = 100; i <= 999; i++)
  {
    for (j = 100; j <= 999; j++)
      {
      unsigned int p = i * j;
      if (test_palindromic(p) && p > max)
       {
       max = p;
      }
    }
  }
  printf("%u\n", max);
  return (0);
}

int test_palindromic(unsigned int n)
{
unsigned int reversed_num = 0, t = n;

while (t)
{
    reversed_num = 10 * reversed_num + (t % 10);
    t /= 10;
  }
  return (reversed_num == n);
}

