//Task#03
#include <stdio.h>

int main() {
	int ogimage[4][4]={
		{1,0,1,0},
		{0,1,0,1},
		{1,1,0,0},
		{0,0,1,1}
	},newimage[4][4]={0},counter=0;
	
	for(int i=0;i<=3;i++) {
		for(int j=0;j<=3;j++) {
			if(ogimage[i][j]==1)
			newimage[i][j]+=0;
			else
			newimage[i][j]+=1;
				
		}
	}
	for(int i=0;i<=3;i++) {
		for(int j=0;j<=3;j++) {
			if(ogimage[i][j]==1)
			counter++;	
		}
	}
	
	printf("----New Inverted Image----\t\n");
	for(int i=0;i<=3;i++) {
		for(int j=0;j<=3;j++) {
			printf("%4d",newimage[i][j]);
		}
		printf("\n");
	}
	printf("----Original Image----\t\n");
	for(int i=0;i<=3;i++) {
		for(int j=0;j<=3;j++) {
			printf("%4d",ogimage[i][j]);
		}
		printf("\n");
	}
	printf("----White Pixels in Original Image----\t\n");
	printf("White pixels:%d",counter);
	
	
	return 0;
}