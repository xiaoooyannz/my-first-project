#include<stdio.h>
int main()
{
int dividend;
int divisor;
printf("请输入被除数与除数："); 
scanf("%d %d",&dividend,&divisor);
if(divisor==0)
{
printf("不可以除以0");
return 1;
}
int count=0;
while(dividend>=divisor)
{
	dividend-=divisor;
	count++;
}
printf("商：%d，余：%d",count,dividend);
return 0;
}
