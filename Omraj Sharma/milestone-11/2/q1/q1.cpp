#include <iostream>

int main()
{
    std::cout << "Enter the number of elements : " ;
    int num ;
    std::cin >> num ;

    int arr[num] ;
    std::cout << "Enter the Elements" << '\n' ;
    for ( int i = 0 ; i < num ; i++ )
        std::cin >> arr[i] ;

    for ( int i = 0 ; i < num ; i++ )
        std::cout << arr[i] << ' ' ;

    return 0;
}
