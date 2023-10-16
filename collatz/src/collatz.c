#include <stdio.h>

int collatz(int num);

int main()
{
    int st,fn;
    int max,path;

    scanf("%d %d",&st,&fn);

    if(st<=0 || fn<=0 || fn>100000000)
        return 0;
    else
    {
        max=collatz(st);

        for(int i=st+1; i<=fn; i++)
        {
            path=collatz(i);

            if(max<path)
	         max=path;
        }
    }

    printf("%d\n",max);
}


int collatz(int num)
{
    int count=1;

    if(num == 1)
        count=1;

    while(num > 1)
    {
        if(num % 2 == 0)
            num = num / 2;
        else
            num = (num * 3) + 1;

        if(num == 1)
            count++;
        else
            count++;
    }

    return count;
}
