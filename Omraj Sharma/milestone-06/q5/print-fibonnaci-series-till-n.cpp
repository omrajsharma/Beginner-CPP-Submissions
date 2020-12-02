#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;

    int first = 0 ;
    int second = 1 ;

    std::cout << first << " " ;
    while ( second < num )
    {
        std::cout << second << " " ;
        int temp = first + second ;
        first = second ;
        second = temp ;

    }

    return 0 ;
}
