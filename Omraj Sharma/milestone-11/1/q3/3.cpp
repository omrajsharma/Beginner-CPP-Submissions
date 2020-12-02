#include <iostream>

int main()
{
    std::cout << "Enter 20 integers into the array : " << '\n' ;
    int arr[20] ;
    for( int i = 0 ; i < 20 ; i++ )
        std::cin >> arr[i] ;

    int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;

    for( int i = 0 ; i < 20 ; i++ )
    {
        if( arr[i] > 0 )
            pos++;
        else
            neg++;

        if( arr[i]%2 == 0 )
            even++;
        else
            odd++;

        if( arr[i] == 0 )
            zero++;
    }

    std::cout << "Total numbers of positives in the array entered are : " << pos << '\n' ;
    std::cout << "Total numbers of negatives in the array entered are : " << neg << '\n' ;
    std::cout << "Total numbers of odds in the array entered are : " << odd << '\n' ;
    std::cout << "Total numbers of evens in the array entered are : " << even << '\n' ;
    std::cout << "Total numbers of zeros in the array entered are : " << zero << '\n' ;

    return 0;
}
