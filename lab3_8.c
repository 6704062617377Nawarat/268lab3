#include <stdio.h>

int main(){

    int H, M, S, added_mins ;

    printf("Enter time (h:m:s)");
    scanf("%d:%d:%d", &H, &M, &S);
    printf("hour:%d\nminute:%d\nsecond:%d\n", H, M, S);

    double total = ( H * 60 ) + M + ( S / 60.0 );
    printf( "Next minutes:" ) ;
    scanf( "%d", &added_mins );
    
    total = total + added_mins ;
    int day = ( total / 1440 ) ;
    int hour = ( (int)total % 1440 ) / 60 ;
    int minute = ( (int)total % 60 ) ;
    double second = ( total - (int)total) * 60  ;

    printf( "day:%d\nhour:%d\nminute:%d\nsecond:%.0lf\n",
             day, hour, minute, second );
    
    return 0;
}