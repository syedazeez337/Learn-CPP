#include <iostream>
#include <string>
#include <format>

using std::cout;
using std::cin;
using std::string;
using std::format;

int main(void)
{
    string first, second;
    cout << "Greetings! How are you doing?\n";
    getline(cin, first);
    cout << "Oh, how interesting. Tell me more!\n";
    getline(cin, second);
    cout << "Thanks for sharing!\n";
}