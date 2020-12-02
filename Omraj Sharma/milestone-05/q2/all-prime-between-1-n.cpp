#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int num ;
    std::cin >> num ;

    for(int i = 2 ; i <= num ; i++ )
    {
        int check = true ;
        for(int j = 2 ; j<= i/2 ; j++ )
        {
            if( i%j == 0 )
            {
                check = false ;
            }
        }
        if(check)
                std::cout << i << "\n";
    }

    return 0 ;
}
