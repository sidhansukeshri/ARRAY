//my reg no is RA2211042010032
#include <stdio.h>
int main() {
    int a[2][2];
    a[0][0] = 10;
    a[0][1] = a[0][0] * 10;
    a[1][0] = a[0][1] / 5;
    a[1][1] = a[0][1] + a[1][0];
    printf("%d %d\n", a[0][0], a[0][1]);
    printf("%d %d\n", a[1][0], a[1][1]);
}
