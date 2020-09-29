#include <iostream>

int main()
{
    std::cout << "Enter a binary number : " ;
    long db , dbTemp ;
    std::cin >> db ;
    dbTemp = db ;

    int arr[] = { 0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 , 1000 , 1001 , 1010 , 1011 , 1100 , 1101 , 1110 , 1111 } ;
    std::string oct ;

    while( dbTemp > 0 )
    {
        long temp = dbTemp % 10000 ;
        std::cout << temp << "\n" ;

        for( int i = 0 ; i < 16 ; i++ )
        {
            if( temp == arr[i])
            {
                if( i < 10 )
                    oct = (char)(i+48) + oct ;
                else
                    oct = (char)(i+55) + oct ;
            }
        }

        dbTemp /= 10000;
    }

    std::cout << "Octal of given number " << db << " : " << oct ;

    return 0 ;
}

