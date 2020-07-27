#include <stdio.h>
#include <cs50.h>

void deposit(int principal);

int main(void)
{
 int principal = get_int("월 납부액 : ");
 deposit(principal);
}

void deposit(int principal)
{
    int result = 0;
    for(int i = 0; i < 12; i++)

    {
        result += principal;
    }

    int total = result + (result*1.2/100);
    printf("받게 될 금액 : %d \n", total);
}