#include <iostream>
#include <vector>
using namespace std;

string player1NAME;
string player2NAME;
bool win = false;

int counter = 0;

void output(vector<char>& pos);
void insert(int input, vector<char>& pos);
void win_condition(vector<char>& pos);
void introLines()
{
    cout << "Enter your name player 1:" << endl;
    getline(cin, player1NAME);
    cout << "Enter your name player 2:" << endl;
    getline(cin, player2NAME);
    cout << player1NAME << " will have the first move. [Has X]" << endl;
    cout << player2NAME << " will have the next move. [Has O]" << endl;
}



int main()
{
    introLines();
    vector<char> positions {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    output(positions);

    while(!win) //while not a win and draw
    {
        cout << "please enter a number: ";
        int num;
        cin >> num;
        insert(num, positions);
        output(positions);
        win_condition(positions);
    }
    return 0;
}


void output(vector<char>& pos)
{
    cout << "       |    |    " << endl;
    cout << "    " << pos.at(0) << "  | " << pos.at(1) << "  | " << pos.at(2) << " " << endl;
    cout << "   ____|____|____" << endl;
    cout << "       |    |    " << endl;
    cout << "    " << pos.at(3) << "  | " << pos.at(4) << "  | " << pos.at(5) << " " << endl;
    cout << "   ____|____|____" << endl;
    cout << "       |    |    " << endl;
    cout << "    " << pos.at(6) << "  | " << pos.at(7) << "  | " << pos.at(8) << " " << endl;
    cout << "       |    |    " << endl;
}

void insert(int input, vector<char>& pos)
{
    if (input == 1 && (pos.at(0) != 'X' && pos.at(0) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(0) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(0) = 'O';
        }
    }

    else if (input == 2 && (pos.at(1) != 'X' && pos.at(1) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(1) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(1) = 'O';
        }
    }

    else if (input == 3 && (pos.at(2) != 'X' && pos.at(2) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(2) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(2) = 'O';
        }
    }

    else if (input == 4 && (pos.at(3) != 'X' && pos.at(3) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(3) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(3) = 'O';
        }
    }

    else if (input == 5 && (pos.at(4) != 'X' && pos.at(4) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(4) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(4) = 'O';
        }
    }

    else if (input == 6 && (pos.at(5) != 'X' && pos.at(5) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(5) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(5) = 'O';
        }
    }

    else if (input == 7 && (pos.at(6) != 'X' && pos.at(6) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(6) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(6) = 'O';
        }
    }

    else if (input == 8 && (pos.at(7) != 'X' && pos.at(7) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(7) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(7) = 'O';
        }
    }

    else if (input == 9 && (pos.at(8) != 'X' && pos.at(8) != 'O')) {
        if (counter % 2 == 0)
        {
           pos.at(8) = 'X'; 
        }
        else if (counter % 2 == 1)
        {
            pos.at(8) = 'O';
        }
    }

    else {
        cout << "Invalid. Please pick another spot." << endl;
    }

    ++counter;
}

void win_condition(vector<char>& pos)
{
    //---Horizontal Wins---//
    if (pos.at(0) == pos.at(1) && pos.at(1) == pos.at(2)) {
        if (pos.at(0) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(0) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    else if (pos.at(3) == pos.at(4) && pos.at(4) == pos.at(5)) {
        if (pos.at(3) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(3) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    else if (pos.at(6) == pos.at(7) && pos.at(7) == pos.at(8)) {
        if (pos.at(6) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(6) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    //---Vertical Wins---//
    else if (pos.at(0) == pos.at(3) && pos.at(3) == pos.at(6)) {
        if (pos.at(0) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(0) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    else if (pos.at(1) == pos.at(4) && pos.at(4) == pos.at(7)) {
        if (pos.at(1) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(1) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    else if (pos.at(2) == pos.at(5) && pos.at(5) == pos.at(8)) {
        if (pos.at(2) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(2) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    //---Diagonal Wins---//
    else if (pos.at(0) == pos.at(4) && pos.at(4) == pos.at(8)) {
        if (pos.at(0) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(0) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    else if (pos.at(2) == pos.at(4) && pos.at(4) == pos.at(6)) {
        if (pos.at(2) == 'X') {
            cout << player1NAME << " has won!!!";
        }
        else if (pos.at(2) == 'O') {
            cout << player2NAME << " has won!!!";
        }
        win = true;
    }

    //---Tie---//
    else if (counter == 9) {
        cout << "It's a draw.  :(" << endl;
    }
    win = true;
    
}