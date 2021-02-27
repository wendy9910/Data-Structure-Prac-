#include <stdio.h>
int main(){
    int a;
    printf("第幾個費式數列:");
    scanf("%d",&a);
    printf("%d",Fib(a));

}
int Fib(int n){
    int A[n+1];
    A[0] = 0;
    A[1] = 1;

    if(n==0)return A[0];
    else if(n==1)return A[1];
    else{
        for(int i=2;i<=n;i++){
            A[i] = A[i-1]+A[i-2];
        }
        return A[n];
    }
}
//動態規劃Dynamic Programing
