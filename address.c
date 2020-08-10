#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 50;
    
    //& : ~의 주소, * : 그 주소로 가줘
    
    printf("%p\n", &n); //주소 출력
    printf("%i\n", *&n); // n 출력
    
    int *p = &n; 
    //int* : 포인터가 가리키는 값이 int임을 의미(포인터변수). 주소는 무조건 포인터에 저장해야됨
    // 포인터는 64bits 사용
    
    printf("%p\n", p); // 주소 출력
    printf("%i\n", *p); // n 출력
    
    string s = "EMMA";
    printf("%s\n", s);
    
    char *c = "EMMA";
    printf("%s\n", c); 
    //printf에서 %s를 사용해서 출력을 요청하면 널종단문자 만다기 전까지 출력
    
    printf("%p\n", c);
    printf("%p\n", &c[0]);
    printf("%p\n", &c[1]);
    printf("%p\n", &c[2]);
    printf("%p\n", &c[3]);
    printf("%p\n", &c[4]);
    
    printf("%c\n", *c);
    printf("%c\n", *(c+1));
    printf("%c\n", *(c+2));
    printf("%c\n", *(c+3));
}
