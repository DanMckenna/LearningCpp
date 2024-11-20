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

//Print message showcasing enums and switch statements
void testEnumsAndSwitchStatements() {
	printf("*****Enums and Switch Statments*****\n");
	printf("The following actions will be performed as part of a showcase of enums and switch statements:\n"
		" - Create an enum class definition containing members for each day of the week\n"
		" - Create an instance of our enum class and set it's value to \"Thursday\"\n"
		" - Use switch/case statements to cycle through each possible value in our enum object\n"
		" - Print a message when the matching enum value is found by one of the cases in the switch statement\n\n");

	//Create our enum definition
	enum class DayOfTheWeek {
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};

	//Create an instance of our enum class
	DayOfTheWeek day = DayOfTheWeek::Thursday;

	//Print a message to the terminal when a matching enum value is found
	switch (day) {
		case DayOfTheWeek::Monday: {
			printf("The day of the week is Monday\n\n");
		} break;
		case DayOfTheWeek::Tuesday: {
			printf("The day of the week is Tuesday\n\n");
		} break;
		case DayOfTheWeek::Wednesday: {
			printf("The day of the week is Wednesday\n\n");
		} break;
		case DayOfTheWeek::Thursday: {
			printf("The day of the week is Thursday\n\n");
		} break;
		case DayOfTheWeek::Friday: {
			printf("The day of the week is Friday\n\n");
		} break;
		case DayOfTheWeek::Saturday: {
			printf("The day of the week is Saturday\n\n");
		} break;
		case DayOfTheWeek::Sunday: {
			printf("The day of the week is Sunday\n\n");
		} break;
		default: {
			printf("I don't know what day it is\n\n");
		} break;
	}
}

//Prints messages showcasing Plain-Old-Data (POD) classes
void testPODs() {
	printf("*****Plain-Old-Data Classes (PODs)*****\n");

	//POD class definition
	struct Book {
		int year;
		int pages;
	};

	Book myBook; //Create an instance of the Book POD class named "myBook"
	
	//Set the values of each member of myBook
	myBook.year = 1883;
	myBook.pages = 216;

	printf("A POD was created to replicate a book that was written in %d and has %d pages\n\n", myBook.year, myBook.pages);
}

//Prints messages showcasing fully featured classes
void testFullyFeaturedClasses() {
	printf("*****Fully Featured Classes*****\n");

	/* Definition of a fully featured class containing:
	 * - class members
	 * - a default constructor
	 * - a constructor that accepts a parameter
	 * - a "gettter" function
	 * - a "setter" function
	 * Please note that the struct keyword denotes that all class members are public by default
	 */
	struct YearlyClock {
		//Default class constructor
		YearlyClock() {
			year = 2024; //sets the default year value
		}

		//Class constructor that accepts an integer
		YearlyClock(int newYear) {
			year = newYear;
		}

		//class member function that returns the year
		int getYear() {
			return year;
		}

		//class member function that sets the year
		void setYear(int newYear) {
			year = newYear;
		}

	//Private Class members
	private:
		int year{};
	};

	YearlyClock myClock{};
	YearlyClock myOtherClock{ 2030 };

	printf("A clock object was created. The default constructor set the year to %d and was retrieved using a \"getter\" function\n", myClock.getYear());
	myClock.setYear(2025);
	printf("The year was adjusted to %d using a \"setter\" function\n", myClock.getYear());
	printf("Another clock object was created. The default year was set to %d using another constructor.\n\n", myOtherClock.getYear());
}

//Prints messages showcasing initialization techniques
void testInitializations() {
	printf("*****Initialization techniques*****\n");

	printf("Here are some examples of how an integer can be initialized:\n");
	int a = 24;
	int b{ 24 };
	int c = { 24 };
	int d(24);

	printf("int a = 24\n");
	printf("int b{ 24 } //This is ideal\n");
	printf("int c = { 24 }\n");
	printf("int d(24)\n\n");

	printf("Here are some examples of how an array can be initialized:\n");
	int array1[]{ 1,2,3 }; //Array length is 3, values are 1,2,3
	int array2[5]{}; //Array length is 5, values are all zero
	int array3[5]{ 1,2,3 }; //Array length is 5, values are 1,2,3,0,0
	int array4[5]; //Array length is 5, values are unitialized

	printf("int array1[]{ 1,2,3 } //Array length is 3, values are 1,2,3\n");
	printf("int array2[5]{} //Array length is 5, values are all zero\n");
	printf("int array3[5]{ 1,2,3 } //Array length is 5, values are 1,2,3,0,0\n");
	printf("int array4[5] //Array length is 5, values are unitialized\n\n");

	printf("Here are some examples of how a POD can be initialized:\n");
	struct SamplePod {
		int a;
		char b[256];
		bool c;
	};

	SamplePod pod1{};
	SamplePod pod2 = {};
	SamplePod pod3{ 24, "Hi", true };
	SamplePod pod4 = { 24, "Hi", true };

	printf("SamplePod pod1{}\n");
	printf("SamplePod pod2 = {};\n");
	printf("SamplePod pod3{ 24, \"Hi\", true }\n");
	printf("SamplePod pod4 = { 24, \"Hi\", true }\n\n");

	printf("Here are some examples of how a class can be initialized:\n");
	struct SampleClass {
		SampleClass() {
			a = 10;
		}

		SampleClass(int myNum) {
			a = myNum;
		}

		int a;
	};

	SampleClass class1; //Invokes the default constructor with no arguments
	SampleClass class2{}; //Invokes the default constructor with no arguments
	SampleClass class3{ 7 }; //Invoke the constructor that takes one integer argument
	SampleClass class4 = { 7 }; //Invoke the constructor that takes one integer argument

	printf("SampleClass class1; //Invokes the default constructor with no arguments\n");
	printf("SampleClass class2{}; //Invokes the default constructor with no arguments\n");
	printf("SampleClass class3{ 7 }; //Invoke the constructor that takes one integer argument\n");
	printf("SampleClass class4 = { 7 }; //Invoke the constructor that takes one integer argument\n\n");
}

//Prints messages showcasing proper pointer syntax
void testPointers() {
	printf("*****Working with Pointers*****\n");

	//Returning the value of a variable
	int gettysburg{ 1863 }; //An integer initialized with a value of 1863
	printf("The data value of integer variable named gettysburg is: %d\n", gettysburg);
	
	//Returning the memory address of a variable using a pointer via the "Address-Of Operator (&)"
	int* gettysburg_address = &gettysburg; //An integer pointer referencing the memory address of the gettysburg variable
	printf("The memory address of the integer variable named gettysburg is: %p\n", gettysburg_address);
	
	//Returning the value of a variable using a pointer via the "Dereference Operator (*)"
	printf("The data value of the variable being referenced by the gettysburg_address pointer is: %d\n", *gettysburg_address);
	
	//Modifying the data value of a variable using a poing via the "Dereference Operator (*)"
	*gettysburg_address = 1865;
	printf("The data value of the gettysburg variable was modified via the gettysburg_address pointer and is now: %d\n\n", gettysburg);
}

//Prints messages showcasing Arrow Operator syntax
void testArrowOperators() {
	printf("*****Using Arrow Operators*****\n");
	printf("The Arrow Operator is used to dereference/access the member variables and methods\n"
		   "of class objects being referenced by a pointer.\n\n");

	struct YearlyClock {
		int getYear() {
			return year;
		}
		
		void setYear(int newYear) {
			year = newYear;
		}

		int year{};

		//Default Constructor
		YearlyClock() {
			year = 2000;
		}
	};

	YearlyClock myClock;
	printf("A new instance of the YearlyClock class has been created with a default year value of: 2000\n");
	
	//Print the current year value of the YearlyClock object by directly accessing it's year member
	printf("The value of the year member was directly accessed and returned from the YearlyClock object: %d\n", myClock.year);
	
	//Print the current year value of the YearlyClock object by directly invoking the getYear() method
	printf("The getYear() method was directly invoked against the YearlyClock object: %d\n", myClock.getYear());

	//Print the result of directly invoking the setYear() function against the YearlyClock object
	myClock.setYear(2001);
	printf("The setYear() method was directly invoked against the YearlyClock object and changed the year to: %d\n", myClock.getYear());

	//Dereference and access the value of the YearlyClock year value from the Yearly clock pointer using the Arrow Operator
	YearlyClock* myClock_ptr = &myClock;
	printf("The year member was dereferenced/accessed from the YearlyClock pointer using the arrow operator: %d\n", myClock_ptr -> year);

	//Invoke the getYear() method against the YearlyClock object referenced by the YearlyClock pointer using the Arrow Operator
	printf("The getYear() method was invoked by the YearlyClock pointer using the Arrow Operator: %d\n", myClock_ptr->getYear());

	//Invoke the setYear() method against the YearlyClock object referenced by the YearlyClock pointer using the Arrow Operator
	myClock_ptr -> setYear(2002);
	printf("The setYear() method was invoked by the YearlyClock pointer using the Arrow Operator and changed to: %d\n\n", myClock_ptr->getYear());
}

//Print messages showcasing References
void testLambdasAndReferences() {
	printf("*****Using Lambdas and References*****\n");

	struct YearlyClock {
		int year{};

		//Default Constructor
		YearlyClock() {
			year = 2000;
		}
	};
	
	//Create a lambda function that accepts a reference to the YearlyClock object and increments it
	//Lambda functions enable us to create functions within functions
	auto incrementYear = [](YearlyClock& myClock) {
		myClock.year++;
	};

	YearlyClock myClock;
	printf("A new instance of the YearlyClock class has been created with a default year value of: %d\n", myClock.year);
	
	incrementYear(myClock);
	printf("The YearlyClock object was implicitly passed by reference to a lambda function and updated to: %d\n\n", myClock.year);
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

	//Showcase the use of enums and switch/case statements
	testEnumsAndSwitchStatements();

	//Showcase the use of Plain Old Data classes (PODs)
	testPODs();

	//Showcase the use of fully featured classes
	testFullyFeaturedClasses();

	//Showcase the different ways to Initialize
	testInitializations();

	//Showcase Pointer syntax
	testPointers();

	//Showcase Arrow Operators
	testArrowOperators();

	//Showcase Lambda functions and passing by reference
	testLambdasAndReferences();

	return 0;
}
