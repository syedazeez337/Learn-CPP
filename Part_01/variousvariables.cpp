#include <iostream>
#include <string>
#include <format>

using std::cout;
using std::cin;
using std::string;
using std::format;

int main(void)
{
    int chicken;
    float meat;
    string tractor;
    cout << "Chicken: ";
    cin >> chicken;
    cout << "Meat(kg): ";
    cin >> meat;
    cout << "Tractor: ";
    cin >> tractor;
    // summary
    cout << "And finally, a summary:\n";
    cout << format("{}\n{}\n{}\n", chicken, meat, tractor);
}