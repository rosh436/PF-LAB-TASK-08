#include<stdio.h>
int main(){
	int rows, column;
	char k='A';
	for(rows=1;rows<=4;rows++){
		for(column=1;column<=rows;column++){
			printf("%c ", k);
			k++;
		}
		printf("\n\n");
	}
}
