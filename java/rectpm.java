import java.util.Scanner;


class pm
{public int l,b,p;
	public pm()
		{	
			l=10;b=20;	
			p=2*(l+b);
			System.out.println("the peremeter is: "+p);
		}
	public pm(int l,int b)
		{	p=2*(l+b);
			System.out.println("the peremeter is: "+p);
		}
}

public class rectpm
{
	public static void main(String args[])
		{	
			System.out.println("Default argument \n");
			pm r1=new pm();
			Scanner in=new Scanner(System.in);
			System.out.println("Enter the length");
			int l=in.nextInt();
			System.out.println("Enter the breadth");
			int b=in.nextInt();
			pm r2=new pm(l,b);
		}

}
