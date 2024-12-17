// Program to offer emotional support and direction for debugging
// Audrey Evergreene
// debuggingSupport 1.0

// #includes and program settings
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;
/**
Tests the string for Y || N, returns appropriate bool
   @param string - userInputof yes or no
   @return - a bool from testing if the user said they were done
*/
bool isTrue(char userInput);

/**
Prints questions to help the user find logic errors
   @return - a bool from testing if the user said they were done
*/
void logicBug();

/**
Prints questions to help the user find syntax errors
   @return - a bool from testing if the user said they were done
*/
void syntaxBug();

/**
Prints asking if the user found their bug, returns bool
   @return - a bool from testing if the user said they were done
*/
void foundIt();

/**
Celebrates the user for having found the bug
*/
void celebration();

/**
Encourages the user to rest and come back to it
*/
void timeToRest();

int main() {
	cout << "Hi! Welcome to the Debugging Fun Zone.\n"
		"We'll start with some basic questions to figure out what kind of bug you have.\n"
		"Then we'll offer gentle suggestions to help your debugging process!\n"
		"Press any key to begin." << endl;
	cin.ignore(100, '\n');
		char isSyntax;
		cout << "Does your IDE show squiggly lines or have errors when you run it? (Y/N)" << endl;
		cin >> isSyntax;
		cin.ignore(100, '\n');
		if (isTrue(isSyntax)) {
			syntaxBug();
		}
		else {
			logicBug();
		}
	return 0;
}

bool isTrue(char userInput) {
	if (userInput == 'Y' || userInput == 'y') {
		return true;
	}
	return false;
}

void foundIt() {
	char foundBug;
	cout << "Were you able to find your bug? Y/N" << endl;
	cin >> foundBug;
	cin.ignore(100, '\n');
	if(isTrue(foundBug)) {
		celebration();
	}
 else {
	 cout << "That's okay! You've got this." << endl;
 }
}

void syntaxBug() {
	cout << "Have you accidentally commented out functional code?"
		"Are there any unclosed comment blocks that might be hiding code?" << endl;
	foundIt();
	cout << "In languages where indentation matters (like Python), is your indentation consistent?\n"
"Have you accidentally introduced unwanted spaces or tabs" << endl;
	foundIt();
	cout <<
		"Have you read the compiler/interpreter's error messages carefully?\n"
		"They often point directly to syntax issues."
"Does the line number or location mentioned in the error message make sense in context?" << endl;
	foundIt();
	cout << "Are there squiggly lines in your code?\n"
		"If so, go to that area and see if there's anything obvious immediately before and around that text." << endl;
	foundIt();
	cout << "Have you checked for semicolons at the end of statements?" << endl;
	foundIt();
	cout << "Are all your paired items (like '', (), {}, []) are correctly paired?" << endl;
	foundIt();
	cout << "Are all the types being used correctly?" << endl;
	foundIt();
	timeToRest();
	cout << "Variable names are case sensitive. Are they all consistent with what you intend?" << endl;
	foundIt();
	cout << "Are you clear about the scope of your variables?" << endl;
	foundIt();
	cout << "If you are using comparison operators are they acting accordingly?" << endl;
	foundIt();
	cout << "You've been looking for this bug for a long time\n"
		"Please go rest and take care of your body."
		"This is currently the end of the program.\n"
		"Regardless, rest and come back to the bug when you have a fresh mind.\n""Good luck!" << endl;
	}

void logicBug() {
	cout << "Hi there! Let's find this logic bug together :)\n"
		"Draw or visualize the flow of your program.Does it match what you think should happen?" << endl;
	foundIt();
	cout <<
		"Ask yourself what each variable should be, then print them out at each line.\n"
		"Look for where the variables stop acting like your mental map." << endl;
	foundIt();
	cout << "Is the sequence of operations in your code correct?\n"
		"Could swapping the order of some operations fix the issue?\n"
		"Are there dependencies between operations that might cause unexpected results if not executed in the right order?" << endl;
	foundIt();
	timeToRest();
	cout <<
		"Can you isolate the part of the code where the error happens by breaking down the program into smaller, testable segments?\n"
		"What happens if you comment out sections of code ? Does the problem persist ? "<< endl;
	foundIt();
	cout <<
		"Does the program handle all possible inputs correctly? Have you tested edge cases?" << endl;
	foundIt();
	cout <<
		"" << endl;
	foundIt();
	cout <<
		"Go back through your logic, beginning to end and clarify what's happening at each step."<< endl;
	foundIt(); cout <<
		"Have you considered boundary conditions or limits of your variables?\n"
		"What happens at the edge of these limits?\n"
		"What happens when the input is at its maximum or minimum possible value?" << endl;
	foundIt(); cout <<
		"Does the program handle all possible inputs correctly ? Have you tested edge cases ? ." << endl;
	foundIt();
	cout << "You've been looking for this bug for a long time\n"
		"Please go rest and take care of your body."
		"This is currently the end of the program.\n"
		"Regardless, rest and come back to the bug when you have a fresh mind.\n""Good luck!" << endl;

}


void timeToRest() {
	string ready;
	cout << "Hi! You've been trying to find this bug for a while.\n"
		"I'd encourage you to take a short break and then come back to it with a fresh mind.\n"
		"Humans find bugs better when our bodies feel attended to.\n"
		"A short walk, grabbing a snack, stretching or even imagining you're outside can be a great reset.\n"
		"Press a key when you're ready to start again!"<< endl;
	cin >> ready;
	cin.ignore(100, '\n');
}

void celebration() {
	cout << "Hey! Congratulations, you found the bug.\,"
		"Take time to celebrate, rest and congratulate yourself!\n"
		"The next step will be ready for you when you're ready for it." << endl;
	exit(0);
}