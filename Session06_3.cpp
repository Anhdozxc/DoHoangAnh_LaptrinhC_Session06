#include <stdio.h>
 int main(){
	int password = 789, i;
	for(;;){
		printf("Nhap mat khau:");
		scanf("%d", &i);
		if(i == password){
			printf("Dung mat khau");
			break;
		}else{
			printf("Sai mat khau\n");
			break;
		}
	}
	
	return 0;
}



