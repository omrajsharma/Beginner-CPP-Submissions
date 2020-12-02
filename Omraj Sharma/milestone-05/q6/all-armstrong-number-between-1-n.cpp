#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;

    for( int i = 1 ; i <= num ; i++ )
    {
        int sum = 0 , temp = i ;
        while( temp > 0 )
        {
            int temp1 = temp%10;
            temp /= 10 ;
            sum += pow(temp1,3);
        }
        if(sum == i)
            std::cout << i << "\n";
    }

    return 0 ;
}
