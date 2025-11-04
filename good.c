#include <stdio.h>
#include <stdlib.h>

int good(void){
   int x,y,bad = 0;
   if(1!=scanf("%d", &x))
        return !bad;
    while(1==scanf("%d", &y)){
        bad = bad||(y-x);
        x=y;
    }
    return !bad;
}


int main(void)
{
    good();
    

}
