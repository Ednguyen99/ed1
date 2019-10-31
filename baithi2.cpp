
#include <stdio.h>
int main() {
	int year = 0;
	double r = 0, sum = 0, lai = 0;
	printf("So von gui:\n");
	scanf("%lf",&sum);
	printf("So nam gui:\n");
	scanf("%d",&year);
	printf("Lai suat:\n");
	scanf("%lf",&r);
	
	for(int i = 1; i <= year; i++){
		lai = sum * (r / 100);
		sum += lai;
		printf("Nam %d, lai %lf, tong: %lf \n",i,lai,sum);
	}
		
	return 0;
}


