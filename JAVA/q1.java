import java.util.Scanner;
public class q1 
{
    public static void main(String[]args)
    {
        Scanner input=new Scanner(System.in);
        int value = input.nextInt();
        int temp = input.nextInt();

        if(value>= 10 && temp >=100)
            System.out.println("It's hot out!");
        else if(value < 5 || temp <= 32)
            System.out.println("I'm in a bad mood");
        else
            System.out.println("Score is 5 or more");   
            
            input.close();

    }  
}
