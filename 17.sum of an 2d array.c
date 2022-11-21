//my reg no is RA2211042010032
#include <stdio.h>    
void main ()    
{    
    int arr[3][3],i,j,sum=0;     
    for (i=0;i<3;i++)    
    {    
        for (j=0;j<3;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<3;i++)    
    {    
        printf("\n\n");    
        for (j=0;j<3;j++)    
        {    
            printf("%d\t\t",arr[i][j]);    
        }    
    } 
    
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("\n\nsum = %d",sum);
}  
