
#include <stdio.h>

int main()
{
    int i,x,y,z;
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        z = x;
        x = y;
        y = z;
    }

    for (i=x+1;i<y;i++)
    {
        if ((i%5==2 || i%5==3))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
