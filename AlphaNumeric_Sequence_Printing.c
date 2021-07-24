/* Write a program to give the following output for the given input

Sample Input 1 : a1b10
Sample Output 2 : abbbbbbbbbb

Sample Input 2 : b3c6d15
Sample Output 2 : bbbccccccddddddddddddddd

The number varies from 1 to 99 */
/*———————————————————————————————————————————————————————————————————————————*/  
#include <stdio.h>

int main() {
	char chara;
	int num;
	
	while(scanf("%c%d", &chara, &num) == 2){
		while(num--){
			printf("%c", chara);
		}
	}
	return 0;
}
