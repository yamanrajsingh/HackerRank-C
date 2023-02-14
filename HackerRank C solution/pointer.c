#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
      int s;
      s=*a+*b;
      printf("%d\n",s);
      int d;
      d=*a-*b;
      if (d<0) {
     printf("%d\n",-1*d);
      }
      else {
       printf("%d\n",d);
      }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
   

    return 0;
}
