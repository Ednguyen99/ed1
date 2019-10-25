#include <stdio.h>
void inracacsoletrongmang(int ary[],int n){
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			printf("Cac so le trong mang la: %d\n",ary[i]);
		}
	}
}
int main (){
	int n;
	printf("Nhap so n :\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i < n;i++){
		printf("Nhap phan tu thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	inracacsoletrongmang(ary,n);
	return 0;
}

