// Modern C++
// 4/25/2022
// nullptr

#include <iostream>
#include <type_traits>

using namespace std;

void foo(char* a);
void foo(int);

int main(int argc, char* argv[])
{
    if (is_same<decltype(NULL), decltype(0)>::value)
        cout << "NULL == 0" << endl;
    if (is_same<decltype(NULL), decltype((void*)0)>::value)
        cout << "NULL == (void*)0" << endl;
    if (is_same<decltype(NULL), std::nullptr_t>::value)
        cout << "NULL == nullptr" << endl;

    foo(0);
    //foo(NULL); .// wont compile
    foo(nullptr);
    return 0;    
}

void foo(char* a) 
{
    cout << "foo(char*) is called" << endl;
}

void foo(int i)
{
    cout << "foo(int) is called" << endl;
}

// End of File

