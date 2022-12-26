// Subarray_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int findIndexOfelement(vector<int> array, int num) {
    for (int i = 0; i < size(array); i++) {
        if (array[i] >= num) {
            return i;
        }

    }
}
vector<int> subarraySort(vector<int> array) {
    vector<int> result; vector<int>::iterator temp; int first=array[0],
       int last,_minval=min(array.begin(),array.end());
    if (array[0] > array[1]) {
        first = array[0];
    }
    for (int i = 1; i < size(array)-1;i++) {
        if (array[i] > array[i+1]) {
            first = i+1;   
       }
        

    }
    for (int i = 1; i < size(array); i++) {
        if (array[i] > array[first]) {
            first = i;
        }
    }


    for (int i = size(array)-1; i>0; i--) {
        if (array[i] < array[i-1]) {
            last = i;
            break;
        }
    }

    result.push_back(first);
    result.push_back(last);
    

    return result;
}

int main()
{
   vector<int> result=subarraySort({ 1,2,4,7,10,11,7,12,6,7,16,18,19});

   cout << result[0]<<"\t" << result[1];
   /// vector<int> rs = { 1,5,4,2,1,3,4,7 }; vector<int>::iterator it = rs.begin()+4;
   
    //std::cout << "Hello World!\n"<<it1;
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
