// Modern C++
// 4/30/2022
// Initializer List

#include <iostream>
#include <vector>

class Foo 
{
public:
    int value_a;
    int value_b;
    Foo(int a, int b) : value_a(a), value_b(b) {}
};

int main(int, char**)
{
    int arr[3] = {1,2,3};
    Foo foo(1,2);
    //Foo foo2 {3.1,4.2};
    std::vector<int> vec = {1,2,3,4,5};

    std::cout << "arr[0]:" << arr[0] << std::endl;
    std::cout << "foo:" << foo.value_a << ", " << foo.value_b << std::endl;
    //std::cout << "foo2:" << foo2.value_a << ", " << foo2.value_b << std::endl;
    for(std::vector<int>::iterator it = vec.begin();it != vec.end();++it)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}


// End of File
