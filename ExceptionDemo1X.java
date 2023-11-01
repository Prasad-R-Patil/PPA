 import java.util.*;

 
 
 public class ExceptionDemo1X
 {
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        
        try
        {
            System.out.println("Inside Try Block");
            iAns=iNo1/iNo2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside Catch Block " +obj);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Aray index out of bound excetion " +obj);
        }
        catch(Exception obj)
        {
            System.out.println("Inside Generic Catch Block " +obj);
        }
         finally
        {
            System.out.println("Inside Finally Block");
            
        }

        System.out.println("Division is  : " +iAns);




        sobj.close();

    }
 }