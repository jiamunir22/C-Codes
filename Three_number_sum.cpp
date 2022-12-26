// Three_number_sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> sort(int x,int y,int z) {
    vector<int>rs1,rs2,rs3, result;
    if (x < y && x < z) {
        result.push_back(x);
        if (y < z) {
            result.push_back(y);
            result.push_back(z);
        }
        else {
            result.push_back(z);
            result.push_back(y);
        }
    }
    else if (y < x && y < z) {
        result.push_back(y);
        if (x < z) {
            result.push_back(x); result.push_back(z);

        }
        else {
            result.push_back(z); result.push_back(x);

        }
    }
    else {
        result.push_back(z);
        if (x < y) {
            result.push_back(x); result.push_back(y);

        }
        else {
            result.push_back(y); result.push_back(x);

        }
    }

    return result;
}




vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
    vector<vector<int>> result; vector<int> sum; vector<int>::iterator it;
    for (int i = 0; i < size(array) - 2; i++) {
        for (int j = i + 1  ; j < size(array) - 1; j++) {
            for (int k = j + 1; k < size(array); k++) {
                if ((array[i] + array[j] + array[k]) == targetSum) {
                    vector<int>rs = sort(array[i], array[j], array[k]);
                    int loop = 0,flag=0;
                    while (loop < size(result)) {
                        if (rs <=result[loop]) {
                            break;
                        }
                        loop++;
                        flag = loop;

                    }
                    result.insert(result.begin() + flag, rs);
                    
                }

            }

        }

    }
    return result;
}



int main()
{
    vector<int> arr = { 12, 3, 1, 2, -6, 5, -8, 6 }; vector<vector<int>> res;
    res=threeNumberSum(arr, 0);
    for (auto r : res) {
        for (auto re1 : r) {
            std::cout << re1;
        }
    }
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
