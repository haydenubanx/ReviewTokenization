#include <iostream> 
#include <string> 
#include <vector>
#include <iomanip>
#include "review.h"
using namespace std;



	//Takes the token pointer from strtok_s() as input, turns that word to lower case, 
	//and adds that word to the vector list. If the word already exists in the list, the frequency of that word
	//is incremented by one instead of being added to the list.
	void review::addWord(char* wordPointer)
	{
		//Variable to track the length of the word. Is set to the length of the input word
		int wordLength = strlen(wordPointer);

		//for loop to loop over every letter in the word and set it to lower case
		for (int letterCount = 0; letterCount < wordLength; letterCount++)
		{
			wordPointer[letterCount] = tolower(wordPointer[letterCount]);
		}

		//Sets the value of found word to false for searching for if the word is in the list
		bool foundWord = false;

		//Loops over every word in reviewWords to see if this word already exists in the vector list
		for (int i = 0; i < getNumberOfReviewWords(); i++)
		{
			//If found
			if (wordPointer == reviewWords[i].getWord())
			{
				//Increment by one
				reviewWords[i].incrementFrequency();

				//Set foundWord to true so it is not added to the vector list again
				foundWord = true;

				//Since the word is found we are able to break from the for loop
				break;
			}
		}

		//If the word was not already in the list, add it to the list
		if (foundWord == false)
		{
			//Creates a new word with the name set as the word name and teh frequency set to 1
			word newWord(wordPointer);

			//Adds word to the vector list reviewWords
			reviewWords.push_back(newWord);
		}

	}

	//Returns the review word at the input index in the vector list reviewWords
	word review::getReviewWord(int index) const
	{
		return reviewWords.at(index);
	}

	//Returns the number of items in reviewWords
	int review::getNumberOfReviewWords() const
	{
		return reviewWords.size();
	}

	//Prints all of the words and their frequencies
	void review::printRankedWords() const
	{
		//sets formatting and prints header for output
		cout << setw(20) << left << "Word\t \tFrequncy" << endl;
		cout << setw(15) << left << "-----\t\t---------" << endl;

		//Loops over every word in reviewWords and prints out the name and frequency of that word
		for (int i = 0; i < getNumberOfReviewWords(); i++)
		{
			//Temporary word variable to store the word currently being cycled over
			word currentWord = getReviewWord(i);

			cout << setw(15) << left << currentWord.getWord() << "\t" << currentWord.getWordFrequency() << "\n\n";

		}
	}


	//Since there are no review class memeber variables to initialize and no pointer variables of this class to 
	// dealocate memory for, I have left both the constructor and destructor with empty function definitions


	//Constructor
	review::review()
	{

	}

	//Destructor
	review::~review()
	{

	}
