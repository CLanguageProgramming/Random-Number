#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand((unsigned)time(NULL));
    float r;
    for(int i=0;i<5;i++)
    {
        r=(float)rand()/RAND_MAX*20;
        printf("%f\n", r);
    }
  return 0;
}
