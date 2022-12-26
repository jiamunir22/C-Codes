// tournament-winner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
    vector<int> results) {
    vector<string> _listTeams; vector<int>score;
    for (auto c : competitions) {
        for (auto c1 : c) {
            int found = count(c.begin(), c.end(), c1);
            vector<string>::iterator t = find(_listTeams.begin(), _listTeams.end(), c1);
           if (found > 0 && (t== _listTeams.end())) {
                _listTeams.push_back(c1);
            }
        
        }

       
    }
    int count = 0, sum = 0;
    for (auto lt : _listTeams) {
        for (auto c : competitions) {
            if (c[0]._Equal(lt) && results[count] == 1) {
                sum = sum + 1; 
            }
            else if (c[1]._Equal(lt) && results[count] == 0) {
                sum = sum + 1;
            }
            count++;
        }
        score.push_back(sum); 
        sum = 0; count = 0;
    }
    int t = 0;
    for (auto v : score) {
        if (v > t) {
            t = v;
        }
    }
    vector<int>::iterator in = find(score.begin(), score.end(), t);
   // int in=score.at(t);
        
    return _listTeams.at(in-score.begin());

}
int main()
{
    string result = tournamentWinner({ {"abc","def"},{"def","qwe"} ,{"qwe","abc"} }, {1,0,0 });
   std::cout << "Hello World!\n"<<result;
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
