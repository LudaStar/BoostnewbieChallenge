#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s : ");
    //char *s를 의미함
    
    string t = s;
    //char *t를 의미하므로 s와 t에 같은 주소값이 저장된 것
    
    t[0] = toupper(t[0]);
    
    printf("%s\n", s);
    printf("%s\n", t);
    
}