
abstract class Demo
{
    public int A;
    public int B;

        public Demo()
        {
            System.out.println("Inside Constructor");
            this.A=0;
            this.B=0;
        }
        abstract void fun();
        // virtual void fun()=0;   //in c++

        void Gun()
        {
            System.out.println("Inside Gun");
        }

}

public class AbstractDemo
{
    public static void main(String Arg[])
    {
       // Demo obj = new Demo();    //Error
    }
    
}
