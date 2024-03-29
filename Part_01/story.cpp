#include <iostream>
#include <string>
#include <format>

using std::cout;
using std::cin;
using std::string;
using std::format;

int main(void)
{
    string name, job;
    cout << "I will tell you a story, but I need";
    cout << " some information first.\n";
    getline(cin, name);
    cout << "What is their job?\n";
    getline(cin, job);
    cout << "Here is the story:\n";
    cout << format("Once upon a time there was {}, who was {}.\n", name, job);
    cout << format("On the way to work, {} reflected on life.\n", name);
    cout << format("Perhaps {} will not be {} forever.\n", name, job);
}