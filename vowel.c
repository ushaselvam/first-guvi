#include<stdio.h>
#include<string.h>
int main() {
	// your code goes here
	char string[100];
	int i;
	scanf("%s",string);
	for(i=strlen(string)-1;i>=0;i--)
	{
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
		continue;
		else
		printf("%c",string[i]);
	}
	return 0;
}
