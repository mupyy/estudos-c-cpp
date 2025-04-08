/* Author: Victor Mielitz
    Date: 27/11/2022
    Desc: This program calculate predeterminated value of the fatec simulations
    */
#include <stdio.h>

int main()
{
    int value = 0, i;

    for (i = 1; i <= 3001; i = i + 3)
        value += i;

    printf("Value = %d", value);
}

