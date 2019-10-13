#include <stdio.h>
int main(){
	int S=0;
	for(int i=0;i<=200;i++){
	    if(i%2!=0)
		S=S+i;
	}
	printf("S=%d",S);
 return 0;
}
