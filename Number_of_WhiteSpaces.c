#include <stdio.h>
#include <string.h>

int main(){
	char ch[100];
	int i;
	int WhiteSpaces = 0;
	fgets(ch, 100, stdin);
	
	int len = strlen(ch);

	for (i = 0; i < len; i++){
		if (ch[i] == ' '){
			WhiteSpaces++;
		}
	}

	printf("Total WhiteSpaces = %d\n", WhiteSpaces);

	return 0;
}
