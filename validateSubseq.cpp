// validateSubseq.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    int indexofLastFoundElem = -1;
    vector<int>::iterator it=array.begin(),it1;
    for (int seq = 0; seq < size(sequence); seq++) { 
        it1 = it;
        it = find(it, array.end(), sequence[seq]);
        if (it1 == it&&array[seq-1]==array[seq] && seq > 0) {
            advance(it, 1);
        }
        else if ((indexofLastFoundElem >= (it - array.begin()))) {
            return false;
        }
        
        indexofLastFoundElem = it - array.begin();

        //if (it == array.end()) {}
        //else {

           // return false;
        //}


    }
    return true;
}

int main()
{
    vector<int> array = { 1,1,1,1,1}, sequence = { 1, 1, 1};
    bool ans=isValidSubsequence(array, sequence);
    cout << ans;
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
