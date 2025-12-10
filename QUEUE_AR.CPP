#include <stdio.h>
#include <conio.h>
#define SIZE 10

int f = -1, r = -1, que[SIZE];

void insert();
void del();
void show();

//Main Function
int main(){
  clrscr();
  int ch;
  do{
    printf("\nPress 1 for insert");
    printf("\nPress 2 for delete");
    printf("\nPress 3 for show");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch){
      case 1 : insert();
	       break;
      case 2 : del();
	       break;
      case 3 : show();
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
   if(r>=SIZE-1){
     printf("\nQueue is not empty!\n");
   }
   else{
     printf("Enter Data : ");
     scanf("%d",&data);
     r++;
     que[r] = data;
     if(f==-1){
       f=0;
     }
   }
}

//Show function
void show(){
   int i;
   if(r==-1){
     printf("\nQueue is Empty\n");
   }
   else{
     for(i=f; i<=r; i++){
	printf("%d\t\n",que[i]);
     }
   }
}

//Delete Function
void del(){
  if(f==-1){
     printf("\nQueue is empty\n");
  }
  else{
     que[f]=0;
     if(f==r){
       f=-1;
       r=-1;
     }
     else{
       f=f+1;
     }
  }
}

















































































