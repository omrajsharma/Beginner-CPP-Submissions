#include <iostream>

void rowProduct( int arr[4][6])
{
    int sum ;
    for( int i = 0 ; i < 4 ; i++ )
    {
        sum = 0 ;
        for( int j = 0 ; j < 6 ; j++ )
        {
            sum += arr[i][j] ;
        }
        std::cout << sum << '\n' ;
    }
}

int main()
{
    int arr[4][6] { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 } ;

    rowProduct( arr ) ;

    return 0 ;
}
