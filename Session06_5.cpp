#include <stdio.h>

 int main() {
    int year, month, days;

    printf("Moi ban nhap nam: ");
    scanf("%d", &year);
    printf("Moi ban nhap thang (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Thang nay khong hop le!\n");
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
        printf("Thang 2 cua nam %d co %d ngay.\n", year, days);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
        printf("Thang %d cua nam %d co %d ngay.\n", month, year, days);
    } else {
        days = 31;
        printf("Thang %d cua nam %d co %d ngay.\n", month, year, days);
    }
    return 0;
}



