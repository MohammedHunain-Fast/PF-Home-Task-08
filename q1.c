//Task#01:
#include <stdio.h>
#define LIMIT 4
int main() {
	int classes[3][4]={
		{85,92,78,90},
		{88,76,95,84},
		{90,85,88,92}
	};
	float avg[3]={0};
	for(int i=0;i<=2;i++) {
		for(int j=0;j<=3;j++) {
			if(i==0)
				avg[i]+=classes[i][j];
			else if(i==1) 
				avg[i]+=classes[i][j];
			else 
				avg[i]+=classes[i][j];					
	}
}
	printf("\t-------Averages-----\t\n");
	printf("Average of class 1:%.2f\n",avg[0]/LIMIT);
	printf("Average of class 2:%.2f\n",avg[1]/LIMIT);
	printf("Average of class 3:%.2f\n",avg[2]/LIMIT);		
	return 0;
}