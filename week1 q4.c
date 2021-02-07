#include <stdio.h>
void main()
{
	int phy,chem,bio,math,comp;
	float r;
	printf("enter the marks of phy,chem,bio,math,comp:\n");
	scanf("%d %d %d %d %d",&phy, &chem, &bio, &math, &comp);
	r=(phy+chem+bio+math+comp)/5;
	printf("the percentage of the marks obtained is:%.2f\n",r);
	if(r>=90)
	{
		printf("grade A");
	}
	else if(r>=80)
	{
		printf("grade B");
	}
	else if(r>=70)
	{
		printf("grade C");
	}
	else if(r>=60)
	{
		printf("grade D");
	}
	else if(r>=50)
	{
		printf("grade E");
	}
	else
	{
		printf("grade F");
	}
	
}
