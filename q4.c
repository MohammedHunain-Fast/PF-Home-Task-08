//Task#04
#include <stdio.h>

int main() {
	int cinema[3][3]={
		{1,0,1},
		{0,0,1},
		{1,1,0}
	},available=0,position[3][3]={0};
	for(int i=0;i<=2;i++) {
		for(int j=0;j<=2;j++) {
			if(cinema[i][j]==0) {
			available+=1;
			position[i][j]+=1;
		}
		}
	}
	printf("----Available Seats----\t\n");
	printf("Total:%d\n",available);
	printf("----Row and Seat Number----\t\n");
	for(int i=0;i<=2;i++) {
		for(int j=0;j<=2;j++) {
			if(position[i][j]==1) 
			printf("Row:%d,Seat Number:%d\n",i+1,j+1);
		}
	}
		
	return 0;
}