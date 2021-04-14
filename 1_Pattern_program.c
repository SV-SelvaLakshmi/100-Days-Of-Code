#include<stdio.h>
int main()
{   for(int i=1;i<=5;i++,printf("\n"))
    {
     for(int j=1;j<=5;j++){
       printf("%d ",i);
     }
    }
    return 0;
}
/*Output
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

Process returned 0 (0x0)   execution time : 3.231 s
Press any key to continue.*/
