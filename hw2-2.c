#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
      int i,j,k;
      int x, nu;
      int t0, t1;
      int a[20];
      char tmp[100];
  
      nu=argc;
      
      while(1)
/*c10a:*/ {  switch (nu)
/*c20a:*/      { case 1 : while(1)
                      { printf("請輸入數字 1 到 15 之間,不可用abc : ");
                        scanf(" %d", &x);
                        gets(tmp);
                        if((x>=1)&&(x<=15))
                           break;
                      }
                      break;
             case 2 : x=atoi(argv[1]);
                      while(1)
                      {  if((x>=1)&&(x<=15))
                           break; 
                         printf("請輸入數字 1 到 15 之間 : ");
                         scanf(" %d", &x);
                         gets(tmp);                        
                      }
             break;
/*c20b:*/      }
        break;
/*c10b:*/ }

        for(i=1;i<=x;i++)
        {  a[0]=0;
           a[1]=1;
           a[i+1]=0;
           t0=a[0];
           t1=a[1];
           for(j=1;j<=i;j++)
           { a[j]=t0+t1;      
             t0=t1;
             t1=a[j+1];
             printf("%5d",a[j]);           
           }
           printf("\n");        
        }

      system("PAUSE");
      return 0;
}

