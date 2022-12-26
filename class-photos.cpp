// class-photos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
    vector<int> row1, row2;
    if (redShirtHeights[0] < blueShirtHeights[0] && redShirtHeights[size(redShirtHeights) - 1] < blueShirtHeights[size(blueShirtHeights) - 1]) {
        row2 = blueShirtHeights;
        row1 = redShirtHeights;
    }
    else {
        row2 = redShirtHeights;
        row1 = blueShirtHeights;
    }
    for (int i = 0; i < size(redShirtHeights); i++) {
        if (row2[i] <= row1[i]) {
            return false;
        }

    }

    return true;
}

int main()
{
    //classPhotos({ 2, 4, 7, 5, 1 }, { 3, 5, 6, 8, 2 });
    classPhotos({ 5,4 }, { 5, 6});
    string st="kdgj";
    if (st[4] == NULL) {
        std::cout << "Hello World!\n" << strlen(st);

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
