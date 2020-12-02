#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x ;

    int first = x , last = x % 10 , check=0 ;

    while( first > 9 )
    {
        first /= 10;
        check++;
    }

    int temp = pow(10, check);
    int mainRem = x % temp;

    x = (last*pow(10,check))+mainRem;
    x = x - last;
    x = x + first;

    std::cout << x ;

    return 0;
}
