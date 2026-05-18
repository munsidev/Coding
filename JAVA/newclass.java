public class newclass {
    int max=100;
    static int var=50;
    public static void main(String[]args){
        int a=10,b=20; 
        System.out.println(a+b);
        newclass obj=new newclass();
        System.out.println(obj.max);
        System.out.println(var);
        sum();

    }
    public static void sum()
    {
        newclass obj=new newclass();
        System.out.println(obj.max);
        System.out.println(var);
        //System.out.println(a+b);
    }
    
}
