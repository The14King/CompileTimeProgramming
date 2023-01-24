#include <iostream>
#include <string>

// Const demo code
struct person{
    person(std::string blood,std::string name,std::string gender):blood_type(std::move(blood)),name(std::move(name)),gender(std::move(gender)){}

    void set_gender(const std::string& new_gender) const {this->gender = new_gender;}
    //void set_name(const std::string& new_name) const{this->name = new_name;}

    const std::string blood_type;
    const std::string name;
    mutable std::string gender;
};

// Constexpr demo code
constexpr int value1 = 10;

int main() {
    // Constexpr variables are implicit const
    //value1 = 12;             // ERROR!
    std::cout << value1 << '\n';
}