#include <stdio.h>
#include <string.h>

int main(){
   char s1[50];
   char s2[50];

   printf("Enter the First String : ");
   fgets(s1, 100, stdin);

   printf("Enter the Second String : ");
   fgets(s2, 100, stdin);

   char temp;

   int i, j;
   int n1 = strlen(s1);
   int n2 = strlen(s2);

   // If both strings are of different length, then they are not anagrams
   if(n1 != n2) {	
	  printf("\nThe Strings are not Anagrams \n");
	  return 0;
   }
   
   // Sort both strings
   for (i = 0; i < (n1-1); i++){
	  for (j = (i+1); j < n1; j++){
		 if (s1[i] > s1[j]){
			temp  = s1[i];
			s1[i] = s1[j];
			s1[j] = temp;
		 }
		 if (s2[i] > s2[j]){
			temp  = s2[i];
			s2[i] = s2[j];
			s2[j] = temp;
		 }
	  }
   }

   // Compare both strings character by character
   for(i = 0; i < n1; i++) {
	  if(s1[i] != s2[i]) {	
		 printf("\nThe Strings are not Anagrams \n");
		 return 0;
	  }
   }

   printf("\nThe Strings are Anagrams \n");
   return 0;
}
