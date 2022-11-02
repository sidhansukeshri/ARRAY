//this code prints the largest number in the given array by the user !
// my reg no is RA2211042010032 

#include <stdio.h>
void main()
{
    int mark[20],i,j,temp;
    printf("enter the 20 values to input in array!\n");
    for(i=0;i<20;i++)
        {
            scanf("%d",&mark[i]);
        }
        for(j=0;j<19;j++)
        {
            if(mark[j]>mark[j+1])
            {
                temp=mark[j];
                mark[j]=mark[j+1];
                mark[j+1]=temp;
            }
        }
        printf("max is :%d",mark[19]);
}   
