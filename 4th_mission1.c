#include <stdio.h>
#include <cs50.h>

int* sort(int array[]);
//void printArray(int array[]);
void compare(int array1[], int array2[]);

int main(void)
{
    int input_1[5] = {1,2,3,4,5};
    int input_2[5] = {5,4,3,2,1};


    int input2_1[5] = {1,4,2,5,8};
    int input2_2[5] = {2,5,4,3,1};

    int input3_1[5] = {1,1,1,3,2};
    int input3_2[5] = {2,1,1,3,1};

    compare(sort(input_1), sort(input_2));
    compare(sort(input2_1), sort(input2_2));
    compare(sort(input3_1), sort(input3_2));
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

/*void printArray(int array[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
}*/

void compare(int array1[], int array2[])
{
    for(int i = 0; i < 5; i++)
    {
        if(array1[i] != array2[i])
        {
            printf("false\n");
            return;
        }
    }
    printf("true\n");
}