#include <iostream>

int main()
{
    std::cout << "Enter the size of array : " ;
    int sizi ;
    std::cin >> sizi ;
    int arr[sizi] ;

    std::cout << "Enter elements in array : " ;
    for ( int i = 0 ; i < sizi ; i++ )
        std::cin >> arr[i] ;

    std::cout << "Sorting Begins" << '\n' ;
    for( int i = 0 ; i < sizi ; i++ )
    {
        int idx = 0 ;
        for( int j = 0 ; j < sizi-i ; j++ )
            if( arr[j] > arr[idx] )
                idx = j ;
        int temp = arr[sizi-1-i];
        arr[sizi-1-i] = arr[idx];
        arr[idx] = temp;
    }

    std::cout << "Element of array in ascending order : " ;
    for( int i = 0 ; i < sizi ; i++ )
        std::cout << arr[i] << ' ' ;

    return 0;
}
