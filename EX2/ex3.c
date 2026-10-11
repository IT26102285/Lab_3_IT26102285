#include<stdio.h>
int main(void)
{
	float b;
	float a;
	float h;

	printf("Enter the area of sail(square meters)");
	scanf(""%f",&a);

	h=sqrt(a*3.0);
	b=(2.0/3.0)*h;

	printf("Base length:%2f\n",b);
	printf(" Height :%2f\n",h);

	return 0
}
