#include <stdio.h>
int main(){
    int a,b;
    printf("�G�����Y��:");
    scanf("%d %d",&a,&b);
    printf("%d",Bin(a,b));
}
int Bin(int n,int m){
    if(n==m || m==0)return 1;
    else return Bin(n-1,m)+Bin(n-1,m-1);
}
