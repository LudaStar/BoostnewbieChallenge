#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    
    //Open file
    FILE *file = fopen("phonebook.csv", "a");
    //두 번째 인자 -> r : read, w : write, a : append
    
    
    //Get strings from user
    char *name = get_string("Name : ");
    char *number = get_string("Number : ");
    
    
    //print(write) strings to file
    fprintf(file, "%s,%s \n", name, number);
    
    
    //Close file
    fclose(file);
    
}