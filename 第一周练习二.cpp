#include<stdio.h> 
int main(){
	int a[8]={78,91,67,0,56,88,95,91}; 
	int count=0,sum=0,average,max=a[0],mini=a[0];
	int i,j;
	for(i=0;i<8;i++){
		if(a[i]==0){
			continue;//删除垃圾值 
		} count++;
		sum+=a[i];
	} average=sum/count;
	for(i=0;i<8;i++){
		if(a[i]==0){
			continue;
		} 
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<mini){
			mini=a[i];
		}
	} printf("最大值为%d，最小值为%d，平均值为%d\n",max,mini,average);
	int c;
	if(average<60){
		c=1;
	} else{ if(60<average&&average<75){
		c=2;
	} else c=3;
	}
	switch (c) {
	case 1:
	printf("alarm\n");
	break;
	case 2:
	printf("normal\n");
	break;
	case 3:
	printf("warning\n") ;
	break;	
	}
	int b[10];
	int n=0;
	for(i=0;i<8;i++){
		if(a[i]==0){
			continue;
		} b[n++]=a[i];
	} int t;
	for(i=0;i<6;i++){
		for(j=0;j<6-i;j++){
		if(b[j]>b[j+1])	{
			t=b[j+1];
			b[j+1]=b[j];
			b[j]=t;
		}
		}
	} for(i=0;i<n;i++) {
		printf("%d \n",b[i]); 
	}
	return 0;
}
