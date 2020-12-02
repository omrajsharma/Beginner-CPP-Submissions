#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x;

    int prod = 1;

    while ( x > 0 )
    {
        int temp = x % 10 ;
        x /= 10 ;
        prod *= temp;
    }

    std::cout << "Sum is : " << prod ;

    return 0;
}
