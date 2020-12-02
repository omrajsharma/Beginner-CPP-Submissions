#include <iostream>

int main()
{
    std::cout << "Enter the size of the array : " ;
    int num ;
    std::cin >> num ;
    int arr[num] ;

    std::cout << "Enter the elements of the array" << '\n' ;
    for( int i = 0 ; i < num ; i++ )
        std::cin >> arr[i] ;

    int first = arr[0], second = arr[0] ;
    for( int i = 0 ; i < num ; i++ )
        if( arr[i] > first )
        {
            second = first ;
            first = arr[i] ;
        }

    std::cout << "Second largest element is " << second << '\n' ;

    return 0;
}
