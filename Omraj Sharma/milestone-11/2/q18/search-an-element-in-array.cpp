#include <iostream>

int main()
{
    std::cout << "Enter the size of the array : " ;
    int sizi ;
    std::cin >> sizi ;
    int arr[sizi] ;

    std::cout << "Enter the elements of the array : " << '\n' ;
    for ( int i = 0 ; i < sizi ; i++ )
        std::cin >> arr[i] ;

    std::cout << "Enter the element to find : " ;
    int srch ;
    std::cin >> srch ;
    int idx  = -1 ;
    for( int i = 0 ; i < sizi ; i++ )
        if( arr[i] == srch )
        {
            idx = i ;
            break ;
        }

    std::cout << srch << " is found at position " << idx ;

    return 0;
}
