// Write a program to find the sum and product of all elements of an array.

#include <iostream>

int main()
{
    std::cout << "Enter the size of an array : " ;
    int sizeArr ;
    std::cin >> sizeArr ;

    int arr[sizeArr] ;
    int sum = 0, prod = 1 ;
    std::cout << "Enter the elements of the array " << '\n' ;
    for( int i = 0 ; i < sizeArr ; i++ )
    {
        std::cin >> arr[i];
        sum += arr[i] ;
        prod *= arr[i] ;
    }

    std::cout << "Total sum of all elements : " << sum << " Total product of all elements : " << prod ;

    return 0 ;
}

