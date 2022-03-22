class printer
{public void pr()
	{for(int i=1;i<=9;++i)
		{for(int j=1;j<=i;++j)
			System.out.print(i);
		System.out.println();}
}
		
}
class pattern
{
public static void main(String args[])
{printer p=new printer();
p.pr();}
}
