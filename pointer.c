#include <stdio.h>
 
 main()
 {
       int a = 20;
       int b = 30;
       int c = 40;
        int *q,*u,*x;
        int **r,**v,**y;
        int ***s,***w,***z;
        int ****m,****n;
        
      q=&a;
      r=&q;
      s=&r;
      m=&s;
      
      printf("%d\n", ****m);
      
       q=&b;
      u=&q;
      v=&r;
      m=&s;
      
      printf("%d\n", ****m);
      
       q=&c;
      x=&q;
      y=&r;
      z=&s;
      
      printf("%d", ****m);
      
       q=&c;
      x=&q;
      s=&r;
      m=&s;
      
      printf("%d", ****m);
      
      

 }
