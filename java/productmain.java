class product
{
  String pcode;String pname;int price;
	product(String pcode,String pname,int price)
		{
			this.pcode=pcode;
			this.pname=pname;
			this.price=price;
		}
}

class productmain
{
	public static void main(String args[])
	{ 
		product p1 = new product("1", "Product 1", 600);
		product p2 = new product("2","Product 2", 700);
		product p3=  new product("3","Product 3",650);	
		if(p1.price<=p2.price&&p1.price<=p3.price)
			System.out.println("The lowest cost is of "+p1.pname);
				
		else if(p2.price<=p1.price&&p2.price<=p3.price)
			System.out.println("The lowest is "+p2.pname);
	
		else if(p3.price<=p1.price&&p3.price<=p1.price)
			System.out.println("The lowest is "+p3.pname);
				
	}
}
