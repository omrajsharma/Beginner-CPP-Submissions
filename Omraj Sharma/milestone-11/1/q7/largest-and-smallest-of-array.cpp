// Find the largest and smallest elements of an array.

#include <iostream>

int main()
{
    std::cout << "Enter the size of the array : " ;
    int sizeArr ;
    std::cin >> sizeArr ;

    int arr[sizeArr] ;
    for ( int i = 0 ; i < sizeArr ; i++ )
        std::cin >> arr[i] ;

    int large = arr[0] , small = arr[0] ;
    for( int i = 0 ; i < sizeArr ; i++ )
    {
        if( arr[i] > large )
            large = arr[i] ;
        if( arr[i] < small )
            small = arr[i] ;
    }

    std::cout << "Smallest is : " << small << " Largest is : " << large ;

    return 0;
}
