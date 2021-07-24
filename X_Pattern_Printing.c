#include<stdio.h>
#include<string.h>

int main(){
	int len,i, j, k;
	char str[100];
 
	printf("Enter a string to get X Pattern : \n\n");
	fgets(str, 100, stdin);
	len = strlen(str);
 
	for(i = 0; i < len; i++){
		j = len - 1 - i;
		for(k = 0; k < len; k++){
			if(k == i || k == j){
				printf("%c",str[k]);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
