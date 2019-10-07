#include <stdio.h>
int main(){
	int A;
	int B;
	int C;
	printf("Nhap so A\n");
	scanf("%d",&A);
	printf("Nhap so B\n");
	scanf("%d",&B);
	printf("gia tri ban dau cua A=%d\n",A);
	printf("gia tri ban dau cua B=%d\n",B);
	C=A;
	A=B;
	B=C;
	printf("gia tri hoan doi cua A=%d",A);
	printf("gia tri hoan doi cua B=%d",B);
	return 0;
}
