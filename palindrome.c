#include<stdio.h>

	int checkPalindrome(char *word){
		
		char temp[7];
		int i;
		int j=0;
		int palindrome=1;
		for(i=6;i>=0;i--){
			temp[j]=word[i];
				printf("%d, %d (%d,%d) \n", word[i],temp[j],i,j ); 
			j++;
			if(temp[j]!=word[i]){
				palindrome=0;
				printf("[ %d ]\n", temp[j]==word[i]);
			}
			

		}
	
		printf("%s\n", word );
		printf("%s\n", temp);

	return palindrome;

	}

void main()
{
char word[7]="racecar";

 int val = checkPalindrome(word);



printf("\n => palindrome :%d \n", val);

}


