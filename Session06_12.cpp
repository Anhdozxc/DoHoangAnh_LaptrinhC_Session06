#include <stdio.h>

 int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap n > 0.\n");
        return 0;
    }
    int a = 0, b = 1, c;

    printf("Day Fibonacci %d so dau tien: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
        } else if (i == 2) {
            printf("%d ", b);
        } else {
            c = a + b; 
            a = b; 
            b = c; 
            printf("%d ", c);
        }
    }
    printf("\n");
    return 0;
}

