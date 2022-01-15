#include<iostream>
#include <string>
using namespace std;

string player1NAME;
string player2NAME;

void introLines()
{
    cout << "Enter your name player 1" << endl;
    getline(cin, player1NAME);
    cout << "Enter your name player 2" << endl;
    getline(cin, player2NAME);
    cout << player1NAME << " will have the first move has X." << endl;
    cout << player2NAME << " will have the next move has O." << endl;
}



int main()
{
    introLines();
    cout << "    |    |    " << endl;
    cout << "    |    |    " << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << "    |    |    " << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << "    |    |    " << endl;
    cout << "    |    |    " << endl;

    
    
    
    
}