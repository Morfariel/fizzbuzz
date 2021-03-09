#include <iostream>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            std::cout << "fizz";
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz";
        }
        if (i % 3 && i % 5)
        {
            std::cout << i;
        }
        std::cout << std::endl;
    }
}
