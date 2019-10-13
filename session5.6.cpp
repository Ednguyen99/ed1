#include <stdio.h>
int main(){
	int n;
	int m;
	do {
		printf("vui long chon chuc nang:\n");
		printf("1. Goi do uong\n");
		printf("2. Goi mon an\n");
		printf("3. Tinh tien\n");
		printf("4. Bonus\n");
		scanf("%d",&n);
		printf("5. Thoat chuong trinh\n",m);
		scanf("%d",&m);
	}while(n>5||n<1||m>5);
	switch(n){
		case 1: printf("Kh vua goi do uong\n");break;
		case 2: printf("Kh vua goi mon an\n");break;
		case 3: printf("Kh goi tinh tien\n");break;
		case 4: printf("Khach bonus ne hihi\n");break;
	}
	switch(m){
		case 5: printf("Kh vua thoat\n");break;
	
	}
return 0;		
}
