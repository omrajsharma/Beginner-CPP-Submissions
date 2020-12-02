#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int num ;
    std::cin >> num ;

    int arr[10] = {0};

    while(num > 0)
    {
        int temp = num % 10 ;
        num /= 10;

        switch(temp)
        {
            case 1 : arr[1]++;
                     break;
            case 2 : arr[2]++;
                     break;
            case 3 : arr[3]++;
                     break;
            case 4 : arr[4]++;
                     break;
            case 5 : arr[5]++;
                     break;
            case 6 : arr[6]++;
                     break;
            case 7 : arr[7]++;
                     break;
            case 8 : arr[8]++;
                     break;
            case 9 : arr[9]++;
                     break;
            case 0 : arr[0]++;
                     break;
            default : std::cout << "Invalid" << "\n";
        }
    }

    for( int i = 0 ; i < 10 ; i++ )
    {
        if( arr[i] != 0 )
            std::cout << "Number " << i << " appeared : " << arr[i] << "\n";
    }



    return 0 ;
}

//Bug fix needed ... zero is not counting!!
