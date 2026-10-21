#include<stdio.h> 
int main (){
	int a[5]={a[0]=0};
	int x,max,mini,i=0,sum=0;
	double average=0;	
	while(i<5){
		scanf("%d",&x);
	   	a[i]=x;
		i++;		
	} 
	for(i=0;i<5;i++){
		sum+=a[i];
	} average=sum/5.0;
	mini=a[0];
	max=a[0];
	for (i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
		} else{
			if(a[i]<mini){
				mini=a[i];
			}
		}
	}printf("最大值为%d，最小值为%d，平均值为%f\n",max,mini,average);
  int y=0,z=0;
	printf("请输入你的猜想\n");
	scanf("%d",&y);
	for(i=0;i<5;i++){
		if(y==a[i]){
			printf("yes");
			z=1;
			break;
		}
	} if(z!=1){
		printf("no");
	}
	
	return 0;	
}
