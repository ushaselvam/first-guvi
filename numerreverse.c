#include<stdio.h>
#include<string.h>
int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n)
	{
		printf("%d",n%10);
		n=n/10;
	}
	return 0;
}
