#include<stdio.h>
int main(){
    int a,b,sum=0,rem,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    scanf("%d",&b);
    sum=sum+b;
    rem=sum/a;
    if(b<40)
    count++;
    }
    printf("average score:%d\n",rem);
    printf("failed subject:%d\n",count);
    return 0;
    

}
