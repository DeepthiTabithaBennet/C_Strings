#include <stdio.h>
#include <string.h>

int main(){  
	char arr[100]; 
	int size;		 
	int i, j, k;	  

	fgets(arr, 100, stdin);
	size = strlen(arr);

	for(i = 0; i < size; i++){
		for(j = i + 1; j<size;){
			if(arr[i] == arr[j]){
				for(k = j; k < size; k++){
					arr[k] = arr[k + 1];
				}
				size--;
			}
			else{
				j++;
			}
		}
	}
	
	printf("String After Removing Duplicates :\n");
	for(i = 0; i < size; i++){
		printf("%c", arr[i]);
	}
		
	return 0;
}
