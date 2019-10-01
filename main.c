#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Practice 05-1
	
	int input1;
	int input2;
	int input3;
	
	printf("input a number :");
	scanf("%d", &input1);
	
	if (input1 > 0)
		printf("positive\n\n");
	
	else
		printf("non-positive\n\n");
	
	// Practice 05-2
	
	printf("input a number :");
	scanf("%d", &input2);
	
	if (input2 > 0)
		printf("|x| = %d\n\n", input2);
	
	else
		printf("|x| = %d\n\n", -input2);
	
	// Practice 05-3
	
	printf("input a number :");
	scanf("%d", &input3);
	
	if (input3 > 0) {
		printf("positive\n");
	}
		
	else if (input3 < 0) {
		printf("negative\n");
	}
	
	else
		printf("zero\n");	
	
	return 0;
}
