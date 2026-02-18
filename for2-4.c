#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        a=a-100;
    }
    printf("final salary:%d",a);
    
}
