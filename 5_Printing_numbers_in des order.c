#include<stdio.h>
int main()
{   for(int i=1;i<=5;i++,printf("\n"))
    {
     for(int j=5;j>=1;j--){
       printf("%d ",j);
     }
    }
    return 0;
}
/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
