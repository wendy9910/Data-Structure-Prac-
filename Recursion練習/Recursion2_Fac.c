#include <stdio.h>
int main(){
    int a;
    printf("�ĴX�ӶO���ƦC:");
    scanf("%d",&a);
    printf("\n�o��:%d",Fib2(a));

}
int Fib(int n){//���j��k
    if(n == 0)return 0;
    else if(n == 1)return 1;
    else return Fib(n-1)+Fib(n-2);
}
int Fib2(int n){//Iterative��k
    int a=0,b=1,c;
    if(n==0) return 0;
    else if(n==1) return 1;
    else{
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }

}
