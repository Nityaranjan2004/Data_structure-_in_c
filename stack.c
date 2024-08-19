#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;
int push();
int pop();
int  display();

void main(){
     int choise;
   // clrscr();
    do{
        printf("................stack.............");
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\n................................\n");
        printf("Enter Your Choise");
        scanf("%d",&choise);
        switch(choise){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3:  display();
            break;
            default:printf("INVALID\n");
        }
    }while (choise!=4);
  getch();
}
  int push(){
    int n;
    if(top==MAXSIZE-1){
        printf("\nStack is overflow\n");
        
    }
    else{
        printf("\nEnter an number\n");
        scanf("%d",&n);
        top++;
        stack[top]=n;
       
    }
  return 0;
}
  int pop(){
    int n;
    if(top==-1){
        printf("\nStack is empty\n");
    }
    else{
        n=stack[top];
        top--;
        printf("\npoped element is  %d\n",n);
    }
    return 0;
}
  int display(){
    int i;
    if(top==-1){
         printf("\nStack is empty\n");
    }
    else{
        printf("\nElement in the stack\n");
        for(int i=top;i>=0;i--){
            printf("\n%d\n",stack[i]);
        }
    }
    return 0;
}
