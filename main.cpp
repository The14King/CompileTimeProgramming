#include <iostream>

constexpr int value(int prevvalue){
    return std::is_constant_evaluated() ? prevvalue * 2 : prevvalue * prevvalue;
}
constinit auto value1 = value(6);
int main() {
    auto value2 = value(6);
    std::cout << value1 << '\n';
    std::cout << value2 << '\n';
}
