#include <stdio.h>
#include <string.h>

int main(){

	char ch[100];
	fgets(ch, 100, stdin);
	int i;
	
	int len = strlen(ch);
	
	for (i = 0; i < len; i++){
		if (!(ch[i] == ' ' || ch[i] == 'z' || ch[i] == 'Z')){
			printf("%c", (ch[i] + 1));
		}
		else if (ch[i] == 'z'){
			printf("a");
		}
		else if (ch[i] == 'Z'){
			printf("A");
		}
		else{
			printf(" ");
		}
	}

	return 0;
}
