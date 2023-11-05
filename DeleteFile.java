import java.io.*;



class DeleteFile
{
    public static void main(String Args[]) 
    {
        try
        {
            File fobj = new File("PPA.txt");
            fobj.delete();
            
        }
        catch(Exception obj)
        {
             
        }
       

    }
}