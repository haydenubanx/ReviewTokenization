# Review Tokenization and Word Frequency Analysis

## Overview

This project tokenizes words from product review files and calculates the frequency of each word's occurrence. The system allows users to input a text file, tokenizes the content, and outputs the frequency of each unique word. The program handles case insensitivity and punctuation, ensuring accurate word counts.

## Features

- **Word Tokenization**: Tokenizes words from a review text, splitting them based on delimiters such as spaces, punctuation, and newlines.
- **Word Frequency Calculation**: Tracks how many times each word appears in the review.
- **Case-Insensitive Matching**: The program is case-insensitive, ensuring words like "The" and "the" are treated as the same word.
- **Multiple Input Reviews**: Users can input various review files and receive a frequency count for each word.

## Program Components

### 1. `Review Tokenization Driver.cpp`
- **Description**: The main driver of the program, which interacts with the user to select a review file and runs the tokenization and word frequency analysis.
- **Key Functionality**:
    - Prompts the user for a review file.
    - Tokenizes the words from the input file.
    - Displays the original review and outputs word frequency data.

### 2. `review.cpp` and `review.h`
- **Description**: Implements the logic for managing and processing the review, including tokenizing the words and counting their frequencies.
- **Key Functionality**:
    - Uses `strtok_r` to break down the text into individual words.
    - Tracks word frequencies and manages the word list.

### 3. `word.cpp` and `word.h`
- **Description**: Handles individual word data, including the word itself and its frequency.
- **Key Functionality**:
    - Manages the name and frequency of each word.
    - Provides functions to set, get, and increment word frequency.

## Example Files

### 1. `test1.txt`
A sample review demonstrating a simple product review.
```bash
This is an example Review. Everything in this review is really great.
I am happy this review worked out so well and I can’t wait to try the next one!
```

### 2. `test2.txt`
A review of a laptop and accessories.
```bash
The laptop I purchased was awesome.
It had twice as much memory and processing speed as my last computer, yet it was small and lightweight.
I am very pleased with this purchase and the awesome customer service I received.
I also purchased some accessories that were really great, too. Thanks for being such a great and awesome company.
I will be purchasing more from you in the future.
```

### 3. `test3.txt`
A test file to check how case-insensitive matching works with repeated words.
```bash
The the THe ThE tHe tHE
```

### 4. `test4.txt`
A filler text file to test large bodies of text.
```bash
Lorem ipsum dolor sit amet, consectetur adipiscing elit.
Integer diam orci, fermentum eget libero quis, consequat finibus tellus.
…
```

## Compilation and Usage

### Prerequisites

To compile and run the project, you will need:
- A C++ compiler (e.g., GCC, Clang).
- A terminal or command line environment to compile and execute the program.

### Compilation

To compile the project, run the following command:

```bash
g++ -o review_tokenizer "Review Tokenization Driver.cpp" review.cpp word.cpp -I
```

### Running the Program
Once compiled, you can run the program using:
```bash
./review_tokenizer
```

### Usage Instructions

1. The program will prompt you to input the name of a text file.
2. Enter the file name (e.g., `test1.txt`).
3. The program will display the original review and output the frequency of each word.
4. The word counts are case-insensitive, and punctuation is ignored during tokenization.

### Example Output

For the file `test1.txt`, an example output might look like:

```bash
Original Review:
This is an example Review. Everything in this review is really great. 
I am happy this review worked out so well and I can't wait to try the next one!

Word Frequency:
this: 2
review: 3
is: 1
an: 1
example: 1
everything: 1
...
```

## Future Improvements

- **Stop Words**: Implement a list of stop words (e.g., "and", "the") to exclude from the frequency count.
- **Additional Delimiters**: Improve the tokenizer to handle additional delimiters or special cases.
- **Word Sorting**: Provide an option to sort words by frequency or alphabetically in the output.

## License

This project is open-source under the MIT License. See the [LICENSE](LICENSE) for more details.