#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int dec , decTemp ;
    std::cin >> dec ;
    decTemp = dec ;

    long binary = 0 , place = 1 ;
    while(decTemp>0)
    {
        int rem = decTemp % 2 ;
        binary = (rem * place) + binary ;
        decTemp /= 2 ;
        place *= 10 ;
    }

    int arr[] = {0 , 1 , 10 , 11 , 100 , 101 , 110 , 111 } ;
    int oct = 0 , pos = 1;
    while( binary > 0)
    {
        int temp = binary % 1000 ;
        for( int i = 0 ; i < 8 ; i++ )
        {
            if(arr[i] == temp)
            {
                oct += i*pos ;
                pos *= 10 ;
            }
        }
        binary /= 1000;
    }

    std::cout << oct << "\n";

    return 0 ;
}



