// smallest-difference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
    int smallest = INT_MAX;
    vector<int> result;
    for (int i = 0; i < size(arrayOne);i++) {
        for (int j = 0; j< size(arrayTwo);j++) {
            if ((abs(arrayOne[i] - arrayTwo[j])) < smallest) {
                smallest = abs(arrayOne[i] - arrayTwo[j]);
                result.clear();
                result. push_back(arrayOne[i]);
                result.push_back(arrayTwo[j]);
            }
        }
    }
    return result;
}

int main()
{
    vector<int> arrayOne = { -1, 5, 10, 20, 28, 3 }, arrayTwo = { 26, 134, 135, 15, 17 },res;
    res=smallestDifference(arrayOne,arrayTwo);
    std::cout << "Hello World!\n"<<res[0]<<res[1];
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
