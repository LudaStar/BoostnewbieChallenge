#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

#define queueLength 10

int client[queueLength] = {0, };


bool isFull(int front, int rear){
  if (rear == queueLength) return true;
  else return false;
}

bool isEmpty(int front, int rear){
  if (front == rear) return true;
  else return false;
}

void insert(int number, int rear){
  client[rear] = number;
}

void add(int* front, int* rear){
  int* ptr_rear = rear;
  if (isFull(*front, *rear)) {
    printf("Queue is full\n");
  }
  else {
    int element = get_int("Insert a number to add : ");
    insert(element, (*ptr_rear)++);
  }
}

int delete(int front){
  return client[front];
}

void pop(int* front, int* rear){
  int* ptr_front = front;
  if (isEmpty(*front, *rear)) {
    printf("Queue is empty\n");
  }
  else{
    printf("removed number : %d\n", delete((*ptr_front)++));
  }
}

void display(int front, int rear){
  for (int i = front; i < rear; i++){
    printf("%d ", client[i]);
  }
  printf("\n");
}


int main(){
  int input;
  int front = 0;
  int rear = 0;

  bool flag = true;
  while (flag) {
    printf("\n");
    printf("Choose queue action\n");
    input = get_int("(1) Add (2) Pop (3) Display (4) Quit : ");
    switch(input){
      case 1:
        add(&front, &rear);
        break;
      case 2:
        pop(&front, &rear);
        break;
      case 3:
        display(front, rear);
        break;
      case 4:
        flag = false;
        break;
    }
  }
  return 0;

}