#include <stdio.h>
int main (){
	int n;
	printf ("Nhap so n phan tu:\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i<n; i++){
		printf(" Nhap phan tu\n",i);
		scanf("%d",&ary[i]);
	}
	for(int i=n-1;i<n;i--){
		if(ary[i]%2!=0){
		printf("Gia tri le cuoi cung trong mang la:%d\n",ary[i]);
		return ary[i];
	}
	}
	
	return 0;
}
