#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

const int NUMBER_OF_GRADES = 9;
const string GRADESTABLE[2][9] = {
            {"A+","A","B+","B","C+","C","D+","D","F"},
            {"95","90","85","80","75","70","65","60","0"}};

string getGrade(int score);
void printGradeTable(void);

int main(void)
{
    printf("학점프로그램입니다. 종료를 원하시면 -1을 입력하세요.\n");
    printGradeTable();

    while(true)
    {
        int score = get_int("성적을 입력하세요 (0~100) ");
        if(score == -1)
        {
            printf("학점프로그램을 종료합니다.\n");
            break;
        }

        else if(score < 0 || score > 100)
        {
            printf("성적을 올바르게 입력하세요! 범위는 0에서 100입니다. \n");
            continue;
        }
        else
        {
            printf("학점은 %s입니다.\n",getGrade(score));
        }
    }

    return 0;

}

string getGrade(int score)
{
    string grade = NULL;
    for(int i = 0; i < NUMBER_OF_GRADES; i++)
    {
        if(score >= atoi(GRADESTABLE[1][i]))
        {
            grade = GRADESTABLE[0][i];
            break;
        }
    }
    return grade;

}

void printGradeTable(void)
{
    for(int i = 0; i < 2; i++)
    {
        if(i==0)
        {
            printf("점수 : ");
        }
        else
        {
            printf("학점 : ");
        }

        for(int j = 0; j < NUMBER_OF_GRADES; j++)
        {
           printf("%s \t", GRADESTABLE[i][j]);
        }
        printf("\n");
	}
}
