//this code sorts the given array in assending order and prints the array !
//my reg no is RA2211042010032

#include <stdio.h>
void main()
{
    int numbers[30],n,m,i,j,temp;
    printf("enter the value of N : ");
    scanf("%d",&n);
    printf("\n_enter the elements_");
        for(i=0;i<n;++i)
        {   
            scanf("%d",&numbers[i]);
        }
        for (i=0;i<n;++i)
        {
        for(j=i+1;j<n;++j)
        {
            if(numbers[i]>numbers[j])
            {
                temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=numbers;
            }
        }
        }
        printf("the out is:\n");
        for(m=0;m<n;m++)
        {
            printf("%d  ",numbers[m]);
        }
    }
