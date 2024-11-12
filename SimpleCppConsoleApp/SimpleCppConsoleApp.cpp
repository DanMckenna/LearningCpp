#include <cstdio> //Provides basic terminal input/output functionality

//Prints an introduction message to the terminal explaining the purpose of the application
void printIntroMessage() {
	char introMsg[] =
		"*****Introduction*****\n"
		"The purpose of this application is to showcase basic Object Oriented programming\n"
		"techniques and syntax used in C++. This includes fundamental concepts such as:\n"
		" - Variable declaration, initialization, and instantiation\n"
		" - Primitive data types (int, bool, char)\n"
		" - Arrays and strings\n"
		" - Functions\n"
		" - Conditional statments\n"
		" - Logical operators\n"
		" - if statements\n"
		" - switch statements\n"
		" - for loops\n"
		" - User-defined types (enums, classes)\n"
		" - and much more\n\n";

	printf(introMsg); //Print the intro message to the terminal
}

//Use Escape Characters to print special characters along with text to the screen
void testEscapeCharacters() {
	printf("*****Escape Characters*****\n");
	
	//Use the \' escape character to print a message containing single quotes
	printf("Escape Characters were used to print \'single quotes\' in this message\n");

	//Use the \" escape character to print a message containing double quotes
	printf("Escape Characters were used to print \"double quotes\" in this message\n\n");
}

//Use Format Specifiers to print type literals along with text to the screen
void testFormatSpecifiers() {
	printf("*****Format Specifiers*****\n");
	
	//Use the %d format specifier to print an integer literal to the terminal
	printf("A Format Specifier was used to print the integer literal equivalent of the number %d\n", 7);

	//Use the %s format specifier to print a string literal to the terminal
	char balloonStr[] = "balloon";
	printf("A Format Specifier was used to print the string literal of the word \"%s\"\n\n", balloonStr);
}

//A function that accepts two integers and returns their sum
int getTotal(int a, int b) {
	return a + b;
}

//Writes messages to the screen showcasing the use of functions that accept parameters and return types
void testFunctionWithParametersAndReturn() {
	printf("*****Function with parameters and return type*****\n");

	printf("A function named getTotal() that accepts two integers was invoked with the parameters "
		   "7 and 3 and returned the sum value of %d\n\n", getTotal(7,3));
}

//Prints messages showcasing Conditional Statements
void testConditionalStatements() {
	printf("*****Conditional Statements*****\n");
	printf("1 < 2: %s\n", 1 < 2 ? "true" : "false"); //Less than
	printf("1 > 2: %s\n", 1 > 2 ? "true" : "false"); //Greater than
	printf("1 <= 2: %s\n", 1 <= 2 ? "true" : "false"); //Less than or equal to
	printf("1 >= 2: %s\n", 1 >= 2 ? "true" : "false"); //Greater than or equal to
	printf("1 == 2: %s\n", 1 == 2 ? "true" : "false"); //Equal to
	printf("1 != 2: %s\n\n", 1 != 2 ? "true" : "false"); //Not equal to
}

//Prints messages showcasing Logical Operators
void testLogicalOperators() {
	printf("*****Logical Operators*****\n");
	bool testBoolA = true;
	bool testBoolB = false;

	printf("Logical operators were used to validate the following statements.\n");
	printf("Given Boolean A = true and Boolean B = false\n");
	printf("A && B: %s\n", testBoolA && testBoolB ? "true" : "false"); //Logical AND
	printf("A || B: %s\n", testBoolA || testBoolB ? "true" : "false"); //Logical OR
	printf("!A: %s\n", !testBoolA ? "true" : "false"); //Logical NOT
	printf("!B: %s\n\n", !testBoolB ? "true" : "false"); //Logical NOT
}

//Prints messages showcasing if statements
void testIfStatements() {
	int testNumberA = 5;
	int testNumberB = 10;

	printf("*****if Statements*****\n");

	//Single-line if statements
	if (testNumberA < testNumberB) printf("A single-line if statement was used to verify that %d is less than %d\n", testNumberA, testNumberB);
	else if (testNumberA > testNumberB) printf("A single-line if statement was used to verify that %d is greater than %d\n", testNumberA, testNumberB);
	else printf("A single-line if statement was used to verify that %d is equal to %d\n", testNumberA, testNumberB);

	//Multi-line if statements
	if (testNumberA < testNumberB) {
		printf("A multi-line if statement was used to verify that %d is less than %d\n\n", testNumberA, testNumberB);
	}
	else if (testNumberA > testNumberB) {
		printf("A multi-line if statement was used to verify that %d is greater than %d\n\n", testNumberA, testNumberB);
	}
	else {
		printf("A multi-line if statement was used to verify that %d is equal to %d\n\n", testNumberA, testNumberB);
	}
}

//Prints messages showcasing for loops
void testForLoops() {
	printf("*****for loops*****\n");
	printf("We will use a for loop to print a message three times\n");

	for (int i = 1; i < 4; i++) {
		printf("This is message number %d\n", i);
	}
	printf("\n");
}

//Print messages showcasing Range-Based for loops
void testRangeBasedForLoops() {
	printf("*****Range-Based for loops*****\n");
	printf("We will use a Range-Based for loop to iterate through every element in an array of integers\n");
	printf("int myArray[] = { 42, 64, 128 }\n");

	int myArray[] = { 42, 64, 128 };
	int i = 0;

	for (int arrayItem : myArray) {
		printf("The value of the number stored in position %d of the array is %d\n", i, arrayItem);
		i++;
	}
	printf("\n");
}

/* The entry point for the application
 * Contains all of the code that will be performed upon running the executable
 */
int main() {
	//Print a message to the terminal indicating that the application has started
	printf("SimpleCppConsoleApp has started\n\n");
	
	//Print an introduction message to the terminal
	printIntroMessage();

	//Showcase the use of Escape Characters
	testEscapeCharacters();

	//Showcase the use of Format Specifiers
	testFormatSpecifiers();

	//Showcase the use of a Function that accepts parameters and returns an integer result
	testFunctionWithParametersAndReturn();

	//Showcase the use of Conditional statements
	testConditionalStatements();

	//Showcase the use of Logical Operators
	testLogicalOperators();

	//Showcase the use of if statements
	testIfStatements();

	//Showcase the use of for loops
	testForLoops();

	//Showcase the use of Range-Based loop
	testRangeBasedForLoops();

	return 0;
}
