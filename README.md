# CS50x-Population-Growth-Challenge
Code written in C++ to determine how long it takes for a population to reach a particular size from gathering user input 'start', 'end', and the program outputting the number of years it will take (based on the pre-set birth and death rate) for the 'start' to reach the 'end' population number.

Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.

1) Your program should first prompt the user for a starting population size.
2) If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
3) Your program should then prompt the user for an ending population size.
4) If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
5) Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
6) Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.

Example Tests:
$ ./population
Start size: 1200
End size: 1300
Years: 1

Example Tests:
$ ./population
Start size: -5
Start size: 3
Start size: 9
End size: 5
End size: 18
Years: 8
