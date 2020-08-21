#include<iostream>

void PrintHello(const char* charArr)
{
    std::cout << charArr;
}


int Add(int a, int b)
{
return a + b;
}

void PrintArrStr(const char* arrString)
{
    for(int i = 0; i < 5; i++)
    {
        std::cout << arrString + i << std::endl;
    }
}

int main()
{
std::cout << "add: " << Add(1,2) << std::endl;


const char* myString{"Hello"};
PrintArrStr(myString);
std::cin.get();

return 0;
}