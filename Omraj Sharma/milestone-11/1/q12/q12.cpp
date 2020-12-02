//  Write a program to print sum, average of all numbers, smallest and largest element of an array.

#include <iostream>

int main()
{
    std::cout << "Enter the size of the array : " ;
    int sizeArr ;
    std::cin >> sizeArr ;
    int arr[sizeArr] ;

    std::cout << "Enter the elements of array : " ;
    for( int i = 0 ; i < sizeArr ; i++ )
        std::cin >> arr[i] ;

    int sum = 0 , small = arr[0] , large = arr[0] ;
    for ( int i = 0 ; i < sizeArr ; i++ )
    {
        sum += arr[i];
        if( small > arr[i] )
            small = arr[i] ;
        if( large < arr[i] )
            large = arr[i] ;
    }

    std::cout << "Sum of all the number : " << sum << '\n' ;
    std::cout << "Average of all the number : " << sum/sizeArr << '\n' ;
    std::cout << "Smallest of all the number : " << small << '\n' ;
    std::cout << "Largest of all the number : " << large << '\n' ;

    return 0;
}

