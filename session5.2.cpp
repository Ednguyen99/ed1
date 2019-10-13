#include<stdio.h>
#include<math.h>
int main()
{
	
	
	int n;
	float N=1;
	printf ("Nhap n = ");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
	 N=N*i;
	}
	printf ("Tich=%f ",N);
	
	
	return 0;
	
}
