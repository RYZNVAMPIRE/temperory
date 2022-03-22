import java.util.Scanner;


class area
{
public void readinp()
{
Scanner in=new Scanner(System.in);
System.out.println("enter the length");
int l=in.nextInt();
System.out.println("enter the bredth");
int b=in.nextInt();
System.out.println("The area is "+this.area(l,b));
}

public int area(int l,int b)
	{
	return l*b;}
}

class areamain
{
	public static void main(String args[])
		{
			area r1=new area();
			r1.readinp();	

			area r2=new area();
			r2.readinp();	
		}
}
