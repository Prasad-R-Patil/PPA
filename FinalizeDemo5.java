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
    
    void Display()
    {
        System.out.println("Employee name : "+this.Name);
        System.out.println("Employee salaray : "+this.Salary);
        System.out.println("Employee Age : "+this.Age);
        System.out.println("Employee Address : "+this.Address);
    }
    
        public String toString()
        {
            return Name+"--"+Salary+ "--"+Age+"--"+Address;
        }
    }

public class FinalizeDemo5
{
    public static void main (String Args[]) 
    {
            Employee eobj1 = new Employee("Amit",78000,28,"Karve Road Pune");

             System.out.println(eobj1); // it calls toString method internally
           
    }
    
}
