#include <stdio.h>
#include <conio.h>
#define SIZE 10

int f=-1, r=-1, que[SIZE];

void insert();
void show();
void del();

//Main Function
int main(){
  int ch;
  do{
    printf("\nPress 1 to insert");
    printf("\nPress 2 to show ");
    printf("\nPress 3 to delete ");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch){
       case 1 : insert();
		break;
       case 2 : show();
		break;
       case 3 : del();
		break;
       default : ch = 0;
		 break;
    }
  }while(ch!=0);
  getch();
  return 0;
}

//Insert Function
void insert(){
  int data;
  if(r==SIZE-1 && f==0){
    printf("\nQueue is nor empty\n");
  }
  else if(r==f-1){
    printf("\nQueue is not empty\n");
  }
  else if(r==SIZE-1){
    printf("\nEnter data : ");
    scanf("%d",&data);
    r = 0;
    que[r] = data;
  }
  else{
    printf("\nEnter data : ");
    scanf("%d",&data);
    r = r+1;
    que[r] = data;
    if(f==-1){
       f = 0;
    }
  }
}

//Show Function
void show(){
  int i;
  if(f==-1){
    printf("\nQueue is Empty!\n");
  }
  else if(r<f){
    for(i=f; i<=SIZE-1; i++){
	printf("%d\n",que[i]);
    }
    for(i=0; i<=r; i++){
       printf("%d\n",que[i]);
    }
  }
  else{
    for(i=f; i<=r; i++){
       printf("%d\n",que[i]);
    }
  }
}

//Delete Function
void del(){
  if(f==-1){
    printf("\nQueue is Empty\n");
  }
  else if(f==r){
    printf("\nDeleted Element = %d\n",que[f]);
    que[f] = 0;
    f = -1;
    r = -1;
  }
  else if(f==SIZE-1){
    printf("\nDeleted Element = %d\n",que[f]);
    que[f] = 0;
    f = 0;
  }
  else{
    printf("\nDeleted Element = %d\n",que[f]);
    que[f] = 0;
    f = f+1;
  }
}









































































































































































































































































































































