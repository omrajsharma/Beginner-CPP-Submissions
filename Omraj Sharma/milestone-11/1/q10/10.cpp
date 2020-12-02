// Consider an integer array, the number of elements in which is determined by the user. The elements are also taken as input from the user. Write a program to find those pair of elements that has the maximum and minimum difference among all element pairs.

#include <iostream>

int main()
{
    std::cout << "Enter the size of the array : " ;
    int sizeArr ;
    std::cin >> sizeArr ;
    int arr[sizeArr] ;

    std::cout << "Enter the elements : " << '\n' ;
    for( int i = 0 ; i < sizeArr ; i++ )
        std::cin >> arr[i] ;

    int maxDiff = arr[0] - arr[1] ;
    int minDiff = arr[0] - arr[1] ;
    int minIndx , maxIndx ;

    for( int i = 0 ; i < sizeArr-1 ; i++ )
    {
        if( maxDiff < (arr[i] - arr[i+1]) )
        {
            maxDiff = (arr[i] - arr[i+1]) ;
            maxIndx = i ;
        }

        if( minDiff > (arr[i] - arr[i+1]) )
        {
            minDiff = (arr[i] - arr[i+1]) ;
            minIndx = i ;
        }
    }

    std::cout << "Pair having max difference is " << arr[maxIndx] << ' ' << arr[maxIndx+1] << '\n' ;
    std::cout << "Pair having min difference is " << arr[minIndx] << ' ' << arr[minIndx+1] << '\n' ;


    return 0;
}
