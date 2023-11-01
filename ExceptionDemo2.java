import java.util.Scanner;

public class ExceptionDemo2 
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {10,20,30,40,50};
    
        System.out.println("Enter the index from where you want to fatch the data ");
        int iIndex = sobj.nextInt();

        System.out.println("DATA is : " +Arr[iIndex]);
        


        sobj.close();

    }
    
}
