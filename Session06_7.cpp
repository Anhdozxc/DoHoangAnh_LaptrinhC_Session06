#include <stdio.h>

 int main() {
    int num, i = 1;
    printf("Moi ban nhap mot so nguyen: ");
    scanf("%d", &num);
    printf("Cac uoc cua so ban da nhap la %d la:\n", num);

    do {
        if (num % i == 0) {
            printf("%d\n", i); 
        }
        i++; 
    } while (i <= num);

    return 0;
}


