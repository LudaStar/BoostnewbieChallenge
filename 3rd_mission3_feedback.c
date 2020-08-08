#include <stdio.h>

#define SIZE 50000

int main(int argc, char *argv[])
{
    int n;
    
    scanf("%d", &n);
    
    int part_arr[SIZE];
    int length_of_part_arr = n-1;
    
    for(int i = 0; i < length_of_part_arr; i++)
    {
         scanf("%d", &part_arr[i]);
    }
    
    int part_sum = 0;
    
    for(int i = 0; i < length_of_part_arr; i++)
    {
        part_sum += part_arr[i];
    }
    
    int total_sum = n * (n + 1) / 2;
    
    int k  = total_sum - part_sum;
    
    printf("K = %d\n", k);
    
    return 0;
}