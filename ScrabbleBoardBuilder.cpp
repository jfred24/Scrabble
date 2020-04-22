#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <windows.h>
#include <limits>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15

int boardsize = 1;

int main()
{
    cout << "Select the board size (Length of the size of the square): ";
    while(1)
    {
        cin >> boardsize;
        if (cin.fail() || boardsize < 1 || boardsize > 20)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid board size (Input a number between 1 and 20)" << endl;
            cout << "Select the board size (Length of the size of the square): ";
        }
        else
            break;
    }
    
    ifstream infile;
    infile.open("WORDS.txt");
    string content;

    while(getline(infile, content))
    {
        cout << content << ' ';
    }
}
