#include<stdio.h>
#include<string.h>

int main(){
	int i, j, count;
	char str[25][25], temp[25];
	puts("Enter the number of Strings : ");
	scanf("%d", &count);

	puts("Enter the Strings : ");
	for(i = 0;i <= count; i++){
	   fgets(str[i], 100, stdin);
	}
	
	printf("\n");
	
	for(i = 0;i <= count; i++){
		for(j = (i+1); j <= count; j++){
			if(strcmp(str[i],str[j]) < 0){ // if ascending order is asked, then (strcmp(str[i],str[j]) > 0) 
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	
	printf("Order of Sorted Strings : \n\n");
	for(i = 0; i < count; i++){
		puts(str[i]);
	}
   
	return 0;
}
