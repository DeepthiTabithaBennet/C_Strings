#include <stdio.h>

int main(){
	char string[100];
	int i, sum = 0;
 
	fgets(string, 100, stdin);
	for (i = 0; string[i] != '\0'; i++){
		if ((string[i] >= '0') && (string[i] <= '9')){
			sum += (string[i] - '0');
		}
	}
	printf("Sum of all digits = %d\n", sum);
	return 0;
}
