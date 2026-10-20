#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int a=rand();
	a=a%100;
	int i,x,b; 
	printf("我已经想好了一个数\n");
	do{	
	for (i=1;i<=7;i++) {
		printf("请输入你的猜想\n"); 
		scanf("%d",&x);
		if (x>a) {
			printf("猜大了，你还剩%d次机会\n",7-i); 
		}else { if(x<a) {
		  printf("猜小了，你还剩%d次机会\n",7-i);	
		} else {
			printf("猜对了，你一共花了%d次机会\n",i);								
			i=8;
		} 			
		}		 
	}if (i==7) {
		printf("次数用完了，再来一次回答1，终止游戏回答2\n");
	} else{		
		printf("再来一次回答1，终止游戏回答2\n");
	}	
	scanf("%d",&b);
    }while (b==1);
	printf("游戏结束"); 
	 return 0;
}
