#include<stdio.h>
int main(){
	float temp[7][3]={{22.5, 28.3, 25.0}, // Day 1
        {21.8, 29.0, 24.5}, // Day 2
        {23.0, 30.1, 26.2}, // Day 3
        {22.2, 27.8, 24.0}, // Day 4
        {20.9, 26.5, 23.5}, // Day 5
        {21.5, 28.0, 24.8}, // Day 6
        {22.0, 29.3, 25.4}};  // Day 7  
	int i, j, rows = sizeof(temp) / sizeof(temp[0]);
    int column = sizeof(temp[0]) / sizeof(temp[0][0]);
    float sum;
	printf("====Temperature Table=====\n");
	printf("       Morning\tEvening\t  Night\n");
	for(i=0;i<rows;i++){
		printf("Day %d   ", i+1);
		for(j=0;j<column;j++){
			printf("%.2f    ", temp[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
	printf("The average of day %d: ",i+1 );
	sum=0;
	  for(j=0;j<column;j++){
	  	sum=sum+temp[i][j];
	  }
	printf("%.2f\n", sum/3);
}
}

