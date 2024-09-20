//Review Tokenization -- This file takes an input of a file text review and tokenizes
//the words in the review keeping track of how many times each word was used.
//CSIS 112-B01 


//<Sources if necessary>



//Include statements 
#include <iostream> 
#include <string> 
#include <fstream>
#include "review.h"
using namespace std;

//Function prototypes
void printInstructions();


int main() 
{
	//Print statement for name and assignment number
	cout << "Hayden Eubanks -- Programming Assignment 5" << endl << endl;

	//Variable declarations 
	
	//variable to store the array of characters read in by getline
	char charArray[1000];

	//File stream variable used to read input from an input file
	ifstream inFile;

	//String to store the file name
	string fileName;



	//Program logic
	
	//Creates new review class object
	 review myReview;


	//Calls function to print the instructions for use of this program
	printInstructions();

	//Gets the users input for which file they would like to open
	getline(cin, fileName);
	cout << endl << endl;

	//Opens the file
	inFile.open(fileName);

	//Checks to make sure the file was able ot be opened and if not, ends the program
	if (inFile.is_open())
	{
		//While the end of the file has not been reached, the while loop continues
		while (!inFile.eof())
		{
			//Calls Function to read each character into the array charArray
			inFile.getline(charArray, 1000);

			//Prints this line of code in normal sentence form to the screen. 
			//The reason this line of code appears here in the program is to allow the program to take input of
			//a product review spread over multiple lines
			cout << charArray << endl << endl;


			//tokenize the character array
	
			//Delimiters to let strtok_s know where the end of a word is
			char delimiters[] = " .,?!:;\n";

			//Pointer variable to point to the word to be parsed out of the input. Initialized to NULL.
			char* wordToBeTakenOut = NULL;

			//Pointer for the next variable to be taken out and keep track of what is left in the array. 
			//Initialized to NULL.
			char* nextWordToBeTakenOut = NULL;

			//Bool variable to track when the while loop should end. 
			//Evaluates to true when there are no more words to be tokenized
			bool endOfWhileLoop = false;

			//Pulls the first word out of the character array
			wordToBeTakenOut = strtok_s(charArray, delimiters, &nextWordToBeTakenOut);

			//Calls review class function to add word to the vector reviewWords
			myReview.addWord(wordToBeTakenOut);

			//While there are still more words in the character Array, keep retrieving them
			while (endOfWhileLoop == false)
			{
				//Pulls out the next word in the character array
				wordToBeTakenOut = strtok_s(NULL, delimiters, &nextWordToBeTakenOut);

				//If there are no more words in the array, set endOfWhile loop to true to end the loop
				if (wordToBeTakenOut == NULL)
				{
					endOfWhileLoop = true;
				}

				//Checks to make sure the value for the word to enter is not null and if so adds the word
				//to the vector of reviewWords
				else
				{
					if (wordToBeTakenOut != NULL)
					{
						myReview.addWord(wordToBeTakenOut);
					}

				}
			}

		}

		
			
	}

	//If file could not be opened, print this message to inform the user and end the program
	else
	{
		cout << "File could not be opened. Exiting program.\n\n";

		system("pause");
		return 1;
	}
	

	//Closes the file
	inFile.close();

	

	//Calls function to print the results
	myReview.printRankedWords();

	//Closing program statements 
	system("pause");
	return 0;
}


//Function definitions


//Function to print the initial instructions for use
void printInstructions()
{
	cout << "This program takes a review file of max 1000 characters as input, tokenizes the words,\n";
	cout << " and then prints the words with their frequency of use.\n\n";
	cout << "To begin please enter the name of the file you wish to open.\n\n";
	cout << "File Name: ";

}

