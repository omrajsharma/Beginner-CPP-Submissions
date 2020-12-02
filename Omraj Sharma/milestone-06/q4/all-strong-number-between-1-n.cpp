#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;

    for( int i = 1 ; i <= num ; i++ )
    {
        int ic = i ;
        int sum = 0 ;
        while( ic > 0 )
        {
            int temp = ic%10;
            int tempFact = 1 ;
            for( int k = 1 ; k <= temp ; k++ )
                tempFact *= k ;
            sum += tempFact;
            ic /= 10 ;
        }

       if( sum == i )
    std::cout << i << "\n" ;
    }

    return 0 ;
}
