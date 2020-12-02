// Reverse of an array to find out

#include <iostream>

int main()
{
    std::cout << "Enter the size of an array : " ;
    int sizi ;
    std::cin >> sizi ;
    int arr[sizi] ;

    std::cout << "Enter the elements of array" << '\n' ;
    for( int i = 0 ; i < sizi ; i++ )
        std::cin >> arr[i] ;

    for( int i = sizi-1 ; i >= 0 ; i-- )
        std::cout << arr[i] << ' ' ;

    return 0;
}
