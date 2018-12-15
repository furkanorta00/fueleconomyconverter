#include <stdio.h> // stdio.h requires to read and write values on console
#include <stdlib.h> // stdlib.h requires to clear the screen
int main()
{
// MPG to L/100km - L/100km to MPG Converter

//Definitions and introducing
int selection, again;
float mpg=0, lp100km=0, concoeff;
printf("Welcome to Converter!\n");
start: //Program returns here when triggered
printf("1 = Covert MPG to L/100km\n");
printf("2 = Convert L/100km to MPG\n= ");
scanf("%d", &selection);

// Coversion Coefficiency Calculation
// 1 mile = 1.609344 km
// 1 gallon = 3.785412 liters
concoeff=3.785412/1.609344*100;

// MPG to L/100km or L/100km to MPG selection
switch(selection)
	{
	case 1:
	printf("\nInput MPG value: ");	
	scanf("%f", &mpg); //Assings input value to mpg constant
	lp100km=concoeff/mpg; //Calculates lp100km of mpg
	printf("\n%.2f MPG = %.2f L/100km", mpg, lp100km);
	break;
	case 2:
	printf("\nInput L/100km value: ");
	scanf("%f", &lp100km); //Assings input value to lp100km constant
	mpg=concoeff/lp100km; //Calculates mpg of lp100km
	printf("\n%.2f L/100km = %.2f MPG", lp100km, mpg);
	break;
	default:
	printf("You entered wrong value!\n");
	goto start; //If entered anything else than 1 or 2 returns to start and displays a warning message
	}


//
printf("\nEnter 1 to run the program again?\n"); //Confirms user wants to rerun the program or not
scanf("%d", &again);
if(again == 1)
{
system("cls"); //Clears the screen
goto start; //Returns to start
}
else
{
//If input not equal to 1, ends the program
}
}
