#include <stdio.h>

int main(){
	float a, b, c;
	printf("nhap a, b, c:");
	scanf("%f%f%f", &a,&b,&c);
	float max;
	max = a;
	if(max<b)
		max = b;
	if(max<c)
			max = c;
	printf("so lon nhat la: %.2f", max);
}