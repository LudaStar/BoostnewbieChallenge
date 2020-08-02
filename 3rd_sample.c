#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

const int NUMBER_OF_ANSWERS = 10;
const int ANSWERS[NUMBER_OF_ANSWERS] = {1,2,3,4,5,1,2,3,4,5};

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95,90,85,80,75,70,65,60,0};
const char *GRADES[NUMBER_OF_GRADES] = {"A+","A","B+","B","C+","C","D+","D","F"};

int *charArrayToIntArray(char *target[], const int length);
int getNumberOfCollectAnswers(const int answers[], const int target[], int length);
int calculateScore(int numberOfCollectAnswers);
void printAnswers(string who, const int target[], int length);
char *calculateGrade(int totalScore, const int scores[], const char *grades[], int length);


int main(int argc, char *argv[]){

    if(argc != (NUMBER_OF_ANSWERS + 1)) {

        printf("문제는 10문제입니다. 현재 %d개의 답안을 제출했습니다. 10개의 답안을 제출하시오.\n",argc-1);
        printf("ex) ./3rd_sample 4 4 3 5 2 5 1 2 4 3\n");

        return -1;
    }

    int *studentAnswers = charArrayToIntArray(argv, argc);

    for(int i = 0; i <NUMBER_OF_ANSWERS; i++) {

        if (studentAnswers[i] >= 1 && studentAnswers[i] <= 5)

            continue;

        else
        {
            printf("답의 범위는 1~5입니다. 범위 외의 답안이 있습니다.\n");
            return -1;
        }
    }

    printf("학점평가 시작\n");

    int numberOfCollectAnswers =  getNumberOfCollectAnswers(ANSWERS, studentAnswers, NUMBER_OF_ANSWERS);

    int totalScore = calculateScore(numberOfCollectAnswers);

    char *grade = calculateGrade(totalScore, SCORES, GRADES, NUMBER_OF_GRADES);

    printAnswers("정답", ANSWERS, NUMBER_OF_ANSWERS);
    printAnswers("학생", studentAnswers, NUMBER_OF_ANSWERS);
    printf("정답 수: %d\n", numberOfCollectAnswers);
    printf("점수: %d\n", totalScore);
    printf("학점: %s\n", grade);

    return 0;
}

int *charArrayToIntArray(char *target[], const int length) {
	int *result = malloc(sizeof(int) *NUMBER_OF_ANSWERS);
	//malloc함수는 동적 메모리 할당

	for (int i = 0; i < NUMBER_OF_ANSWERS; i++) {
		result[i] = atoi(target[i + 1]);
		//atoi함수는 char to int
	}

	return result;
}


int getNumberOfCollectAnswers(const int answers[], const int target[], int length) {
	int numberOfCollectAnswers = 0;

	for (int i = 0; i < length; i++) {
		if (answers[i] == target[i]) {
			numberOfCollectAnswers++;
		}
	}

	return numberOfCollectAnswers;
}

int calculateScore(int numberOfCollectAnswers) {
	return numberOfCollectAnswers * 10;
}

void printAnswers(string who, const int target[], int length) {
	//원래는 char *who 였는데 바뀸
	printf("%s : ", who);

	for (int i = 0; i < length; i++) {
		printf("%d\t", target[i]);
	}
	printf("\n");
}

char* calculateGrade(int totalScore, const int scores[], const char *grades[], int length) {
	char *grade;
	grade = NULL;

	for (int i = 0; i < length; i++) {
		if (totalScore >= scores[i]) {
			grade = malloc(sizeof(char) * strlen(grades[i]));
			strcpy(grade, grades[i]);
			//strcpy는 문자열 복사함수 strcpy(char *dest, const char *origin);
			break;
		}
	}

	return grade;
}