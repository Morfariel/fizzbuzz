#include <iostream>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if  (i % 3 == 0)
        {
            std::cout << "fizz";
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz";
        }
        if (i % 5 && i % 3)
        {
            std::cout << i;
        }
        std::cout << std::endl;
        i++;
    }
}
