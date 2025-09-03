#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    string filename{};
    ifstream file; // declare an ifstream object
    while (true) {
        cout << "Enter the filename: " << flush;
        cin >> filename;
        file.open(filename); // try to open the file
        if (!file) {
            cout << "Note: No text file is given, you should find your own text file to apply this program to (maybe the source code itself?)." << endl;
        } else {
            break;
        }
    }
    int wordCount{}, shortestWordLength{INT_MAX}, longestWordLength{}, totalWordLength{};
    string shortestWord{}, longestWord{}, word{};
    int wordLength{};
    while (file >> word) {
        wordCount ++;
        wordLength = word.length();
        totalWordLength += wordLength;
        if (wordLength < shortestWordLength) {
            shortestWordLength = wordLength;
            shortestWord = word;
        }
        if (wordLength > longestWordLength) {
            longestWordLength = wordLength;
            longestWord = word;
        }
    }
    float averageLength{};
    averageLength = totalWordLength/wordCount;
    cout << "\nThere are " << wordCount << " words in the file." << endl;
    cout << "The shortest word was \"" << shortestWord << "\" with " << shortestWordLength << " character(s)." << endl;
    cout << "The longest word was \"" << longestWord << "\" with " << longestWordLength << " character(s)." << endl;
    cout << "The average length was " << averageLength << " character(s)." << endl;
}
