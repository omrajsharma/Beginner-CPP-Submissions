#include <iostream>

void display ( int arr[] , int n )
{
    for ( int i = 0 ; i < n ; i++ )
        std::cout << arr[i] ;
}

void display1 ( int *arr1, int r , int c ) // #######
{
    for ( int i = 0 ; i < r ; i++ )
        for ( int j = 0 ; j < c ; j++ )
            std::cout << *(arr1 + i*c + j) ; // #######
}

//another method to pass 2D array
void display2 ( int arr1[][3] )
{
    for ( int i = 0 ; i < 3 ; i++ )
        for ( int j = 0 ; j < 3 ; j++ )
            std::cout << arr1[i][j] ;
}

int main()
{
    // 1D
    int arr[] {1,2,3,4,5} ;
    //display(arr, 5) ;


    // 2D
    int arr1[][3] {  {1,2,3},
                    {4,5,6},
                    {7,8,9}
                } ;
    display1 ( (int*) arr1, 3, 3) ;     // ########
    display2 ( arr1 ) ;


    return 0 ;
}
