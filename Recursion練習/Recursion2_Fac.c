#include <stdio.h>
int main(){
    int a;
    printf("第幾個費式數列:");
    scanf("%d",&a);
    printf("\n得到:%d",Fib(a));

}
int Fib(int n){
    if(n == 0)return 0;
    else if(n == 1)return 1;
    else return Fib(n-1)+Fib(n-2);
}
