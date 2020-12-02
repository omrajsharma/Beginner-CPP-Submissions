#include <iostream>

int main()
{
    int arr[10] ;

    std::cout << "Enter 10 digit in the array : " << '\n' ;

    for( int i = 0 ; i < 10 ; i++ )
    {
        std::cin >> arr[i] ;
    }

    for( int i = 0 ; i < 10 ; i++ )
    {
        std::cout << arr[i] << ' ' ;
    }


    return 0;
}
