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
  int years, born, died, growth;
    for (years = 0; start < end; years++) {
        born = start / 3;
        died = start / 4;
        growth = start + born - died;
    }
    // TODO: Print number of years
    printf("Years: %i\n", growth);

}
