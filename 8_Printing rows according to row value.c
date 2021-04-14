#include<stdio.h>
int main()
{   for(int i=1;i<=5;i++,printf("\n")){
       for(int j=1;j<=i;j++)
       {
           printf("%d ",i);
       }
    }
    return 0;
}
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/
