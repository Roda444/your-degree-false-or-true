#include <stdio.h>
#include <cs50.h>
    int main(void){
    printf("هل انت ناجح ام راسب؟؟\n");
    int D = get_int ("Degree : ");
    if( D >= 50){
        printf("اذا انت ناجح ");
    }
    else if ( D < 50){
        printf("اذا انت راسب");
    }
}
