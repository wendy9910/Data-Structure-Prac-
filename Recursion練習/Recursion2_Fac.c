#include <stdio.h>
int main(){
    int a;
    printf("�ĴX�ӶO���ƦC:");
    scanf("%d",&a);
    printf("\n�o��:%d",Fib(a));

}
int Fib(int n){
    if(n == 0)return 0;
    else if(n == 1)return 1;
    else return Fib(n-1)+Fib(n-2);
}
