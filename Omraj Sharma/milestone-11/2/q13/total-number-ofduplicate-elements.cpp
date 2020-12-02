#include <iostream>

int main()
{
    std::cout << "Enter the size of the array : " ;
    int sizi;
    std::cin >> sizi ;
    int arr[sizi], arr1[sizi] = {0} ;

    std::cout << "Enter the elements of the array : " ;
    for( int i = 0 ; i < sizi ; i++ )
        std::cin >> arr[i] ;

    int counter = 0 , ji = 0 ;

    for( int i = 0 ; i < sizi ; i++ )
    {
        bool flag = true ;

        for( int j = 0 ; j < sizi ; j++ )
            if( arr[i] == arr1[j] )
                flag = false ;

        if(flag)
        {
            arr1[ji] = arr[i] ;
            ji++;
        }
        else
            counter++ ;
    }

    std::cout << "Total numbers of duplicates are : " << counter << '\n' ;

    return 0;
}
