#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
// ./argv 뒤에 단어를 입력하면 argv[]에 들어감. argc는 단어의 개수
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}