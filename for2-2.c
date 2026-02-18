#include<stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        sum=sum+b;
        
    }
    if(sum<10000){
            printf("approved");
        }
        else{
            printf("limit exceted");
        }
    return 0;
}
