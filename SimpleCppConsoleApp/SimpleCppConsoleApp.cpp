#include <cstdio> //Provides basic terminal input/output functionality

//A function with no return type that prints a predefined message to the terminal
void printMessage() {
	printf("Here is a message that was defined in and printed from the printMessage() function\n");
}

//A function that returns the sum of two provided integers
int simpleAddition(int a, int b) {
	return a + b;
}

/* The entry point for the application
 * Contains all of the code that will be performed upon running the executable
 */
int main() {
	//Print a message to the terminal
	printf("Here is a simple message being printed to the terminal\n");

	//Use escape characters in order to print a message containing single quotes to the terminal
	printf("Escape characters were used to print \'single quotes\' in this message\n");

	//Use escape characters in order to print a message containing single quotes to the terminal
	printf("Escape characters were used to print \"double quotes\" in this message\n");

	//Use format specifiers to print integer literals to the terminal
	printf("A format specifier was used to print the integer literal equivalent of the number %d\n", 7);

	//Use a function to print a predefined message to the terminal
	printMessage();

	//Use a function to return the sum of two integers and then print the result to the terminal
	int a = 5;
	int b = 10;
	int mySum = simpleAddition(a, b);
	printf("A function was used to return the sum of %d and %d which is %d\n", a, b, mySum);

	//Use conditional operators and if statements to compare integers
	if (a > b) {
		printf("An if statement was used to verify that %d is greater than %d\n", a, b);
	}
	else if (a < b) {
		printf("An if statement was used to verify that %d is less than %d\n", a, b);
	}
	else {
		printf("An if statement was used to verify that %d is equal to %d\n", a, b);
	}

	return 0;
}
