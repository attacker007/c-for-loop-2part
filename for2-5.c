#include<stdio.h>
int main(){
    int a,b,c,sum=0;
    scanf("%d",&b);
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&c);
        sum+=c;
        c=b-sum;
    }
    printf("remaining battery:%d",c);
    return 0;
}
