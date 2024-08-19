#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int queue[MAXSIZE],rear=-1,front=0;
void INSERT();
void DELETE();
void DISPLAY();

void main(){
    int choice;
    do{
        printf("\n..................QUEUE.................\n");
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("\n........................................\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch (choice){
            case 1:INSERT();
            break;
            case 2:DELETE();
            break;
            case 3:DISPLAY();
            break;
            default:printf("\nINVALID\n");
        }
    }while(choice!=4);
}
void INSERT(){
    int n;
    if(rear==MAXSIZE-1){
        printf("\nQueue is full\n");
    }
    else{
        printf("\nEnter a number\n");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
}
void DELETE(){
    int n;
    if(front>rear){
        printf("\nQueue is empty\n");
    }
    else{
        n=queue[front];
        printf("\nDeleted element is %d\n",n);
        front++;
    }
}
void DISPLAY(){
    if(front>rear){
        printf("\nQueue is empty\n");
    }
    else{
        printf("\nQueue element\n");
        for(int i=rear;i>=front;i--){
            printf("%d\n",queue[i]);
        }
    }
}