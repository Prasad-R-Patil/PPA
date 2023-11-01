

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

class Single 
{
    public static void main(String Args[])
    {
        Derived dobj = new Derived();

        dobj.Fun();
        dobj.Gun();

    }
}
