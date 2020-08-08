#include <stdio.h>

#define MAX 10

int queue_array[MAX];
int rear = -1;
int front = -1;

void insert();

void delete();

void display();

int main(void)
{
    int choice;

    while(1)
    {
        printf("1, 삽입 \n");
        printf("2, 삭제 \n");
        printf("3, 조회 \n");
        printf("4, 종료 \n");
        printf("입력 : ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                return 1;

            default:
                printf("1~4 사이 수를 입력하시오\n");

        }

    }

    return 0;
}

void insert()
{
    int add_item;
    if( rear == MAX - 1)
    {
        printf("큐가 꽉참 \n");
    }

    else
    {
        if (front == -1)
        {
            front = 0;
        }

        printf("삽입할 값 : ");
        scanf("%d", &add_item);
        rear++;
        queue_array[rear] = add_item;
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("큐가 비어있음\n");
        return;
    }
    else
    {
        printf("큐에서 삭제됨 %d\n", queue_array[front]);
        front++;
    }
}


void display()
{
    int i;
    if(front == -1)
    {
        printf("큐가 비어있음 \n");
    }

    else
    {
        printf("큐 : ");

        for(i = front; i <= rear; i++)
        {
            printf("%d", queue_array[i]);
        }
        printf("\n");
    }
}