/* Program to find the list of three letter combinations
    that are not already defined as words
    Pre: ThreeLetterWords.txt is a file with alphabetically
        sorted three letter words
    Post: UnusedWords.txt contains all three letter combinations
        not in ThreeLetterWords.txt
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char toChar(int& num);

int main () {
    ifstream input;
    ofstream output;
    string dictionaryWord, newWord;
    char firstChar, secondChar, thirdChar;
    input.open ("ThreeLetterWords.txt");
    output.open ("UnusedWords.txt");

    input >> dictionaryWord;
    for (int firstNum = 'A'; firstNum < 'Z' + 1; firstNum++)
        for (int secondNum = 'A'; secondNum < 'Z' + 1; secondNum++)
            for (int thirdNum = 'A'; thirdNum < 'Z' + 1; thirdNum++) {
                newWord = toChar(firstNum);
                newWord += toChar(secondNum);
                newWord += toChar(thirdNum);
                if (newWord == dictionaryWord)
                    input >> dictionaryWord;
                else
                    output << newWord << endl;
    }

    input.close();
    output.close();
    return 0;
}

char toChar(int& num) {
    return num;
}
