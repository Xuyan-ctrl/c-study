#include<stdio.h>
int main() {
	printf("请输入0-9以内的数字");
	int a[10];
	int i,x;
	for(i=0;i<10;i++){
		a[i]=0;
	}scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<10){
			a[x]++;
		}
		scanf("%d",&x);
	} int max=a[0];
	int number;
	for (i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
			number=i;
		}
	} printf("出现最多的数字是%d，出现了%d",number,max);
	
	 return 0;
	}
	
	 

	
