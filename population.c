#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
  int start, end;
  do
  {
      start = get_int("Start size: ");
  }
  while (start < 9);
  
    // TODO: Prompt for end size
  do
  {
      end = get_int("End size: ");
  }
  while (end <= start);
  
    // TODO: Calculate number of years until we reach threshold
  int years, born, died;
  years = 0;
  
    while (start < end) {
        born = start / 3;
        died = start / 4;
        start = start + born - died;
        years++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);

}
