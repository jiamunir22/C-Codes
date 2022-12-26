// max-subset-sum-no-adjacent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <vector>
using namespace std;

int maxSubsetSumNoAdjacent(vector<int> array) {
    // Write your code here.
    if (size(array) == 0)
        return 0;
    if (size(array) == 1) {
        return array[0];
    }
    //int first=array[0];
    vector<int> maxsum;maxsum.push_back(array[0]), maxsum.push_back(array[1]);
    int temp;
    for (int i = 2; i < size(array); i++) {
       temp= (max(maxsum[size(maxsum)-1], maxsum[size(maxsum) - 2] + array[i]));
      // if (temp != maxsum[size(maxsum) -1])
           maxsum.push_back(temp);
    }
    return maxsum[size(maxsum)-1];
}
int main()
{
    std::cout << "Hello World!\n";
    //std::cout << maxSubsetSumNoAdjacent({ 75, 105, 120, 75, 90, 135 });
    std::cout << maxSubsetSumNoAdjacent({ 4,3,5,200,5,3 });

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
