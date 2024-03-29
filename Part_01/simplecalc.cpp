#include <iostream>
#include <format>

using std::cout;
using std::cin;
using std::format;

int main(void)
{
    int first{0};
    int second{0};
    cout << "Give the first number: ";
    cin >> first;
    cout << "Give the second number: ";
    cin >> second;
    cout << format("{} + {} = {}\n", first, second, first+second);
    cout << format("{} - {} = {}\n", first, second, first-second);
    cout << format("{} * {} = {}\n", first, second, first*second);
    cout << format("{} / {} = {}\n", first, second, (float) first/ (float) second);
}