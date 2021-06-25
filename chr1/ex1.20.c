#include <stdio.h>

#define TAB_LENGTH 4

int main ()
{
  int c;
  unsigned int nr_of_spaces;

  while((c = getchar()) != EOF)
  {
    if ( c == '\t')
    {
      nr_of_spaces = TAB_LENGTH;

      while (nr_of_spaces)
      {
        putchar(' ');
        --nr_of_spaces;
      }
    }
    else
    {
      putchar(c);
    }
  }

  return 0;
}
