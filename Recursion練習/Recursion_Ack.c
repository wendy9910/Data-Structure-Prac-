#include <stdio.h>
int main(){
    int a,b;
    printf("��J��ӭ�:");
    scanf("%d %d",&a,&b);
    printf("�o��:%d",Ack(a,b));

}
int Ack(int m,int n){
    if(m==0) return n+1;
    else if(n==0) return Ack(m-1,1);
    else return Ack(m-1,Ack(m,n-1));
}
