public class Bertrand
{
	void compute()
	{
		int n,i,c,d,p;
		n=2;

		while(n<=1000)
		{
			p=0;
			for(i=n;i<=2*n;i++)
			{
				c=0;
				for(d=2;d<=i-1;d++)
					if(i%d==0)c++;
				if(c==0)p++;

			}
			System.out.println("between"+n+"and"+2*n+"="+p);
			p=0;
			n=n+1;
		}

	}

	public static void main(String []args)
	{
		Bertrand obj= new Bertrand();
		obj.compute();
	}
}