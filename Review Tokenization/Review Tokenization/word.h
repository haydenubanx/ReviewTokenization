#pragma once
#include <iostream> 
#include <string> 


class word
{
	//Variable to store the amount of times this word has occured
	int frequency;

	//Variable to store the name of the word
	std::string thisWord;


public:
	//Returns the name of the word
	std::string getWord() const;
	

	//Takes a string for the name of the word as input and sets the word's name to that input
	void setWord(std::string wordInput);


	//Returns the frequency value for word
	int getWordFrequency() const;
	

	//Takes an integer value for the frequency of the word as input and sets the word frequency to that input
	void setWordFrequency(int frequencyInput);


	//Increments the value for frequency up by one
	void incrementFrequency();



	//Constructor that inititalizes the name of the word.  Takes char* as input
	//and sets that input to the name of word and the frequency of this word will be set to one.
	word(char* wordName);
	

	//Default constructor intitalizes the frequency to zero and the string for the word to ""
	word();


	//Destructor for word
	~word();


};