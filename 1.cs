using System;

public class Test
{
	public static void Main()
	{
		Random rnd = new Random();
		int N = Convert.ToInt32(Console.ReadLine());
		for(int i=0;i<N;i++)
		{
			Console.WriteLine(rnd.Next(1, 100));
		}
	}
}