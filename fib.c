#include<stdio.h>
int fibo[1000];
int fib(int n)
{
	fibo[0]=1;
	fibo[1]=1;
	for(int i=2;i<n;i++)
	{
		fibo[i] = fibo[i-2] +fibo[i-1]; 
	}
	return fibo[n-1];
}

int main()
{

	int n;
	scanf("%d",&n);
	int ans = fib(n);
	printf("%d\n", ans);
}