#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
    
    printf("x is %i, y is %i \n", x, y);
    
    swap(x, y);// 이 함수는 x와 y자체가 아니라 x,y의 복사본을 전달받음
    
    printf("x is %i, y is %i \n", x, y);

}

void swap(int a, int b) 
{
    int tmp = a;
    a = b;
    b = tmp;
}