#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,h,k,c,d=1,a=0,k1,k2;
   scanf("%d %d %d",&x,&y,&h);
        k=((h/4)*(x+y));
        k1 = k;
        k2 = k;
     while(d<=h){
        for(a = 0; a <= 2 * k; a++){
            if((a==k1)||(a==k2))
            printf("*");
            else
            {
                printf("-");
            }
            if(a==(2*k))
            {
              printf("\n");

            // printf("a:%d k1:%d k2:%d\n",a,k1,k2);
            }
        }

     if(d<=h){
        if(d<(h/4)+1){
            k1=k1-x;
            k2=k2+x;
     } if((d>=(h/4)+1)&&(d<(h/2)+1)){
     k1=k1-y;
     k2=k2+y;
     }if((d>=(h/2)+1)&&(d<(h-(h/4)))){
     k1=k1+y;
     k2=k2-y;
     }if(d>=(h-((h/4)))){
     k1=k1+x;
     k2=k2-x;
     }
     d+=1;
     a = 0;
     }
}

    return 0;
}
