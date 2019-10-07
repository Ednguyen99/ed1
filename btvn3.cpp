#include <stdio.h>
int main (){
	int A;
	int B;
	printf("Nhap so thu nhat\n");
	scanf("%d",&A);
	printf("Nhap so thu hai\n");
	scanf("%d",&B);
	if (A>B){
		printf("Max=%d\n",A);
	}else{
		printf("Max=%d\n",B);
	}
	return 0;
	
}
