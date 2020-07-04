#include<stdio.h>

// Write a program to calculate the sum of n numbers entered by the user. Use memory allocation and pointer. 

int main(){
	
	int size,sum=0;
	printf("Enter how many numbers you want to add:");
	scanf("%d",&size);
	int *p;
	p=malloc(size*sizeof(int));
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&p[i]);
		sum+=p[i];
	}
	
	printf("SUM:%d",sum);
	
	return 0;
}
