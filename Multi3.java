
class Demo extends Thread
{
    public void run()    // Running state
    {
        System.out.println("Current thread is : " +Thread.currentThread().getName());

    }

}

public class Multi3 
{
    public static void main(String[] args) 
    {
        System.out.println("Current thread is : " +Thread.currentThread().getName());

        Demo obj1 = new Demo();   // New state 
         Demo obj2 = new Demo();   // New state 

        obj1.start();   // Runnable state
        obj2.start();   // Runnable state

        // System.out.println("Thread goes to dead state");

        
    }
    
}
