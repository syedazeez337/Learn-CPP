#include <iostream>
#include <string>
#include <format>

using std::cout;
using std::string;
using std::format;

int main(void)
{
    string name = "Ada Lovelace";
    cout << format("{} {}\n", "Hi", name);
}