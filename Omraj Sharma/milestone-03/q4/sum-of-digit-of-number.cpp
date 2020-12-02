#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x;

    int sum = 0;

    while ( x > 0 )
    {
        int temp = x % 10 ;
        x /= 10 ;
        sum += temp;
    }

    std::cout << "Sum is : " << sum ;

    return 0;
}
