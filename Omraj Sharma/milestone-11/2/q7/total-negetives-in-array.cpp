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

    int neg = 0 ;
    for( int i = 0 ; i < num ; i++ )
        if( arr[i] < 0 )
            neg++ ;

    std::cout << "Total number of negatives are : " << neg << '\n' ;

    return 0;
}
