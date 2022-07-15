#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
  
    printf("Hangman\n");
    
{
char words[][100] ={"dog","rabbit","horse","lollipop","chocolate"} ;
char random = 0,guess;
random = rand()%5;
int gameover;
while (gameover==1)
printf("+---+ \n o\n /|%c\n	|  	/%c\n======\n",'\\','\\');
{

	printf("The word is:\n");
    	for (char y=1;y<=strlen(random[words]);y++)
    	{
        printf("_ ");
   		}
    printf("\n");


	printf("Guess the letter:\n");
	{
	printf("+---+ \n|\n|\n|\n======\n");
 	}
	scanf("%s",guess);
	
	char store[100];
	
	int correct=0,a;
	for(a=0;a<strlen(random[words]);a++)
	if(words[random][a]==guess)	
	{
	 store[a]=random[words][a];
	 correct=1;
	
	
	for(a=0;a<strlen(random[words]);a++)
	if (store[a]==0)
		printf(" _");
	else
		printf("%c",store[a]);
		

}}}}
