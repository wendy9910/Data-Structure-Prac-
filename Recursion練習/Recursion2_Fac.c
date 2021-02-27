#include <stdio.h>
int main(){
    int a;
    printf("第幾個費式數列:");
    scanf("%d",&a);
    printf("\n得到:%d",Fib2(a));

}
int Fib(int n){//遞迴方法
    if(n == 0)return 0;
    else if(n == 1)return 1;
    else return Fib(n-1)+Fib(n-2);
}
int Fib2(int n){//Iterative方法
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
