#include<stdio.h>
int main() {
	int a[5]={0};
	int i=0,j,sum=0,t,count=0,b;
	double average=0;
	do{
		scanf("%d",&b);
		if (b>100||b<0){
			printf("成绩无效，请重新输入！");
		} else{
			a[i]=b;
			i++;
		}
		}
	while(i<5);

	for(i=0;i<5;i++){
		sum+=a[i];
	} average=sum/5.0;
	int max=a[0];
	int mini=a[0];
	for(i=0;i<5;i++) {
		if(a[i]>max){
			max=a[i];
		} else{
			if(a[i]<mini){
				mini=a[i];
			}
		}
	} printf("平均分为%f，最高分为%d，最低分为%d\n",average,max,mini);
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(a[j]<a[j+1]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	} for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]>=60){
			count++;
		}
	} printf("及格人数为%d\n",count);
	return 0;
}
