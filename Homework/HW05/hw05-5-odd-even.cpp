/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่
    
    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include <stdio.h>
 int main() {
    int Num1 ;
    printf( "Input :" ) ;
    scanf( "%d",&Num1 ) ;
    if ( Num1 %2 == 1){
        printf( "%d is an odd integer",Num1 ) ;
    }
    else if ( Num1 %2 == 0)
    {
        printf( "%d is an even integer",Num1 ) ;
    }
    return 0 ; 
}
