/* To read a data type, use the following syntax:

scanf("`format_specifier`", &val)

To print a data type, use the following syntax:

printf("`format_specifier`", val)*/

#include<iostream>
using namespace std;

int main(){
    int a = 3;
    long b =12345678912345;
    char c = 'a';
    float d = 334.230;
    double e = 14049.304930000;

    printf("%d\n%ld\n%c\n%f\n%lf",a,b,c,d,e);
    return 0;
}