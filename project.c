#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
int main ()
{
	char str[100];
	char buffer[100][100]= {0}; // this to separate the string 
	char checker[100][100] = {0}; // this for checking if i already count the word
	int	x = 0;    // this is for the checker
	int count = 0; // this is for the uniq word
	int	i =0 ,j = 0, jn=0, found = 0;
 
	printf("Give me the string: ");
	gets(str);
	if (str[i] == ' ') // this is for checking if the first caracter is space i will skip it
		i++;
	while (str[i]) // in this loop i will fill a 2d array with strings
	{
		jn = 0;
		while (str[i] && str[i] != ' ') { // Copy characters until space or end
           		 buffer[j][jn++] = str[i++];
	}
		buffer[j][jn] = '\0';
		if(str[i] == ' ')
			 i++;
	j++;
	}
	for(int k = 0 ; k < j; k++)
	{
		found = 0;
	 	for(int l = 0 ;l < count ; l++){
			if(strcmp(buffer[k], checker[l] )== 0){ // here i check if the two strings matches
	 			found = 1;
				break;
			}
		}
		if(found == 0) // here i check if i already count this string
		{
	 		strcpy(checker[count],buffer[k]); // i add the new string to the checker to not count it the next time
			count++;
		}
	}
	printf("%d", count);
}
