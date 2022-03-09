class Time:
    def __init__(self,hour,minute,second):
        self.__hour=hour
        self.__minute=minute
        self.__second=second
    def __add__(self,other):
        t1=self.__hour*60*60 + self.__minute*60 + self.__second
        t2=other.__hour*60*60 + other.__minute*60 + other.__second
        t=t1+t2
        h=t//(60*60)
        t=t-h*60*60
        m=t//60
        s=t-m*60
        print(h, "hour" , m, "minute" , s,"second")
t1=Time(1,4,2)
t2=Time(1,2,3)
t1+t2
