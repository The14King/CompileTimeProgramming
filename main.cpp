#include <iostream>
#include <string>

struct person{
    person(std::string blood,std::string name,std::string gender):blood_type(std::move(blood)),name(std::move(name)),gender(std::move(gender)){}

    void set_gender(const std::string& new_gender)const{
        this->gender = new_gender;
    }
    const std::string blood_type;
    const std::string name;
    mutable std::string gender;
};
int main() {
    const auto victor = new person("A-", "victor", "male");

    std::cout << victor->blood_type << '\t' << victor->name << '\t' << victor->gender << '\n';

    //victor->name = "andrei";
    victor->gender = "female";

    std::cout << victor->blood_type << '\t' << victor->name << '\t' << victor->gender << '\n';
}
