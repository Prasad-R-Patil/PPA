
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

        void gun()
        {
            System.out.println("Inside Gun");
        }

}
  
class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside Hello Constructor");
    }
    public void fun()
    {
         System.out.println("Inside Fun of Hello");
    }

}

public class AbstractDemo1
{
    public static void main(String Arg[])
    {
       Hello hobj = new Hello();
       hobj.fun();
       hobj.gun();
    }
    
}
