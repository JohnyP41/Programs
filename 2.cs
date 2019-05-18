using System;

public class Test
{
	public static void Main()
	{
		int a = Convert.ToInt32(Console.ReadLine());
		int b = Convert.ToInt32(Console.ReadLine());
		string c = Console.ReadLine();
		switch (c)
    	{
          case "+":
              Console.WriteLine(a+b);
              break;
          case "-":
              Console.WriteLine(a-b);
              break;
          case "*":
              Console.WriteLine(a*b);
              break;
          case "/":
        	  if(b==0)
        	  {
        	  	Console.WriteLine("Nie mozna dzielic przez 0");
        	  	break;
        	  }
              Console.WriteLine(a/b);
              break;
          default:
              Console.WriteLine("Nie poprawny znak");
              break;
    	}
	}
}