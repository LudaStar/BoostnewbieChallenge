#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[9] = 0;
    //x[10] = 0;이라고 하면 버퍼 오버플로우 발생
    
    free(x);
}

int main(void)
{
    f();
    return 0;
}