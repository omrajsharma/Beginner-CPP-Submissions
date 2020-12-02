
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

    std::cout << "Enter the number of time to rotate ( right ) : " ;
    int n ;
    std::cin >> n ;

    for ( int i = 0 ; i < n ; i++ )
    {
        int temp = arr[sizi-1] ;
        for( int j = sizi-1 ; j > 0 ; j-- )
        {
            arr[j] = arr[j-1] ;
        }
        arr[0] = temp ;
    }

    for ( int i = 0 ; i < sizi ; i++ )
        std::cout << arr[i] << ' ' ;

    return 0 ;
}
