//my reg no is RA2211042010032
#include <stdio.h>
int main() {
    int a[10][10], rows, cols, i, j;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n");
    scanf("%d", &cols);
    if (rows < 1 || cols < 1 || rows > 10 || cols > 10)
    {
        printf("Invalid number of rows or columns\n");
    }
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter row %i, column %i:\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Contents of the array are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
