#include <stdio.h>
int timsothuntrongdayfibonacci(int n3){
	int n1=0,n2=1,m;
	printf ("\nNhap so thu tu muon tim :");
	scanf ("%d",&m);
	printf ("\n==>So Fibonacci thu %d la :",m);
	for (int i=2;i<=m;i++)
	{
	    n3=n1+n2;
		n1=n2;
		n2=n3;
			
	}
	printf ("%d",n3);
	return n3;
}
int main (){
	int n3;
	timsothuntrongdayfibonacci(n3);
	return 0;
}
