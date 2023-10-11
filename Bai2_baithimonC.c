#include <stdio.h>

int main(){
	int numbers[10];
	
	printf("Input 10 integer numbers":\n);
	printf("===============\n");
	
	for(int i=0;1<10;i++){
		printf("So%d:",i+1);
		scanf("%d", &numbers[i]);
		
	}
	
	printf("Output:");
	for (int i=9; i>=0; i--){
		printf("%d", numbers[i]);
		if (i!=0){
			printf(",")
		}
	}
	printf("\n");
	
	return ();
	
}

