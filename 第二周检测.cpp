#include<stdio.h>
int sumstudent(int x1,int x2,int x3,int x4); 
int averagestudent(int c);
int averageproject(int a1,int a2, int a3);
int main(){
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}//遍历数组读取成绩 
	int m;
 for(i=0;i<3;i++){
 	m=sumstudent(a[i][0],a[i][1],a[i][2],a[i][3]);
 	printf("%d同学的总分为%d，平均分为%d\n",i,sumstudent(a[i][0],a[i][1],a[i][2],a[i][3]),averagestudent(m));
 }//遍历数组求每一位同学的平均分与总分 
 int c[3];
 int  d[3]; 
 for(i=0;i<3;i++){
 	c[i]=sumstudent(a[i][0],a[i][1],a[i][2],a[i][3]);
 	d[i]=c[i]/4;
 }//每一位同学总分与平均分的表达
 int max=c[0],number=0;
 for(i=1;i<3;i++){
  if(max<c[i]){
  	max=c[i];
  	number=i;
  }	
 }
 printf("总分最高的学生为%d\n",number);//找出总分最高的学生 
 int e[4] ;
 for(i=0;i<4;i++){
 	e[i]=averageproject(a[0][i],a[1][i],a[2][i]);
 } //每一个学科的平均分 
 printf("姓名  语文  数学  英语  物理  总成绩  均分\n");
 for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d  ",a[i][j]);							
}printf("%d  %d\n",c[i],d[i]);
printf("\n");
}printf("科目均分  %d  %d  %d  %d",e[0],e[1],e[2],e[3]);
return 0;
}
int sumstudent(int x1,int x2,int x3,int x4){
	return x1+x2+x3+x4;
}
int averagestudent(int c){
	return c/4;
}
int averageproject(int a1,int a2, int a3) {
  	return (a1+a2+a3)/3;
}
