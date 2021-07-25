#include <stdio.h>
#include <string.h>

int main() {
	int vowel_count, word_count = 0;
	int i;
	
	char str[100];
	fgets(str, 100, stdin);
	
	int len = strlen(str);
	
	for (i = 0; i < len; i++){
		
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
			vowel_count++;
		}
		if (str[i] == ' '){
			if (vowel_count >= 2){
				word_count++;
				vowel_count = 0;
			}
		}
	}
	printf("%d", word_count);

	return 0;
}
