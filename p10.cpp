#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    // Declare variables
    
    ifstream file;
    char character;
    int character_count = 0;

    // Prompt the user to enter the file path
    

    // Open the file
    file.open("dsu.txt");

    // Check if the file is open
    if (!file.is_open()) {
        cout << "Unable to open the file." << endl;
        return 1; // Exit with an error code
    }

    // Read the file character by character and count characters
    while (file.get(character)) {
        character_count++;
    }

    // Close the file
    file.close();

    // Print the result
    cout << "Number of characters in the file: " << character_count << endl;

    return 0; // Exit successfully
}

