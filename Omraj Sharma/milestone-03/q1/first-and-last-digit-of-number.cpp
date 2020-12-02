#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x ;

    int last ;

    last = x % 10 ;

    while(x > 9)
    {
        x /= 10 ;
    }

    std::cout << "First is : " << x << " Last is : " << last << "\n";

    return 0;
}
