
#include <iostream>

//compiler compiled all files so it saw the method
int sum(int a, int b);

int main()
{
    //This function comes from another cpp file
    std::cout << sum(10, 10);
}

