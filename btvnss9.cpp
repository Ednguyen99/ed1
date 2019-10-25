#include <stdio.h>
void timsotrongmang(int ary[],int n,int x){
	int i;
	for(i=0;i<n;i++){
		if(x==ary[i]){
			break;
		}
	}
	if(i<n){
		printf("tim thay so %d tai vi tri %d\n",x,i);
	}else{
		printf("khong tim thay so %d\n",x);
	}
}
int main (){
	int n;
	printf("nhap n:\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i<n;i++){
		printf("nhap phan tu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("nhap gia tri x\n");
	scanf("%d",&x);
	timsotrongmang(ary,n,x);
	return 0;
}
