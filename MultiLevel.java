

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

class DerivedX extends Derived
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

class MultiLevel 
{
    public static void main(String Args[])
    {
        DerivedX dobj = new DerivedX();

        dobj.Fun();
        dobj.Gun();
        dobj.Sun();

    }
}
