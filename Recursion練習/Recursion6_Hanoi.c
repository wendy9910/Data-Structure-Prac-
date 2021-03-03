#include <stdio.h>
#include <string.h>
int main(){
    int n=3;
    printf("How many disks?\n");
    scanf("%d",&n);

    Hanoi(n,'A','B','C');

}
void Hanoi(int n,char A,char B,char C){

    if(n==1)printf("move disk %d from %c to %c\n", n,A,C);
    else{
        Hanoi(n-1,A,C,B);
        printf("move disk %d from %c to %c\n ",n,A,C);
        Hanoi(n-1,B,A,C);
    }
}
