
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

public class FinalizeDemo2
{
    public static void main (String Args[])
    {
        Employee eobj1 = new Employee("Amit",78000,28,"Karve Road Pune");
        eobj1.Display();
        Employee eobj2 =eobj1;
         Employee eobj3 = new Employee("Sagar",88000,38,"Akurdi Pune");
        System.out.println("Hash code of eobj1 is : "+eobj1.hashCode());
        System.out.println("Hash code of eobj2 is : "+eobj2.hashCode());
        System.out.println("Hash code of eobj3 is : "+eobj3.hashCode());
        eobj1 = null;

        System.gc();

    }
    
}
