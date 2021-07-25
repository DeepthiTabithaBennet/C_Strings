#include <stdio.h>
#include <string.h>

int main(){

	char ch[100];
	fgets(ch, 100, stdin);
	int i;
	
	int len = strlen(ch);
	
	for (i = 0; i < len; i++){
		if (!(ch[i] == ' ' || ch[i] == 'a' || ch[i] == 'A')){
			printf("%c", (ch[i] - 1));
		}
		else if (ch[i] == 'a'){
			printf("z");
		}
		else if (ch[i] == 'A'){
			printf("Z");
		}
		else{
			printf(" ");
		}
	}

	return 0;
}
