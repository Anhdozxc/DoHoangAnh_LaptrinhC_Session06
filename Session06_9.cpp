#include <stdio.h>

 int main() {
    int i, sum, num;
    printf("Cac so Armstrong 3 chu so: \n");

    for (i = 100; i <= 999; i++) {
        num = i;
        
        sum = (num / 100) * (num / 100) * (num / 100) 
            + ((num / 10) % 10) * ((num / 10) % 10) * ((num / 10) % 10) 
            + (num % 10) * (num % 10) * (num % 10);  
            
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}



