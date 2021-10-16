#include <stdio.h>
#include <math.h>
int main()
{
	int sec, N;
	printf("Enter 'N', amount of seconds: ");
	scanf("%i", &N);
	sec = N % 60;
	printf("Answer is:\n");
	printf("sec = ");
	printf("%i", sec);
}