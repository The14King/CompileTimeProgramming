#include <iostream>
#include <string>

//// Const demo code
//struct person{
//    person(std::string blood,std::string name,std::string gender):blood_type(std::move(blood)),name(std::move(name)),gender(std::move(gender)){}
//
//    void set_gender(const std::string& new_gender) const {this->gender = new_gender;}
//    //void set_name(const std::string& new_name) const{this->name = new_name;}
//
//    const std::string blood_type;
//    const std::string name;
//    mutable std::string gender;
//};

//// Constexpr variables demo code
//constexpr int value = 10;

//// Constexpr functions demo code
//constexpr int DoubleIt(const int& number){
//    return number * 2;
//}
//constexpr int value = DoubleIt(5);
//int value2 = DoubleIt(5);

////Consteval function demo code
//consteval int DoubleIt(const int& number){
//    return number * 2;
//}
//// This is evaluated at compile time
//constexpr int value = DoubleIt(5);
//// This could be evaluated at compile time so it is
//int value2 = DoubleIt(5);

//// Constinit demo code
//constexpr int DoubleIt(const int& number){
//    return number * 2;
//}
//
//constinit int value = DoubleIt(5);
//static int value2 = value;

// Is_const_evaluated() demo code
constexpr int double_or_square_it(const int& number){
    return std::is_constant_evaluated()? number * 2 : number * number;
}

// It executes the call at compile time
constinit int value = double_or_square_it(5);

int main() {
    // It executes at run time
    int value2 = double_or_square_it(5);

    std::cout << value << '\n';
    std::cout << value2 << '\n';
}
