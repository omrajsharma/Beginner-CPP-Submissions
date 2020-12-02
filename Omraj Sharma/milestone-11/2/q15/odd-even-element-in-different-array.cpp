#include <iostream>

int main()
{
    std::cout << "Enter the size of array : " ;
    int sizi ;
    std::cin >> sizi ;
    int arr[sizi] ;

    std::cout << "Enter the elements of the array : " << '\n' ;
    for( int i = 0 ; i < sizi ; i++ )
        std::cin >> arr[i] ;

    int counterE = 0 ;
    int counterO = 0 ;
    int evenArr[sizi] ;
    int oddArr[sizi] ;
    for( int i = 0 ; i < sizi ; i++ )
    {
        if( arr[i]%2==0 )
        {
            evenArr[counterE] = arr[i] ;
            counterE++ ;
        }
        else
        {
            oddArr[counterO] = arr[i] ;
            counterO++ ;
        }
    }

    std::cout << "All the even elements in array : " ;
    for( int i = 0 ; i < counterE ; i++ )
        std::cout << evenArr[i] << ' ' ;

        std::cout << '\n' ;

    std::cout << "All the odd elements in array : " ;
    for( int i = 0 ; i < counterO ; i++ )
        std::cout << oddArr[i] << ' ' ;

    return 0;
}
