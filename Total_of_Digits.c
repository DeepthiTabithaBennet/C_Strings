/* Write a program to find the total of the digits found in a line of characters
     Sample Input: There are 7 days in a week and 12 months in a year        
     Sample Output: 10
     Hint: 7 + 1 + 2 = 10 */
/*———————————————————————————————————————————————————————————————————————————*/  
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
