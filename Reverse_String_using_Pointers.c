#include <stdio.h>
#include <string.h>

int main(){

	char s[100];
	int len, i;
	
	printf("Enter a string : ");
	fgets(s, 100, stdin);
	len = strlen(s);
	
	printf("The input String is: ");
	printf("%s", s);
	
	printf("\nThe reverse of the String is: ");
	for(i = len; i >= 0; i--){
		printf("%c", *(s + i));
  }
		
	return 0;
}
