#include<stdio.h>

int front = -1, rear = -1;
int arr[5];
int main()
{
    enqueue(5);
    dequeue();
    peek();
    display();
}
void enqueue(int x)
{
    if(front==-1 && rear==-1){
        front++;
        rear++;
        arr[rear] = x;
    }
    else if(front==4 && rear==4){
        printf("\nOverflow Condition.\n");
    }
    else{
        rear++;
        arr[rear] = x;
    }
}
void dequeue()
{
    if(front ==-1 && rear ==-1){
        printf("\nUnderflow Condition.\n");
    }
    else if(front==rear){
        printf("\nThe value is = %d\n",arr[front]);
        front = -1;
        rear = -1;
    }
    else{
        printf("\nThe value is = %d\n",arr[front]);
    }
}
void peek()
{
    if(front==-1 && rear==-1){
        printf("\nUnderflow Condition.\n");
    }
    else{
        printf("\nThe value is = %d\n",arr[front]);
    }
}
void display()
{
    if(front==-1 && rear==-1){
        printf("\nUnderflow Condition.\n");
    }
    else{
        for(int i=front; i<=rear; i++){
            printf("\nThe elements is = %d\n",arr[i]);
        }
    }
}


