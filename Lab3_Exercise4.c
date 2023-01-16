#include <stdio.h>
#include <string.h>

int main(){

	int index, str_length;

	//Create char buffer to store string
	char str[50];

	printf("\nEnter string: ");

	//Note that only %s in scanf read first word and
	//not able to handle space in string

	//So, if we use [^\n] in it will handle space also.
	scanf("%[^\n]s", str);

	//Get length of the entered string
	str_length = strlen(str);

	//Read each character from a string using index
	//and for loop till 1 less than string lenght
	//as we are starting from 0

	//Every time you read character, compare each char with
	// all vowels. If true then print index(location of char)
	//and charater( vowels)
	for(index = 0; index < str_length; index++)
	{
		if(str[index] == 'a' || str[index] == 'e' ||
			str[index] == 'i' || str[index] == 'o' || 
			str[index] == 'u' || str[index] == 'A' ||
			str[index] == 'E' || str[index] == 'I' ||
			str[index] == 'O' || str[index] == 'U')
		{
			//Display vowel found in string and its location
			printf("Vowel: %c at location: %d\n",str[index], index );
		}
	}

	return 0;
}
