import java.util.Scanner;
public class q2
{
    public static void main(String[]args)
    {
        Scanner input=new Scanner(System.in);

        int[]a=new int[5];
        for(int i=0;i<5;i++)
        {
            a[i]=input.nextInt();
        }
        int even=0,odd=0;
        for(int i=0;i<5;i++)
        {
            if(a[i]%2==0)
            even+=a[i];
            else
            odd+=a[i];
        }
        if(even==odd)
            System.out.println("Both sums are equal");
        else if(even > odd)
            System.out.println("Even sum is greater");
        else
            System.out.println("Odd sum is greater");

            input.close();

    }
    
}
