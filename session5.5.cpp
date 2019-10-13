#include <stdio.h>
#include <math.h>
int main (){
	int s=0,n,i;
	printf("Nhap so n=");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0) 
		s=s+i;
	}
	if(s==n){
	printf("la so hoan hao\n");
    }else{
    	printf("khong phai la so hoan hoa\n");
	}
	return 0;
}
