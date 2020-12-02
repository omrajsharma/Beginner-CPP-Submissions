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

    int sum = 0 ;
    for( int i = 0 ; i < num ; i++ )
        sum += arr[i] ;

    std::cout << "Sum of the elements of the arrays are : " << sum ;

    return 0;
}
