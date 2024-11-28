#include <stdio.h>

 int main() {
    int n, count = 0, num = 2;
    printf("Moi ban nhap vao so nguyen n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Ban hay nhap n > 0.\n");
        return 0;
    }
    printf("Cac so nguyen to dau tien: ");
    while (count < n) {
        int isPrime = 1; 

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}




