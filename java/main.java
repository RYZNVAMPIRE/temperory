import java.lang.*;
import java.io.*;

class ar
{
int area,l,b;
Scanner s = new Scanner(System.in);
System.out.println("\nenter length");

l=s.nextInt();
System.out.println("\nenter breadth");
b=s.nextInt();
 public void area()
	{
		area=l*b;
		System.out.println(area);
	}
}

public class main
{
public static void main(String args[])
{
ar ob = new ar();
ob.area();

}

}
