//my reg no is RA2211042010032
#include <stdio.h>
int main()
{
    int  marks[3];
    float  average;
    printf("Enter marks of first student :");
    scanf(" %d" , &marks[0]);
    printf("Enter marks of second student : ");
    scanf(" %d" , &marks[1]);
    printf("Enter marks of third student : ");
    scanf(" %d" , &marks[2]);
    average = (marks[0] + marks[1] + marks[2]) / 3.0;
    printf ("Average marks : %f\n" , average);
}
