//my reg no is RA2211042010032
#include <stdio.h>
int isPrime(int num)
{
	int i;
	int a=0; 
	for(i=2; i<num/2; i++)
	{
		if(num%i ==0)
		{
			a =1;
			break;
		}
	}
	if(a==1)
		return 0;
	else
		return 1;
}

int main()
{
	int j; 
	int arr[]={100, 200, 31, 13, 97, 10, 20, 11};
	int len = sizeof(arr)/sizeof(arr[0]);
	for(j=0;j<len; j++)
	{
		printf("%3d - %s\n",arr[j],(isPrime(arr[j])?"Prime":"Not Prime"));
	}
	printf("\n");
}
