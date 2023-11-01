

class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base Constructor");
    }
    public void Fun()
    {
        System.out.println("Base Fun");
    }

}
class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructor");
    }
    public void Gun()
    {
        System.out.println("Derived Gun");
    }

}

class DerivedX extends Base
{
    public int P,Q;
    public DerivedX()
    {
        System.out.println("DerivedX Constructor");
    }
    public void Sun()
    {
        System.out.println("Derived Sun");
    }
}

class Heirarracal
{
    public static void main(String Args[])
    {
         Derived dobj1 = new Derived();
         DerivedX dobj2 = new DerivedX();

        
    }
}
