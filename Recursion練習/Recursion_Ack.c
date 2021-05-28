#include <stdio.h>
int count=0;
int main(){
    int a,b;
    printf("輸入兩個值:");
    scanf("%d %d",&a,&b);
    printf("得到:%d 呼叫次數:%d",Ack(a,b),count);
}
int Ack(int m,int n){
    if(m==0) return n+1;
    else if(n==0){
        return Ack(m-1,1);
        count++;
    }
    else{
        count+=2;
        return Ack(m-1,Ack(m,n-1));
    }
}
