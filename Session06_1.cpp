#include <stdio.h>

 int main() {
     int num, sum = 0, count = 0;
    while (count < 5) {
        printf("Moi ban nhap so thu nhat %d: ", count + 1);
        scanf("%d", &num);  
     
        if (num % 2 != 0) {
            sum += num;  
        }
        count++;  
    }
    printf("Tong cac so le là: %d\n", sum);
    return 0;
}

