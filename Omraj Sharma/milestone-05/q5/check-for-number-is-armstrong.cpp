#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a number : ";
    int num ;
    std::cin >> num ;
    int org = num ;

    int check = 0 ;
    while(num > 0)
    {
        int temp = num%10 ;
        num /= 10 ;

        check += pow(temp,3);
    }

    if( check == org )
        std::cout << "Entered number is an Armstrong Number !! " << "\n";
    else
        std::cout << "Entered number is not an Armstrong Number !! " << "\n";

    return 0 ;
}
