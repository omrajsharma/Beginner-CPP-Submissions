#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x ;

    int last = x%10;

    while( x > 9 )
    {
        x /= 10 ;
    }

    std::cout << "Sum of First and Last digit is : " << x+last << "\n";

    return 0;
}
