#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int width;
    int height;

    do
    {
        width = get_int("What is the size of the array? (Width) : ");

    } while (width <= 0); //gets width of the array


    do
    {
        height = get_int("What is the size of the array? (height) : ");

    } while (height <= 0); //gets hieght of the array

    int array[width][height]; //creates array

    srand(time(0));

    for (int j = 0; j < width; j++)
    {
        for (int k = 0; k < height; k++) //cycles through every point in the array
        {
            int randNum = rand()%50; //creates a random number
            array[j][k] = randNum; //adds it to the array
            printf("%i ", array[j][k]); //prints the random number
        }
        printf("\n");
    }

    for (int j = width - 1; j >= 0; j--) //cycle through the array backwards
    {
        for (int k = height - 1; k >= 0; k--)
        {
            printf("%i ", array[j][k]); //print the each int in the array
        }
        printf("\n");
    }

}
