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

    } while (sizeOfArray <= 0); //gets size of the array

    int array[sizeOfArray]; //creates array

    srand(time(0));

    for (int i = 0; i < sizeOfArray - 1; i++) //goes through every point in the array
    {
        int randNum = rand()%50; //makes a random number
        printf("%i, ", randNum); //prints that random number
        array[i] = randNum; //add the random number to the array
    }


    int randNum = rand()%50;
    printf("%i\n", randNum);
    array[sizeOfArray - 1] = randNum; //prints final point of the ray (was excluded from for loop for formating reasons)

    for (int i = sizeOfArray - 1; i > 0; i--) //go through array backwards
    {
        printf("%i, ", array[i]); //print every point
    }

    printf("%i\n", array[0]); //prints final point (done for formating reasons)
}
