#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	int number, guess, attempts =0;
	
	srand(time(0));
	number = rand() % 100+1;
	
	printf("Welcome to Number Guessig game !\n");
	printf("I have Picked number between 1 and 100.\n");
	printf("Try to Guess it !\n\n");
	
	printf("Game Made By Anubhav Srivastav\n\n");
	
	do {
		printf("Enter Your Guess : ");
		scanf("%d", &guess);
		attempts++;
		
		if (guess>number) {
			printf("Too High! Try Again.\n"); }
		
		 else if (guess<number) {
			printf("Too low! Try Again.\n"); }
		
		else {
			printf("Congratulation ! You Guessed it in %d attempts.\n",attempts); }
			
		
	 } while (guess != number);
	 
	 return 0;
	 
}
