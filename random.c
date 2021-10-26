#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sizeOfArray;
    do
    {
        sizeOfArray = get_int("What is the size of the array? : ");

    } while (sizeOfArray <= 0);

    int array[sizeOfArray];

    srand(time(0));

    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        int randNum = rand()%50;
        printf("%i, ", randNum);
        array[i] = randNum;
    }


    int randNum = rand()%50;
    printf("%i\n", randNum);
    array[sizeOfArray - 1] = randNum;

    for (int i = sizeOfArray - 1; i > 0; i--)
    {
        printf("%i, ", array[i]);
    }

    printf("%i\n", array[0]);
}
