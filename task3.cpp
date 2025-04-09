/*
Task 3: Merge Two Sorted Arrays

Problem: Write a function that takes two sorted arrays of integers and merges them into a single sorted array. The resulting array should also be sorted.

Example:
Input: arr1 = [1, 3, 5], arr2 = [2, 4, 6]
Output: [1, 2, 3, 4, 5, 6]

Input: arr1 = [1, 5], arr2 = [2, 3, 4]
Output: [1, 2, 3, 4, 5]
*/

#include <iostream>
#include <vector>

using namespace std;

/*
Function to merge two sorted arrays of integers into a single sorted array

Args:
vector<int> arr1: The first sorted array of integers.
vector<int> arr2: The second sorted array of integers.

Returns:
vector<int>: A new sorted array containing all elements from arr1 and arr2.
*/
vector<int> merge_two_sorted_arrays(const vector<int> &arr1, const vector<int> &arr2)
{
    // Using two pointers to traverse both arrays and merge them into a new array
    // The merged array will be sorted as both input arrays are already sorted
    vector<int> merged_array;
    int size1 = arr1.size(), size2 = arr2.size();
    int idx1 = 0, idx2 = 0;

    // Merging the two arrays until one of them is fully traversed
    while (idx1 < size1 && idx2 < size2)
    {
        if (arr1[idx1] < arr2[idx2])
        {
            merged_array.push_back(arr1[idx1]);
            idx1++;
        }
        else
        {
            merged_array.push_back(arr2[idx2]);
            idx2++;
        }
    }
    // Adding any remaining elements from the first array
    while (idx1 < size1)
    {
        merged_array.push_back(arr1[idx1]);
        idx1++;
    }
    // Adding any remaining elements from the second array
    while (idx2 < size2)
    {
        merged_array.push_back(arr2[idx2]);
        idx2++;
    }
    return merged_array;
}

/*
Analysis of the above function
Time Complexity: O(n + m), where n is the size of the first array and m is the size of the second array.
Space Complexity: O(n + m), since we are creating a new array to store the merged result.
*/

int main()
{
    vector<int> arr1_1 = {1, 3, 5};
    vector<int> arr1_2 = {2, 4, 6};
    vector<int> result1 = merge_two_sorted_arrays(arr1_1, arr1_2);
    cout << "Input: {1, 3, 5}, {2, 4, 6}\nOutput: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr2_1 = {1, 5};
    vector<int> arr2_2 = {2, 3, 4};
    vector<int> result2 = merge_two_sorted_arrays(arr2_1, arr2_2);
    cout << "Input: {1, 5}, {2, 3, 4}\nOutput: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}