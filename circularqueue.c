#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int cqueue[MAXSIZE],rear=-1,front=-1;
void INSERT();
void DELETE();
void DISPLAY();

void main(){
    int choice;
    do{
        printf("\n..................CQUEUE.................\n");
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
    if((rear+1)%MAXSIZE==front){
        printf("\nQueue is over flow\n");
    }
    else{
        printf("\nEnter an Element to Insert\n");
        scanf("%d",&n);
        if(rear==-1 && front==-1){
            rear=0;
            front=0;
        }
        else{
            rear=(rear+1)%MAXSIZE;
        }
        cqueue[rear]=n;
    }
}
void DELETE(){
    int n;
    if(rear==-1 && front==-1){
        printf("\nqueue is empty\n");
    }
    else{
        n=cqueue[front];
        if(front==rear){
            front==-1;
            rear==-1;
        }
        else{
            front=(front+1)%MAXSIZE;
            printf("\nDeleted element is %d: ",n);
        }
    }
}
void DISPLAY(){
    int i;
    if(rear==-1 && front==-1){
        printf("\nqueue is empty\n");
    }
    else{
        printf("\nElement of queue\n");
        for(i=front;i!=rear;i=(i+1)%MAXSIZE){
            printf("%d ",cqueue[i]);
        }
         printf("%d ",cqueue[i]);
    }
}