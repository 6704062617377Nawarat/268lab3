#include <stdio.h>

int main() {

    int score ;
    scanf( "%d", &score ) ;

    if( score < 0 ){ printf( "Error\n") ; return 0 ; }
    else if( score > 100 ){ printf( "Error\n" ) ; return 0 ; }
    
    if( score >= 68 ) 
    {
        if( score >= 85 ) printf( "A\n" ) ;
        else if( score >= 75 ) printf( "B\n" ) ;
        else if( score >= 68 ) printf( "C. you need to gain more %d to get B.\n", 75 - score ) ; 
    }
    else { 
        if( score >= 55 ) printf( "D\n" ) ;
        else  printf( "F\n" ) ;
    }
    
    return 0;
}
