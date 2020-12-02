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

    int odd = 0 , even = 0 ;
    for( int i = 0 ; i < num ; i++ )
        if( arr[i]%2==0 )
            even++ ;
        else
            odd++ ;

    std::cout << "Total number of odd are : " << odd << "\nTotal number of even" << even << '\n' ;

    return 0;
}
