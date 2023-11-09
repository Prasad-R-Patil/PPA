import java.sql.'; // 1

class Database
{

public static void main(String arg[]) throws Exception t

String URL = "jdbc:mysql://localhost:3306/ppa49";

String Username = "root"; String Password = "root";

String Query= "select from student";

Connection cobj = DriverManager.getConnection (URL, Username, Password); 1/2

Statement sobj = cobj.createStatement();

ResultSet robj = sobj.executeQuery (Query); // 4

while(rob).next())

// 5

 System.out.println("RID: "+robj.getInt("rno")); System.out.println("Name: "+robj.getString("name")); System.out.println("City: "+rob).getString("city")); System.out.println("Marks "+robj.getInt("marks"));

// execute()

// executeQuery()

// executeUpdate()

Create table

select

delete / update / alter / insert