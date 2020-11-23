using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace EvenSum
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Even Number = ");
            int Even = int.Parse(Console.ReadLine());
            List<int> PrimeNumbers = new List<int>();

            bool Prime = false;
            for (int i = 2; i < Even; i++)
            {
                for (int k = 2; k < i; k++)
                {
                    if (i % k == 0)
                    {
                        Prime = true;
                        break;
                    }
                }
                if (!Prime)
                {
                    PrimeNumbers.Add(i);
                }
                Prime = false;
            }
            var PrimeNumbers1 = PrimeNumbers;

            foreach (var Number1 in PrimeNumbers)
            {
                foreach (var Number2 in PrimeNumbers1)
                {
                    if (Number1+Number2==Even)
                    {
                        Console.WriteLine("{0}+{1}={2}",Number1,Number2,Number1+Number2);
                    }
                }
            }
            Console.ReadKey();
        }
    }
}
