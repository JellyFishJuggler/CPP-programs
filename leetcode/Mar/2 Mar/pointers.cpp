#include<iostream>
#include<cmath>
using namespace std;

void pointer(int *a, int *b){
   int temp = *a;
   *a = *a + *b;
   *b = temp - *b;
   *b = abs(*b);
} 


int main(){
    int a,b;
    int *pa = &a;
    int *pb = &b;
    cin >> a >> b;
    scanf("%d %d", &a, &b);
    pointer(pa,pb);
    printf("%d\n%d", a, b);
    
    return 0;
}