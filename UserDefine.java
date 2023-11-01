import java.util.*;

class AgeInvalid extends Exception 
{
    public AgeInvalid(String str) 
    {
        super(str);
    }
}

public class UserDefine 
{
    public static void main(String Args[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Age : ");

        int iAge = sobj.nextInt();

        try 
        {
            if (iAge < 18) 
            {
                AgeInvalid aobj = new AgeInvalid("Your Age is Below 18 ");
                throw aobj;
                
                //throw new AgeInvalid("Your Age is Below 18 ");
            } 
            else 
            {
                System.out.println("Login Succesful");
            }
        } 
        catch (AgeInvalid obj) 
        {
            System.out.println("Inside catch block");
            System.out.println(obj);
        }

    }

}
