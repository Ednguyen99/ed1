#include<stdio.h>
int main (){
	int n;
	int tmp;
	int j,i;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++)
	{
		printf("Nhap cac phan tu :\n",i);
		scanf("%d",&ary[i]);
	}
	for(int j=1;j<n;j++)
	{
		i=j-1;
		tmp=ary[j];
		while(i>=0&&tmp<ary[i])
		{
			ary[i+1]=ary[i];
			i--;
		}
		ary[i+1]=tmp;
	}
	for(int i=0;i<n;i++)
	{
	printf("%d\n",ary[i]);
    }
    int low=0;
    int high=n-1;
    int x;
    printf("Nhap so can tim x:\n");
    scanf("%d",&x);
    int flag=0;
    while(low<high){
    	int mid = low + (high - low)/2;
    	if(x==ary[mid]){
    		flag=1;
    		printf("tim thay so can tim %d\n",ary[mid]);
    		break;
		}else if (x<ary[mid]){
			high = mid - 1;
		}else if (x>ary[mid]){
			low = mid + 1;
		}
	}
	if(flag==0){
		printf("So x khong co trong mang\n");
	}
	return 0;
}
