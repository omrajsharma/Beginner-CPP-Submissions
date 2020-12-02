// delete all duplicates in the array
#include <iostream>

int main()
{
    int arr[] {10, 20, 10, 1, 100, 10, 2, 1, 5, 10} ;
    int counter = 0 ;
    for( int i = 0 ; i < 10 ; i++ )
    {
        int temp = arr[i] ;
        bool flag = true ;
        for( int j = 0 ; j <= i ; j++ )
        {
            if( j != i )
            {
                if( arr[j] == temp )
                {
                    flag = false ;
                    arr[i] = 0 ;
                }
            }
        }
        if(flag)
        {
            arr[counter] = temp ;
            counter++ ;
        }
    }
    for( int i = 0 ; i < counter ; i++ )
        std::cout << arr[i] << ' ' ;

    return 0;
}
