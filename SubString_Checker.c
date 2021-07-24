/* Write a C program which will accept two strings and check whether all characters from the first string are present in the second string.
Order in which the characters are present is not important.
Assume each string can have maximum 10 characters.

Input: the two strings from the user
Output: "Yes" or "No" */
/*———————————————————————————————————————————————————————————————————————————*/
#include <stdio.h>
#include <string.h>

int main() {

    char a[10], b[10];

    printf("Enter the SubString : ");
    fgets(a, 10, stdin);
    
    printf("Enter the Main String : ");
    fgets(b, 10, stdin);

    int i, j, count = 0;
    for (i = 0; i < strlen(a)-1 ; i++){
	    for (j = 0; j < strlen(b) ; j++){
		    if (a[i] == b[j]){
			    count++;
               break;
		    }
	    }
    }

    if (count == strlen(a)-1){
	    printf("Yes");
    }
    else{
	    printf("No");
    }
	return 0;
}
