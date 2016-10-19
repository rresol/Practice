#include<stdio.h>

int list[1001];
int _lis(int a[], int n, int *max_ref)
{
	if(n==1)
		return 1;

	int res,max_ending_here = 1;
	for(int i=1;i<n;i++)
	{
		res = _lis(a,i,max_ref);
		if(a[i-1]<a[n-1]&& res+1>max_ending_here)
			{
				max_ending_here = res+1;
			}
	}
	if(*max_ref<max_ending_here){
		*max_ref = max_ending_here;
	}
	return max_ending_here;
}
int lis(int a[],int n)
{
	int max =1;
	return 	_lis(a,n,&max);
}

int _lis(int a,int n, int  *max_ref)
{
	if(n==1)
		return 1;

	int res, max_ending_here=1;
	for(int i=1;i<n;i++)
	{
		if(list[i-1])
		{
			res = list[i-1];
		}
		else
		{
			res = lis(a,i,max_ref);
		}
		list[i]= 1;
		if(a[i-1]<a[n-1] && res+1 >max_ending_here)
		{
			max_ending_here = res+1;

		}
	}
	if(*max_ref<max_ending_here)
		max_ending_here = max_ref;
	return max_ending_here;
}




int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of lis is %d\n",
           lis( arr, n ));
    return 0;
}