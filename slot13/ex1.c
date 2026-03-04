#include <stdio.h>

void doubleX(int x){
	x = x + x;
}

void doubleX2(int *p){
	*p = *p + *p;
}

void inputArr(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void outputArr(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int isPrime(int n){
	int i;
	if(n < 2)
		return 0;

	for(i = 2; i <= n/2; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int countPrimes(int a[], int n){
	int i, count = 0;
	for(i = 0; i < n; i++){
		if(isPrime(a[i]))
			count++;
	}
	return count;
}

int main(){
	int x = 10;

	doubleX2(&x);
	printf("Gia tri x = %d\n", x);

	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);

	int a[100];

	inputArr(a, n);

	printf("Mang vua nhap: ");
	outputArr(a, n);

	int totalPrime = countPrimes(a, n);
	printf("\nSo luong so nguyen to trong mang: %d\n", totalPrime);

	return 0;
}