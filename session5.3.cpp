#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float S=0;
	printf ("Nhap n = ");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
	 S=S+(float)1/i;
	}
	printf ("Tong la : %f  ",S);
		return 0;
	
}
