#include <iostream>

void upHalf( int *arr , int N )
{
    for(int i = 0 ; i < N ; i++ )
    {
        for( int j = 0 ; j < N ; j++ )
        {
            if(j >= i)
                std::cout << *(arr + i*N + j) ;
            else
                std::cout << ' ' ;
        }
        std::cout << '\n' ;
    }
}

int main()
{
    int arr[5][5] { 2, 3, 1, 5, 0, 7, 1, 5, 3, 1, 2, 5, 7, 8, 1, 0, 1, 5, 0, 1, 3, 4, 9, 1, 5, } ;

    upHalf( (int*) arr , 5 ) ;

    return 0;
}
