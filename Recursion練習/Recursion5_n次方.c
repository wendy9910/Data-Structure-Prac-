#include <stdio.h>
int main(){
    int a,b;
    printf("輸入兩個值:");
    scanf("%d %d",&a,&b);
    printf("得到:%d",Myst(a,b));

}
int Exp(int x,int n){
    if(n==0) return 1;
    else return Exp(x,n-1)*x;
}
int Myst(int x,int n){
    int f;
    if(n%2 == 0)f=1;
    else f=x;
    if(n<2) return f;
    return f*Myst( x*x, n/2);
}
