
class Arithematic
{
    public int Addtion(int A, int B)
    {
        return A+B;
    }
    public int Addtion(int A,int B,int C)
    {
        return A+B+C;
    }
    public double Addtion(Double A,double B)
    {
        return A+B;
    }
     public void Addition(int A, double B)
    {
        System.out.println("Inside First Addition");
    }
    public void Addition(double A, int B)
    {
        System.out.println("Inside First Addition");
    }
}

public class OverloadingX 
{
    public static void main(String args[])
    {
        Arithematic aobj = new Arithematic();

        int iRet = 0;
        double dRet = 0.0;

        iRet = aobj.Addtion(10,11);
        System.out.println("Addition is ; "+iRet);

        iRet = aobj.Addtion(10,11,21);
        System.out.println("Addition is ; "+iRet);

        dRet = aobj.Addtion(10.8,11.7);
        System.out.println("Addition is ; "+dRet);

         aobj.Addition(11,90.99);
         aobj.Addition(90.99,11);

    }
    
}
