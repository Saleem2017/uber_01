#include <iostream>
#include <limits>

#include "foo.hpp"


template <typename T>

void print_type_information(){

    std::cout << typeid(T).name() << "\t|"
              << sizeof(T) << "\t|"
              << std::numeric_limits<T>::min() << "\t|"
              << std::numeric_limits<T>::max() << "\t|"
              << std::numeric_limits<T>::lowest() << std::endl;

}
int main() {

    std::cout << "Name" << "\t|"
         << "Size" << "\t|"
         << "Min"  << "\t|"
         << "Max"  << "\t|"
         << "Lowest" << std::endl;

    print_type_information<bool>();
    print_type_information<char>();
    print_type_information<int>();
    print_type_information<short int>();
    print_type_information<float >();
    print_type_information<double >();
    print_type_information<long double >();



    foo();
    return 0;
}