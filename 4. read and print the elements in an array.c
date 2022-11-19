//my reg no is RA2211042010032
#include<stdio.h>
void main()
{
    int arr[3];
    int i, j;
    printf("Enter array element :");
    for(i = 0; i < 3; i++)
    {
      scanf("%d", &arr[i]);
    }
    printf("Array elements are : ");
    for(j = 0; j < 3; j++)
    {
        printf("%d\n", arr[j]);
    }
}
