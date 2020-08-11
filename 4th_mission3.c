#include <stdio.h>
#include <cs50.h>

int* sort(int array[]);


int main(void)
{
    int people = 4;
    int speed[people] = {5,2,1,10};
}


int* sort(int array[])
{
    int temp;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return array;
}

void getWay (int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        
    }
}