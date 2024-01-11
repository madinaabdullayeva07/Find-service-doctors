using System;
public class fruit
{
    public int Sum(int a, int b)
    {
        return a + b;
    }
}


public class fruittest
{
    public void TestSum()
    {
        fruit fruit = new fruit ();
        int result = fruit.Sum(3, 4);
        if (result != 7)
        {
            ed")throw new Exception("Sum method is not working as expect;
        }
    }
}



