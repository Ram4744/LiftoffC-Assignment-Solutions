#include <stdio.h>
int main()
{
	float R,D,C,A;
	printf("enter radius of circle:\n");
	scanf("%f",&R);
	D=2*R;
	C=2*3.14*R;
	A=3.14*(R*R);
	printf("diameter of circle=%f\n",D);
	printf("the circumference of the circle =%f\n",C);
	printf("the area of the circle =%f\n",A);
}
