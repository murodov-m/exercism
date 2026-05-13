#include "difference_of_squares.h"

unsigned int    sum_of_squares(unsigned int number)
{
    unsigned int    n;
    unsigned int    collector;

    n = 0;
    collector = 0;
    while (n <= number)
    {
        collector = collector + (n * n);
        n++;
    }
    return (collector);
}

unsigned int    square_of_sum(unsigned int number)
{
    unsigned int    n;
    unsigned int    result;

    n = 0;
    result = 0;
    while (n <= number)
    {
        result =  result + n;
        n++;
    }
    return ((result * result));
}

unsigned int    difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}