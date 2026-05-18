public class myClass{
    int a=50;
    static int b=100;
public void method1()
{
    int n=90;
    System.out.println(n);
    System.out.println(a);
    System.out.println(b);
}
public void method2()
{   
    //System.out.println(n);
    System.out.println(a);
    System.out.println(b);
}
public static void main(String[]args)
{
   myClass ob = new myClass();
   ob.method1();
   ob.method2();
}
}