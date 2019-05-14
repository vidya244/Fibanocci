using system;

namespace fibonaci {

	class Program {	
		static void Main(string[] args) {
			int i;
			int count;
			int n1=0, n2=0, n3=0;

			count = Console.ReadLine();

			for (i=0;i< count;i++) {
				n3 = n1 + n2;
				Console.WriteLine(n3);
				n1 = n2;
				n2 = n3;
			}
		}
	}

}