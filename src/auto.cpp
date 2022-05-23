// Modern C++
// 4/26/2022
// auto

#include <iostream>
#include <typeinfo>

template<class T, class U>
double add(T t, U u) { return t + u; } // the return type is the type of operator+(T, U)

int main(int argc, char* argv[])
{
    std::cout << "Example Program To Test auto" << std::endl;
    
    auto a = 2 + 1;
    auto b = add(1.0, 1.2);

    const std::type_info& t = typeid(a);
    std::cout << t.name() << std::endl;

    const std::type_info& z = typeid(b);
    std::cout << z.name() << std::endl;
}

// End of File

