#include <iostream>

/*
    To input elements into matrix of size m x n
    To display elements of matrix of size m x n
    Sum of all elements of matrix of size m x n
    To display row-wise sum of matrix of size m x n
    To display column-wise sum of matrix of size m x n
    To create transpose of matrix B of size n x m
*/

void inputArray( int *arr , int m , int n )
{
    for( int i = 0 ; i < m ; i++ )
        for( int j = 0 ; j < n ; j++ )
            std::cin >> *(arr + i*n + j) ;
}

void displayArray( int *arr, int m , int n )
{
    std::cout << '\n' ;
    for( int i = 0 ; i < m ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
        {
            std::cout << *(arr + i*n + j) << ' ' ;
        }
        std::cout << '\n' ;
    }
}

void sumArray ( int *arr , int m , int n )
{
    int sum = 0 ;
    for( int i = 0 ; i < m ; i++ )
        for( int j = 0 ; j < n ; j++ )
            sum += *(arr + i*n + j) ;

    std::cout << "\nSum of all the elements in the array : " << sum << '\n' ;
}

void rowSum ( int *arr , int m , int n )
{
    int rSum ;
    std::cout << "\nRow wise sum : " ;
    for( int i = 0 ; i < m ; i++ )
    {
        rSum = 0 ;
        for( int j = 0 ; j < n ; j++ )
            rSum += *(arr + i*n + j) ;
        std::cout << '\n' << rSum ;
    }
}

void columnSum ( int *arr , int m , int n )
{
    int cSum ;
    std::cout << "\nColumn wise sum : " ;
    for( int j = 0 ; j < n ; j++ )
    {
        cSum = 0 ;
        for( int i = 0 ; i < m ; i++ )
            cSum += *(arr + i*n + j) ;
        std::cout << '\n' << cSum ;
    }
}


void transMatrix ( int *arr , int m , int n )
{
    std::cout << "\n THIS FACILITY IS NOT AVAILABLE NOW! \n" ;
    /*
    int arr1[n][m] ;
    int temp ;
    for( int i = 0 ; i < m ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
        {
            temp = *(arr + i*n + j) ;
            *(arr1 + j*m + i ) = temp ;
        }
    }

    for( int i = 0 ; i < n ; i++ )
        for( int j = 0 ; j < m ; j++ )
            std::cout << *(arr1 + i*m + j) ;
*/
}

int main()
{
    int m , n ;
    std::cout << "### Welcome To Our Program ###\n" ;
    std::cout << "\nEnter the number of ROWS in array : " ;
    std::cin >> m ;
    std::cout << "\nEnter the number of COLUMNS in array : " ;
    std::cin >> n ;

    int arr[m][n] ;

    bool flag = true ;
    int choice ;

    while(flag)
    {
        std::cout << "\n1. Input elements in matrix " ;
        std::cout << "\n2. Display elements in matrix " ;
        std::cout << "\n3. Sum of all elements of matrix  " ;
        std::cout << "\n4. Row wise sum of matrix " ;
        std::cout << "\n5. Column wise sum of matrix " ;
        std::cout << "\n6. Display transpose of matrix " ;
        std::cout << "\nAny Character to (Exit) " ;
        std::cin >> choice ;

        switch(choice)
        {
            case 1: inputArray( (int*) arr , m , n ) ;
                    break;
            case 2: displayArray ( (int*) arr , m , n ) ;
                    break;
            case 3: sumArray ( (int*) arr , m , n ) ;
                    break;
            case 4: rowSum ( (int*) arr , m , n ) ;
                    break;
            case 5: columnSum ( (int*) arr , m , n ) ;
                    break;
            case 6: transMatrix ( (int*) arr , m , n ) ;
                    break;
            default:
                flag = false ;
        }
    }
    return 0;
}
