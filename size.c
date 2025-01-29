#include <stdio.h>
int main(){
    int i = 10;
    float f = 10.5;
    double f2 = 10.555555;
    char c ='c';

    int i_size = sizeof(i);
    int f_size = sizeof(f);
    int f2_size = sizeof(f2);
    int c_size = sizeof(c);
    

    printf("%d\n", i_size);
    printf("%d\n", f_size);
    printf("%d\n", f2_size);
    printf("%d", c_size);


}