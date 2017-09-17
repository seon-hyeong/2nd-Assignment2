#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 3

char ch();

int main(){
   	 int i, input, num=0, n;
   	 srand((unsigned)time(NULL));
   	 i=ch();
     	 while (num<30){
     	  if(i==2){
      	  input=rand()%3 +1;
      	  num+=input;
      	  printf("computer (%d 만큼 +): %d\n",input,num);
      	  if(num>=30) {
		printf("승리하였습니다\n");
		break;
			}
      	}
      	do{
      	  printf("1~3까지 중 수를 입력하세요: ");
      	  scanf("%d", &n);
      	  if(n>3 || n<1) printf("1~3까지 입력하여야 합니다.\n");
        }while(n>3 && n<1);
      	  num+=n;
      	  printf("gamer (%d 만큼 +) : %d\n",n,num);
      	  if(num>=30){
		 printf("패배하였습니다\n");
			break;
		}
  
    	  if(i!=2)
     	   i+=1;
     	 }
 
 return 0;
}


char ch(){
    	 char ch1;
    	  printf("g(gamer)과 c(computer)중 누가 먼저 시작할지 고르세요");
 	  scanf(" %c", &ch1);
 	  if(ch1=='g') return 1;
 	  else if(ch1=='c') return 2;
      
    else return ch();
} 