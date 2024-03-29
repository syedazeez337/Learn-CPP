#include <iostream>
#include <string>
#include <format>

using std::cout;
using std::cin;
using std::string;
using std::format;

int main(void)
{
    string word;
    int integer;
    float realnum;
    bool boolean;
    cout << "Give a string:\n";
    cin >> word;
    cout << "Give an integer:\n";
    cin >> integer;
    cout << "Give a double:\n";
    cin >> realnum;
    cout << "Give a boolean:\n";
    cin >> boolean;
    cout << format("You gave the string {}\n", word);
    cout << format("You gave the integer {}\n", integer);
    cout << format("You gave the double {}\n", realnum);
    cout << format("You gave the boolean {}\n", boolean);
}