#include <stdio.h>

int main(void)
{
    long num,goukei;
    long loop;
    goukei = 0;
    scanf("%ld", &num);
if  (num>=0)
    {
    for (loop=1;loop<=num;loop++)
        
    if(loop%2==1)
        {
             ;
        }
    else
        { 
      goukei = goukei + loop;//
        }
    
    }
else
    {
     printf("NG");   
    };
if (num>=0)
    {
  printf("%ld", goukei);
    }
    return 0;
};
