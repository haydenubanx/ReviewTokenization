#pragma once
#include <iostream> 
#include <string> 
#include <vector>
#include "word.h"




class review
{
	//Vector list to store the different words found in a review
	std::vector <word> reviewWords;

public:

	//Takes the token pointer from strtok_r() as input, turns that word to lower case,
	//and adds that word to the vector list. If the word already exists in the list, the frequency of that word
	//is incremented by one instead of being added to the list.
	void addWord(char* wordPointer);
	

	//Returns the review word at the input index in the vector list reviewWords
	word getReviewWord(int index) const;


	//Returns the number of items in reviewWords
	int getNumberOfReviewWords() const;


	//Prints all of the words and their frequencies
	void printRankedWords() const;




	//Constructor
	review();


	//Destructor
	~review();


};