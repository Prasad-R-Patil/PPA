import java.sql.*; 

class JDBC
{
        public static void main(String arg[]) throws Exception 
        {

                String URL = ("jdbc:mysql://localhost:3306/PPA");

                String Username = "root";
                String Password = "root";
                String Query= "select from Student";

                Connection cobj = DriverManager.getConnection (URL, Username, Password); 
                Statement sobj = cobj.createStatement();
                ResultSet robj = sobj.executeQuery (Query); 

        while(robj.next())
        {
            System.out.println("Roll_no"+robj.getInt("roll_no"));
            System.out.println("Name: "+robj.getString("name"));
            System.out.println("Address: "+robj.getString("address"));
            System.out.println("Marks "+robj.getInt("marks"));

        }
    }
}

