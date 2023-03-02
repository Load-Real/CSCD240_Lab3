#include <stdio.h>
#include <ctype.h> /*Used to import tolower() and toupper() functions*/
#define MAXSIZE 100

int main()
{
	char ch;
	int i;
	char sentence[MAXSIZE];
	int alphabetsCount = 0;

	printf("Type a sentence: \n");
	/*Code that reads sentence from keyboard*/
	fgets(sentence, MAXSIZE, stdin); /*fgets() reads sentence from keyboard (no longer than 100 chars)*/
	printf("Type a character that you'd like to find the number of occurences in a sentence:\n");
	/*Code that reads a character from keyboard*/
	scanf(" %c", &ch); /*scanf reads a char from keyboard*/

	/*Code that counts the number of occurences of the character in the sentence*/
	/*Ignore uppercase/lowercase*/
	for (i = 0; sentence[i] != '\n'; i++) /*loop will end when a newline is detected at the end of the sentence array*/
	{
		if (sentence[i] == tolower(ch) || sentence[i] == toupper(ch)) /*if statement detects desired char and ignores case*/
		{
			alphabetsCount += 1;
		}
	}
	printf("Alphabet %c has a frequency of %d\n", ch, alphabetsCount);

	return 0;
}
