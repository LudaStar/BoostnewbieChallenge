#include <stdio.h>

int main(void)
{
    
    //get_int
    int x;
    printf("x: ");
    scanf("%i", &x);
    //scanf 함수의 변수가 실제 스택 안에 x가 저장된 주소로 찾아가서 사용자가 입력한 값을 저장
    printf("x : %i \n", x);


    /*char *s = NULL;
    printf("s : ");
    scanf("%s", s);
    //char*는 주소이기 때문에 &가 필요 없음
    printf("s : %s \n", s);  */


    //get_string 
    char ss[5];
    printf("ss: ");
    scanf("%s", ss);
    printf("ss: %s \n", ss);
}