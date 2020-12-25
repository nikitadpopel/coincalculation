/* Coin Calculation
Fall 2018
Mikita Popel */
#include <stdio.h>
#include <math.h>

// This program returns the most efficient way to split up an inputted amount of money
int main(void) {
	float inputAmount;
	int currentAmount, outputTens, outputFives, outputOnes, outputQuarters, outputDimes, outputNickels, outputPennies;	
	printf("Proj. #3, Mikita Popel\n");
	printf("\nAmount? ");
	scanf("%f", &inputAmount)
	printf("value entered: %.4f\n\n", inputAmount);
	printf("$%.2f = \n", inputAmount);
	currentAmount = inputAmount * 100;      					
	outputTens = currentAmount / 1000;                        //calculating tens
	currentAmount = currentAmount - (outputTens * 1000);
	outputFives = currentAmount / 500;						//calculating fives
	currentAmount = currentAmount - (outputFives * 500);
	outputOnes = currentAmount / 100;							//calculating ones
	currentAmount = currentAmount - (outputOnes * 100);
	outputQuarters = currentAmount / 25;						//calculating quarters
	currentAmount = currentAmount - (outputQuarters * 25);
	outputDimes = currentAmount / 10;							//calculating dimes
	currentAmount = currentAmount - (outputDimes * 10);
	outputNickels = currentAmount / 5;						//calculating nickels
	currentAmount = currentAmount - (outputNickels * 5);
	outputPennies = currentAmount / 1;						//calculating pennies
	currentAmount = currentAmount - (outputPennies * 1);
	printf("  %d ten dollar bill(s)\n", outputTens);	//printing of the values
	printf("  %d five dollar bill(s)\n", outputFives);
	printf("  %d one dollar bill(s)\n", outputOnes);
	printf("  %d quarter(s)\n", outputQuarters);
	printf("  %d dime(s)\n", outputDimes);
	printf("  %d nickel(s)\n", outputNickels);
	printf("  %d pennies", outputPennies);	
	return 0;
}
