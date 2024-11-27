#include <stdio.h>

 int main() {
    int num;
    int evenCount = 0, oddCount = 0;
    int count = 1;  
    while (count <= 5) {
        printf("Moi ban nhap so thu nhat %d: ", count);
        scanf("%d", &num);      
        if (num % 2 == 0) {
            evenCount++;  
        } else {
            oddCount++;   
        }

        count++; 
    }
    printf("So luong so chan la: %d\n", evenCount);
    printf("So lu?ng so le la: %d\n", oddCount);

    return 0;
}



