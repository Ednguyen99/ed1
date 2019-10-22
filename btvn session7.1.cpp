#include <stdio.h>
int main (){
	int n,min;
	printf ("Nhap so n phan tu:\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i<n; i++){
		printf(" Nhap phan tu\n",i);
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(ary[i]>0)
		{
			min=ary[i];
			break;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		if(ary[i]>0&&ary[i]<min)
		{
			min=ary[i];
        }
	}
		printf("Gia tri nguyen duong nho nhat la:%d\n",min);
		return min;
return 0;
}	
