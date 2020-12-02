//Write a C program to input elements in two array and merge two array to third array. How to merge two array in C programming. Logic to merge two sorted array to third array in C program.

#include <iostream>

int main()
{
    int size1, size2 ;

    std::cout << "Enter the size of first array : " ;
    std::cin >> size1 ;
    int arr1[size1] ;
    for( int i = 0 ; i < size1 ; i++ )
        std::cin >> arr1[i] ;

    std::cout << "Enter the size of second array : " ;
    std::cin >> size2 ;
    int arr2[size2] ;
    for( int i = 0 ; i < size2 ; i++ )
        std::cin >> arr2[i] ;

    int size3 = size1 + size2 ;
    int arr3[size3] ;
    for( int i = 0 ; i < size3 ; i++ )
    {
        if( i < size1 )
        {
            arr3[i] = arr1[i] ;
        }
        else
        {
            arr3[i] = arr2[i-size1] ;
        }
    }

// SORTING PART IS MISSING. NOW ONLY THE UNSORTED ARRAY IS AVAILABLE

    for( int i = 0 ; i < size3 ; i++ )
        std::cout << arr3[i] << ' ';

    return 0;
}
