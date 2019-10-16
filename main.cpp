#include <iostream>
#include <limits>




int x;

int a[10];

class foo{

public:

    foo(){

        std::cout << "foo::ctor called " << std::endl;
    }

};

int main() {

    std::cout << "the valeue of x is" << x << std::endl;

    int y;

    int z {23};

    std::cout << "the valeue of y is" << y << std::endl;

    std::cout << "the valeue of z is" << z << std::endl;

    int b[10];

    foo f;


    return 0;
}