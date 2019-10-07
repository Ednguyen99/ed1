#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c;
	float D;
	float x1,x2;
	printf("Nhap a , b va c\n");
	scanf("%f,%f,%f",&a,&b,&c);
	D= b*b-4*a*c;
	if (a==0){
		printf("a phai lon hon 0\n");
		return 0; // finish
	}
	if (D<0){
		printf("Phuong trinh vo nghiem\n");
	}
	if (D==0){
		float x= -b/(2*a);
		printf("Phuong trinh co nghiem kep\n");
	}
	if (D>0){
		float x1=(-b+sqrt(D))/(2*a);
		float x2=(-b-sqrt(D))/(2*a);
		printf("x1=%2f\n",x1);
		printf("x2=%2f\n",x2);
	}
	return 0;
}
