#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUMBER_OF_ANSWERS = 10;
const int ANSWERS[NUMBER_OF_ANSWERS] = {1,2,3,4,5,1,2,3,4,5};

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95,90,85,80,75,70,65,60,0};
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+","B","C+","C","D+","D","F"};


int *char_array_to_int_array(char *target[], const int length);

int get_number_of_correct_answers(const int answers[], const int target[], int length);

int calculate_score(int number_of_correct_answers);

void print_answers(char *who, const int target[], int length);

char *calculate_grade(int total_score, const int scores[], const char *grades[], int length);



int main(int argc, char*argv[])
{
    if(argc != (NUMBER_OF_ANSWERS + 1))
    {
        printf("문제는 10문제입니다. 현재 %d 개의 답안을 제출했습니다.\n", argc-1);
        printf("ex) ./mission2 4 3 5 1 2 1 3 3 4 2\n");
        return -1;
    }

    int *student_answers = char_array_to_int_array(argv, argc);
    
    for(int i = 0; i < NUMBER_OF_ANSWERS; i++)
    {
        if(student_answers[i] >= 1 && student_answers[i] <= 5)
        {
            continue;
        }
        else
        {
            printf("답의 범위는 1~5입니다. 범위 외의 답안이 있습니다.\n");
            return -1;
        }
    }
    
    printf("학점평가 시작\n");
    
    int number_of_correct_answers = get_number_of_correct_answers(ANSWERS, student_answers, NUMBER_OF_ANSWERS);
    
    int total_score = calculate_score(number_of_correct_answers);
    
    char *grade = calculate_grade(total_score, SCORES, GRADES, NUMBER_OF_GRADES);
    
    print_answers("정답", ANSWERS, NUMBER_OF_ANSWERS);
    print_answers("학생", student_answers, NUMBER_OF_ANSWERS);
    printf("정답 수 : %d\n", number_of_correct_answers);
    printf("점수 : %d\n", total_score);
    printf("학점 : %s\n", grade);
    
    return 0;
    
}


int *char_array_to_int_array(char *target[], const int length)
{
    int *result = malloc(sizeof(int) * NUMBER_OF_ANSWERS);
    
    for(int i = 0; i < NUMBER_OF_ANSWERS; i++)
    {
        result[i] = atoi(target[i+1]);
    }
    return result;
}


int get_number_of_correct_answers(const int answers[], const int target[], int length)
{
    int number_of_correct_answers = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(answers[i] == target[i])
        {
            number_of_correct_answers++;
        }
    }
    return number_of_correct_answers;
}


int calculate_score(int number_of_correct_answers)
{
    return number_of_correct_answers * 10;
}


void print_answers(char *who, const int target[], int length)
{
    printf("%s : ",who);
    
    for(int i = 0; i < length; i++)
    {
        printf("%d \t", target[i]);
    }
    printf("\n");
}

char *calculate_grade(int total_score, const int scores[], const char *grades[], int length)
{
    char *grade;
    grade = NULL;
    
    for(int i = 0; i < length; i++)
    {
        if(total_score >= scores[i])
        {
            grade = malloc(sizeof(char) * strlen(grades[i]));
            strcpy(grade, grades[i]);
            break;
        }
    }
    return grade;
}

/*char *calculate_grade(int total_score, const int scores[], const char *grades[], int length)
{
    
    for(int i = 0; i < length; i++)
    {
        if(total_score >= scores[i])
        {
            return grades[i];
        }
    }
    return "학점없음";
} */