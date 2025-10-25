#include <stdio.h>

int main() {
    int marks[5][3] = {
        {80, 75, 90},
        {60, 70, 65},
        {78, 82, 88},
        {92, 85, 89},
        {55, 60, 58}
    };
    int i,j,rows=sizeof(marks)/sizeof(marks[0]);
    int column=sizeof(marks[0])/sizeof(marks[0][0]);
    float sum;
   	for(i=0;i<rows;i++){
	   printf("The sum of marks for student %d: ",i+1 );
	   sum=0;
	   for(j=0;j<column;j++){
	  	sum=sum+marks[i][j];
	   }
	printf("%.2f\n", sum);
    }
    for(j=0;j<column;j++){
	printf("The average of %d subject is : ",j+1 );
	sum=0;
	  for(i=0;i<rows;i++){
	   sum=sum+marks[i][j];
	  }
	printf("%.2f\n", sum/5);
   }

    return 0;
}

