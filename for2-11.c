#include<stdio.h>
int main(){
    int a,b,sum=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    scanf("%d",&b);
    sum+=b;
    if(100<b)
    count++;
    }
    printf("total patients:%d\n",sum);
    printf("overcrowed days:%d\n",count);
    return 0;
    

}
