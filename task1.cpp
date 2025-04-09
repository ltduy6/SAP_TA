/*
Task 1: Find the First Non-Repeating Character in a String

Problem: Write a function that takes a string and returns the first non-repeating character in the string. If there are no non-repeating characters, return null.

Example:
Input: "sapstar"
Output: "p"

Input: "aabbcc"
Output: null
*/

#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

/*
Function to find the first non-repeating character in a string

Args:
string str: The input string to search for the first non-repeating character.

Returns:
char: The first non-repeating character in the string. If no such character exists, return the null character.
*/
char first_non_repeating_char(const string &str)
{
    // Using a map to count occurrences of each character
    unordered_map<char, int> char_count;
    // Counting occurrences of each character in the string
    for (const char &c : str)
    {
        char_count[c]++;
    }
    // Finding the first non-repeating character
    for (const char &c : str)
    {
        // If the character count is 1, return the address of the character
        if (char_count[c] == 1)
        {
            return c;
        }
    }

    // If no non-repeating character is found, return nullptr
    return '\0';
}

/*
Analysis of the above function
Time Complexity: O(n), where n is the length of the string.
Space Complexity: O(1), since the size of the character set is constant (e.g., ASCII).
*/

int main()
{
    string input1 = "sapstar";
    char result1 = first_non_repeating_char(input1);
    cout << "Input: " << input1 << "\nOutput: ";
    result1 ? cout << result1 : cout << "null";
    cout << endl;

    string input2 = "aabbcc";
    char result2 = first_non_repeating_char(input2);
    cout << "Input: " << input2 << "\nOutput: ";
    result2 ? cout << result2 : cout << "null";
    cout << endl;

    return 0;
}