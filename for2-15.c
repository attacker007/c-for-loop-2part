#include<stdio.h>
int main(){
    int a,b,volt,low,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
       scanf("%d",&volt);
       if(i==1)
       low=volt;
       if(volt<low)
       low=volt;
       if(volt<210)
       count++;
    }
    printf("minium voltage:%d\n",low);
    printf("low voltage event:%d\n",count);
       
    return 0;
}
