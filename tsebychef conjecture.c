#include <stdio.h>

int main ()
{
	int x,n=1,d,c;
	int pi1,pi2;

	for(x=1;x>0;x++)
	{
		pi1=0,pi2=0;
		c=0,n=1;

		while(n<=x)
		{
			c==0;
			for(d=1;d<=n;d++)
				if(n%d==0)c++;
			if(c==2)
			{
				if(n%4==1)pi1++;
				if(n%4==3)pi2++;

			}
			n=n+1;
		}

		if(pi1>pi2)break;
	}

	printf("first such prime is %d",x);
	return 0;
}