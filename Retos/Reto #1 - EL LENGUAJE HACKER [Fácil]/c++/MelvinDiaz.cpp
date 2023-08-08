#include <iostream>
#include <string>

using namespace std;

string leetIterator(string input);
string toLoweCase(string input);

int main()
{

    cout << "Normal to leet language converter" << endl;
    cout << "Enter a string: ";
    string input;
    cin >> input;
    string inputLower = toLoweCase(input);
    cout << "Your string in leet is: ";
    cout << leetIterator(input) << endl;

    return 0;
}

string toLoweCase(string input)
{
    string stringConverted = "";
    for (int i = 0; i < input.length(); i++)
    {
        stringConverted += tolower(input[i]);
    }
    return stringConverted;
}

string leetIterator(string input)
{
    string stringConverted = "";
    for (int i = 0; i < input.length(); i++)
    {
        switch (input[i])
        {
        case 'a':
            stringConverted += "4";
            break;
        case 'b':
            stringConverted += "I3";
            break;
        case 'c':
            stringConverted += "[";
            break;
        case 'd':
            stringConverted += ")";
            break;
        case 'e':
            stringConverted += "3";
            break;
        case 'f':
            stringConverted += "ph";
            break;
        case 'g':
            stringConverted += "&";
            break;
        case 'h':
            stringConverted += "#";
            break;
        case 'i':
            stringConverted += "1";
            break;

        case 'j':
            stringConverted += ",_|";
            break;
        case 'k':
            stringConverted += "<|";
            break;
        case 'l':
            stringConverted += "1";
            break;
        case 'm':
            stringConverted += "|\\/|";
            break;
        case 'n':

            stringConverted += "^/";
            break;
        case 'o':
            stringConverted += "0";
            break;
        case 'p':
            stringConverted += "|*";
            break;
        case 'q':
            stringConverted += "(_,)";
            break;
        case 'r':
            stringConverted += "|2";
            break;
        case 's':
            stringConverted += "5";
            break;
        case 't':
            stringConverted += "7";
            break;
        case 'u':
            stringConverted += "(_)";
            break;
        case 'v':
            stringConverted += "\\/";
            break;
        case 'w':
            stringConverted += "\\/\\/";
            break;
        case 'x':
            stringConverted += "><";
            break;
        case 'y':
            stringConverted += "j";
            break;
        case 'z':
            stringConverted += "2";
            break;
        default:
            stringConverted += input[i];
            break;
        }
    }
    return stringConverted;
}