import java.util.Scanner;

class reader
{
	Scanner in=new Scanner(System.in);
	void printer()
	{	
		System.out.println("Enter the string ");
		String a=in.nextLine();
		System.out.println("enter the number");
		int l=in.nextInt();
		System.out.println("the string is "+a);
		System.out.println("The num is "+l);
		
	}

}
class read
{
public static void main(String args[])
	{reader r=new reader();
	r.printer();}
}
