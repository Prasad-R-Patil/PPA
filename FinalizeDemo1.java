
class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;
    
    Employee(String str, int amount, int A, String Addr)
    {
        this.Name=str;
        this.Salary=amount;
        this.Age=A;
        this.Address=Addr;
    }
    protected void finalize()
    {
        System.out.println("Inside Finalize method...");
    }
    void Display()
    {
        System.out.println("Employee name : "+this.Name);
        System.out.println("Employee salaray : "+this.Salary);
        System.out.println("Employee Age : "+this.Age);
        System.out.println("Employee Address : "+this.Address);
    }
}

public class FinalizeDemo1 
{
    public static void main (String Args[])
    {
        Employee eobj = new Employee("Amit",78000,28,"Karve Road Pune");
        eobj.Display();
        eobj = null;

        System.gc();

    }
    
}
