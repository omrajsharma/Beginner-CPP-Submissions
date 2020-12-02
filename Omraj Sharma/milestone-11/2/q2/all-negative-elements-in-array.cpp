#include <iostream>

int main()
{
    std::cout << "Input 10 elements in the array" << '\n' ;
    int arr[10] ;
    for( int i = 0 ; i < 10 ; i++ )
        std::cin >> arr[i] ;

    for( int i = 0 ; i < 10 ; i++ )
        if( arr[i] < 0 )
            std::cout << arr[i] << '\n' ;

    return 0;
}
