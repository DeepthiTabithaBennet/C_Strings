/* Program to implement the following string manipulation functions, in C.
          (a) String Copy
          (b) String Concatenation 
          (c) String Reversal
          (d) Determining the String Length
          (e) Comparison of two Strings */
/*-------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
/*-------------------------------------------------------------------------*/
// Implementation of strlen
int my_strlen(char *ch_arr1){
	int count = 0;

	while(*ch_arr1!='\0'){
		count++;
		ch_arr1++;
	}

	printf("\nstrlen(ch_arr1) = %d\n\n", count - 1);
	return 0;
}
/*-------------------------------------------------------------------------*/
// Implementation of strcpy
char my_strcpy(char *ch_arr2, char *ch_arr1){
	char *start = ch_arr2;

	while(*ch_arr1 != '\0'){
		*ch_arr2 = *ch_arr1;
		ch_arr2++;
		ch_arr1++;
	}

	*ch_arr2 = '\0'; // add '\0' at the end
	printf("strcpy(ch_arr2, ch_arr1) = %s\n", start);
	return 0;
}
/*-------------------------------------------------------------------------*/
// Implementation of strcat
char my_strcat(char *ch_arr2, char *ch_arr1){
	char *start = ch_arr2;

	while(*ch_arr2 != '\0'){
		ch_arr2++;
	}
	ch_arr2--;

	while(*ch_arr1 != '\0'){
		*ch_arr2 = *ch_arr1;
		ch_arr2++;
		ch_arr1++;
	}

	*ch_arr2 = '\0';
	printf("\n\nstrcat(ch_arr2, ch_arr1) = %s\n",start);
	return 0;
}
/*-------------------------------------------------------------------------*/
// helper function in the Implementation of strrev
int string_length(char *pointer){
   int c = 0;
 
   while( *(pointer+c) != '\0' )
	  c++;
 
   return c;
}

// Implementation of strrev
void my_strrev (char *str){
   
	char string[20];
	strcpy(string,str);
	
	int length, c;
	char *begin, *end, temp;
 
	length = string_length(string);
	begin = string;
	end = string-1;
 
	for (c = 0; c < ( length - 1 ); c++)
		end++;
 
	for (c = 0; c < length/2; c++){		
		temp = *end;
		*end = *begin;
		*begin = temp;
 
		begin++;
		end--;
	 }
	 printf("strrev(ch_arr1) = %s", string);
}
/*-------------------------------------------------------------------------*/
// Implementation of strcmp
int my_strcmp(char *ch_arr2, char *ch_arr1){
	while((*ch_arr2 != '\0' && *ch_arr1 != '\0' ) && *ch_arr2 == *ch_arr1){
		ch_arr2++;
		ch_arr1++;
	}

	if(*ch_arr2 == *ch_arr1){
		printf("strcmp(ch_arr2, ch_arr1) = 0\n\n"); // strings are identical
	}

	else{
		printf("strcmp(ch_arr2, ch_arr1) = %d\n\n", *ch_arr2 - *ch_arr1);
	}
	return 0;
}
/*-------------------------------------------------------------------------*/
// main function
int main() {
	char ch_arr1[20];
	char ch_arr2[20];
    
  printf("Enter the First String : ");
	fgets(ch_arr1, 100, stdin);

  printf("Enter the Second String : ");
	fgets(ch_arr2, 100, stdin);
	
	printf("\nInput Strings: \nch_arr1 = %sch_arr2 = %s", ch_arr1, ch_arr2);
	
	my_strcat(ch_arr2, ch_arr1);
	my_strrev(ch_arr1);
	my_strlen(ch_arr1);
	my_strcmp(ch_arr2, ch_arr1);
	my_strcpy(ch_arr2, ch_arr1);
	
	return 0;
}
