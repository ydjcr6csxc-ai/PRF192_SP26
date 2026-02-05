#include<stdio.h>
int main()
{
	float n;
	printf("nhap vao n:");
	scanf("%f",&n);
	while(n<=0 ||n>=1000){
		printf("nhap vao n:");
		scanf("%f",&n);
	}
	printf("can bac 2 la: %.2f", sqrt(n));
}