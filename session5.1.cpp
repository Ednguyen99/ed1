#include <stdio.h>
int main(){
	int n; 
	int dem=0;
	int i;
	int j;
	printf("Nhap so n=\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		
		if(i%j==0)
		dem++;
	       
        } 
		if(dem == 2)
		{
		printf("%d,",i);
	    }
		dem=0;// phai reset lai gia tri dem de dem lai so gia moi
	
	}	
	return 0;
}
