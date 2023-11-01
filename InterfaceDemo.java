 
 interface Mathematic
 {
    public int Addition(int A, int B);
    public int Substration(int A, int B);
 }
 class Marvellous implements Mathematic
 {
    public int Addition(int A,int B)
    {
        return A+B;
    }
    public Substration(int A ,int B)
    {
        return A-B;
    }
 }
 
 public class InterfaceDemo
 {
    public static void main(String Args[])
    {
        Marvellous mobj = new Marvellous();
        int iRet=0;
        iRet = mobj.Addition(11,10);
        System.out.println("Addition is : " + iRet);
        iRet = mobj.Substration(11,10);
        System.out.println("Substraction is : " + iRet);

    }
 }