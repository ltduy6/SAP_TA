/*
Task 2: Count the Occurrences of Each Character in a String

Problem: Write a function that counts the occurrences of each character in a string and returns a map of characters to their respective counts.

Example:
Input: "sapstar"
Output: {s=2, a=2, p=1, t=1, r=1}

Input: "aaabbbbcc"
Output: {a=3, b=4, c=2}
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
Function to count occurrences of each character in a string

Args:
string s: The input string to count character occurrences.

Returns:
map<char, int>: A map where the key is the character and the value is the count of that character in the string.
*/
map<char, int> count_occurences(const string &s)
{
    // Using a map to count occurrences of each character
    // The key is the character, and the value is the count
    map<char, int> char_count;

    // Counting occurrences of each character in the string
    // The map will automatically handle the initialization of counts to 0
    for (char c : s)
    {
        char_count[c]++;
    }

    return char_count;
}

/*
Analysis of the above function
Time Complexity: O(n), where n is the length of the string.
Space Complexity: O(1), since the size of the character set is constant (e.g., ASCII).
*/

int main()
{
    string input1 = "sapstar";
    map<char, int> result1 = count_occurences(input1);
    cout << "Input: " << input1 << "\nOutput: ";
    for (const auto &pair : result1)
    {
        cout << pair.first << "=" << pair.second << " ";
    }
    cout << endl;

    string input2 = "aaabbbbcc";
    map<char, int> result2 = count_occurences(input2);
    cout << "Input: " << input2 << "\nOutput: ";
    for (const auto &pair : result2)
    {
        cout << pair.first << "=" << pair.second << " ";
    }
    cout << endl;

    return 0;
}
