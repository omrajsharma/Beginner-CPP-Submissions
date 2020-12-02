// Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.
#include <iostream>

int main()
{
    std::cout << "Enter 10 integers into array : " << '\n' ;
    int arr[10] ;
    for( int i = 0 ; i < 10 ; i++ )
        std::cin >> arr[i] ;

    int arr1[10];
    for( int i = 0 ; i < 10 ; i++ )
        arr1[i] = arr[9-i] ;

    for( int i = 0 ; i < 10 ; i++ )
        std::cout << arr1[i] << '\n' ;

    return 0;
}

