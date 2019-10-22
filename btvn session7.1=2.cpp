#include <stdio.h>
int main (){
	int n, max;
	int dem=0;
	printf("Nhap so luong phan tu\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap cac phan tu\n",i);
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(ary[i]>0)
	 {
	    dem++;
	    if(dem>max)
		{
	    	dem=max;
	    	dem++;
				
		}
	 }
	}
	printf("So luong so duong lien tiep nhieu nhat :%d\n",max);
	
	
	return 0;
}
