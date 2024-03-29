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
    cout << "What's your name? ";
    getline(cin, word);
    cout << format("Hi {}\n", word);
}