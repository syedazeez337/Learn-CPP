#include <iostream>
#include <format>

using std::cout;
using std::format;

int main(void)
{
    int num1 = 12.3;
    int num2{24.34};
    cout << format("number = {}\n", num1);
    cout << format("number = {}\n", num2);
}