#include <stdio.h>
int main(){
	int n;
	for(n=0;n<6;n++)
	{
	do {
		printf("vui long chon chuc nang:\n");
		printf("1. Goi do uong\n");
		printf("2. Goi mon an\n");
		printf("3. Tinh tien\n");
		printf("4. Bonus\n");
		printf("5. Thoat chuong trinh\n");
		scanf("%d",&n);
	}while(n>5||n<1);
	switch(n){
		case 1: printf("Kh vua goi do uong\n");break;
		case 2: printf("Kh vua goi mon an\n");break;
		case 3: printf("Kh goi tinh tien\n");break;
		case 4: printf("Khach bonus ne hihi\n");break;
		case 5: printf("Kh vua thoat\n");break;
		}
}
	
return 0;		
}
