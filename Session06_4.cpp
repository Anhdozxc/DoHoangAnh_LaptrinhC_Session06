#include <stdio.h>

 int main() {
    double a, b, c, delta, x1, x2;
    
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (a == 0) {
        printf("Day khong phai la phuong trinh bac 2!\n");
    } else if (delta > 0) {   
        x1 = (-b + delta) / (2 * a); 
        x2 = (-b - delta) / (2 * a);  
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x1 = x2 = %.2f\n", x1);
    } else {
        printf("Phuong trinh vo nghiem thuc.\n");
    }

    return 0;
}


