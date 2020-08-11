#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void closest_home(int array[], int length);

int main(void)
{
    int input[5] = {1,4,5,2,3};
    int input2[6] = {2,2,2,4,4,4};

    closest_home(input, sizeof(input)/sizeof(int));
    closest_home(input2, sizeof(input2)/sizeof(int));

    return 0;

}

void closest_home(int array[], int length)
{
    int home = array[0];
    int min, distance = 0;
    int distanceArray[length];

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            distance += abs(array[j] - array[i]);
            distanceArray[i] = distance;

            if(i == 0)
            {
                min = distance;
            }
        }

        if(distance < min)
        {
            min = distance;
            home = array[i];
        }

        distance = 0;
    }

    for(int i = 0; i < length; i++)
    {
        if(min == distanceArray[i])
        {
            printf("%d",array[i]);
        }
    }
    printf("\n");

}