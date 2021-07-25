#include <stdio.h>
#include <string.h>

int main(){

	char ch[100];
	fgets(ch, 100, stdin);
	int i;
	
	int len = strlen(ch);
	
	for (i = 0; i < len; i++){
		if (!(ch[i] == ' ')){
			printf("%c", (ch[i] + 1));
		}
	}

	return 0;
}
