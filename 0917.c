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
      	  printf("computer (%d ��ŭ +): %d\n",input,num);
      	  if(num>=30) {
		printf("�¸��Ͽ����ϴ�\n");
		break;
			}
      	}
      	do{
      	  printf("1~3���� �� ���� �Է��ϼ���: ");
      	  scanf("%d", &n);
      	  if(n>3 || n<1) printf("1~3���� �Է��Ͽ��� �մϴ�.\n");
        }while(n>3 && n<1);
      	  num+=n;
      	  printf("gamer (%d ��ŭ +) : %d\n",n,num);
      	  if(num>=30){
		 printf("�й��Ͽ����ϴ�\n");
			break;
		}
  
    	  if(i!=2)
     	   i+=1;
     	 }
 
 return 0;
}


char ch(){
    	 char ch1;
    	  printf("g(gamer)�� c(computer)�� ���� ���� �������� ������");
 	  scanf(" %c", &ch1);
 	  if(ch1=='g') return 1;
 	  else if(ch1=='c') return 2;
      
    else return ch();
} 