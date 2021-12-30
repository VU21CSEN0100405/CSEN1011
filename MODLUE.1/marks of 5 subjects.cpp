#include<stdio.h>
int main()
   {
   	int eng,math,phy,che,san;
   	int total,average,percentage;
   	eng=82,math=88,phy=90,che=93,san=96;
   	total=eng+math+phy+che+san;
   	printf("totalmarks: %d\n",total);
   	average=total/5;
   	printf("average marks: %d\n",average);
   	percentage=(total*100)/500;
   	printf("percentage marks: %d\n",percentage);
   	}
