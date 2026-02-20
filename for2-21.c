#include <stdio.h>

int main() {
    int cp,a,b,d=0;
    scanf("%d",&cp);
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    scanf("%d",&b);
    cp-=b;
    if(cp<0)
    d++;
    }
    printf("reamaining capacity:%d\n",cp);
    printf("overflow days:%d\n",d);
    return 0;
}
