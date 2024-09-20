#include <iostream> 
#include <string> 
#include "word.h"
using namespace std;


	//Returns the name of the word
	string word::getWord() const
	{
		return thisWord;
	}

	//Takes a string for the name of the word as input and sets the word's name to that input
	void word::setWord(string wordInput)
	{
		thisWord = wordInput;
	}

	//Returns the frequency value for the word
	int word::getWordFrequency() const
	{
		return frequency;
	}

	//Takes an integer value for the frequency of the word as input and sets the word frequency to that input
	void word::setWordFrequency(int frequencyInput)
	{
		frequency = frequencyInput;
	}

	//This function increments the frequency value of a word by one
	void word::incrementFrequency()
	{
		frequency += 1;
	}


	//Constructor that inititalizes the name of the word and the frequency it occurs to the user input
	word::word(char* wordName)
	{
		thisWord = wordName;

		frequency = 1;
	}

	//Default constructor intitalizes the frequency to zero and the string for the word to ""
	word::word()
	{
		frequency = 0;
		thisWord = "";
	}

	//Deconstructor removes word and it's allocated memory
	word::~word()
	{

	}
