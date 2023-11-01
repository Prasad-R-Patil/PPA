

class Demo
{
    public int A;
    public final int B;

    Demo()
    {
        A=11;
        B=21;
    }
    Demo(int i, int j)
    {
        A=i;
        B=j;
    }
}

public class Final1 
{
    public static void main(String Args[])
    {
        Demo dobj1 = new Demo();

        System.out.println("Value of A : ",+dobj1.A);
        System.out.println("Value of B : ",+dobj1.B);

        dobj1.A++;
       //dobj1.B++;

       Demo dobj2 = new Demo(51,101);
       System.out.println("Value of A : ",+dobj2.A);
        System.out.println("Value of B : ",+dobj2.B);

    }
    
}
