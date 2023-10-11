#include <stdio.h>

int add(int a, int b) {
	int sum = a +b;
	return sum;
}

in subtract(int a, int b){
	return a-b;
}

int multiply(int a, int b){
	return a*b;
}

float devide(int a, int b)
{
	return (float) a/b;
}
int main()

{int a,b;
printf("\n Input value a:"); scanf("%d", &a);
printf("\n Input value b:"); scanf("%d", &b);

printf("\n%dd+%d = %d",a, b, add(a,b));
printf("\n%dd-%d = %d",a, b, subtract(a,b));
printf("\n%dd*%d = %d",a, b, multiply(a,b));

if(b!= 0)
{
	printf("\n%d/d%d = %f",a, b, dvide(a,b));
}
printf("\n===============================\n");
	
}

