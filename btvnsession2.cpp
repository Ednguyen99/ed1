#include <stdio.h>
int main (){
	int a;
	int b;
	int c;
	
	printf("so thu nhat:");
	scanf("%d",&a);
	
	printf("so thu hai:");
	scanf("%d",&b);
	
	printf("so thu ba:");
	scanf("%d",&c);
	if(a>b){
		if(b>c){
			printf("a max=%d\n",a);
			printf("c min=%d\n",c);
		}else{
			if(a>c){
				printf("a max=%d\n",a);
				printf("b min=%d\n",b);
			}else{
				printf("c max=%d\n",c);
				printf("b min=%d\n",b);
			}
		}
	}else{
		if(a>c){
			printf("b max=%d\n",b);
			printf("c min=%d\n",c);
		}else{
			if(b>c){
				printf("b max=%d\n",b);
				printf("a min=%d\n",a);
			}else{
				printf("c max=%d\n",c);
				printf("a min=%d\n",a);
			}
		}
	}
    return 0;
}
