
class Base
{
    public void Fun()       //1000
    {
        System.out.println("Inside Base Fun");
    }
     public void Gun()      //2000
    {
        System.out.println("Inside Base Gun");
    }
    public void Sun()       //3000
    {
        System.out.println("Inside Base Sun");
    }
    public void Run()       //4000
    {
        System.out.println("Inside Base Run");
    }

}
class Derived extends Base
{
    public void Fun()       //5000
    {
        System.out.println("Inside Derived Fun");
    }
    public void Sun()       //6000
    {
        System.out.println("Inside Derived Sun");
    }
    public void Run(int A)       //7000
    {
        System.out.println("Inside Derived Run");
    }
    public void Mun()       //8000
    {
        System.out.println("Inside Derived Mun");
    }

}

public class Overriding 
{
    public static void main(String Args [])
    {
        Base bobj = new Derived();  //Upcasting

        //Base bobj = new Base();         //No-Upcasting
        //Derived dobj = new Derived();   //No-Upcasting
        //Derived dobj = new Base();      //Down-Upcasting

        bobj.Fun();  //Derived Fun
        bobj.Gun();  //Base Gun
        bobj.Sun();   //Derived Sun
        bobj.Run();   //Base Run
        //bobj.Run(11);
        //bobj.Mun();
       
    }
    
}
