// Modern C++
// 4/22/2022
// Hello World

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    std::cout << "Hello C++ World" << std::endl;

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the c++ extension!"};
    
    for (const string& word: msg) 
    {
        cout << word << " ";
    }
    cout << endl;
}

// End of File
