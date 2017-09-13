#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 3
char ch();
int main()
{
 int i,input,number=0,n;
 srand((unsigned)time(NULL));
 i=ch();
 while (number<30){
  if(i==2){
   input=rand()%3 +1;
   number+=input;
   printf("computer (%d만큼 더함): %d\n",input,number);
   if(number>=31) printf("승리\n");
  }
  do{
  printf("1부터3까지 중 수를 입력하세요: ");
  scanf("%d", &n);
  if(n>3||n<1) printf("1부터3까지 입력하세요.\n");
  }
while(n>3||n<1);
number+=n;
printf("사용자 (%d 만큼 더함) : %d\n",n,number);
if(number>=31) printf("패배\n");
if(i!=2)
i+=1;
}
 
return 0;
}
char ch(){
 char ch1;
 printf("g(사용자)과 c(컴퓨터)중 누가 먼저 시작할까요??");
 scanf("%c", &ch1);
 if(ch1=='g') return 1;
 else if(ch1=='c') return 2;
 else return ch();
} 