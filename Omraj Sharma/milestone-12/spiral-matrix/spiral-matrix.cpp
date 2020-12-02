#include <iostream>

int main()
{
    int arr[][5] {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}} ;

    int row = 5 , column = 5 ;

    int var1 = 0 ;              // right
    int var2 = column - 1 ;         // down
    int var3 = row - 1 ;            // left
    int var4 = 0 ;                  // up
    int i , j ;
    int temp1 = (row*2) -1 ;
    while (temp1 > 0)
    {
        // 1
        if(temp1>0)
        {
            for( j = var4 ; j <= var2 ; j++ )
            {
                std::cout << arr[var1][j] << ' ' ;
            }
            var1++ ;
            temp1-- ;
        }

        // 2
        if(temp1>0)
        {
            for( j = var1 ; j <= var3 ; j++ )
            {
                std::cout << arr[j][var2] << ' ' ;
            }
            var2-- ;
            temp1-- ;
        }

        //3
        if(temp1>0)
        {
            for( j = var2 ; j >= var4 ; j-- )
            {
                std::cout << arr[var3][j] << ' ' ;
            }
            var3-- ;
            temp1-- ;
        }

        //4
        if(temp1>0)
        {
            for( j = var3 ; j >= var1 ; j-- )
            {
                std::cout << arr[j][var4] << ' ' ;
            }
            var4++ ;
            temp1-- ;
        }
    }

    return 0 ;
}
