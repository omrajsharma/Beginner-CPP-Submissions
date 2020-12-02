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

    int arr1[num] ;
    for( int i = 0 ; i < num ; i++ )
        arr1[i] = arr[i] ;

    for( int i = 0 ; i < num ; i++ )
        std::cout << arr1[i] << ' ' ;

    return 0;
}
