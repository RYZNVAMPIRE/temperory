rectangle_area=lambda length,breadth:length*breadth
square_area=lambda side:side*side
triangle_area=lambda base,height:0.5*base*height
length=int(input("enter the length of rectangle"))
breadth=int(input("enter the breadth of rectangle"))
side=int(input("enter the side of square"))
base=int(input("enter the base of triangle"))
height=int(input("enter the height of triangle"))
print(rectangle_area(length,breadth))
print(square_area(side))
print(triangle_area(base,height))