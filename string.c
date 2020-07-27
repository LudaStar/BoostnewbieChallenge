#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input : ");
    printf("Output : ");

    for(int i = 0; s[i] != '\0' ; i++)
    {
        printf("%c", s[i]);
    }
    printf(", ");

    for(int j = 0, n = strlen(s); j < n; j++)
    {
        printf("%c", s[j]);
    }
    printf("\n");

}
