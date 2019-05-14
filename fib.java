import java.io.*;

class fibonacci {
    public static void main(String args[]) {
    	// to print
        System.out.println("Enter Limit");
        // To read value
        int n = new Scanner(System.in).nextInt();
        int ans = fib(n);
        System.out.println(ans);
    }

    public int fib(n){
		if(n==0)
			return 1;
		if(n==1)
			return  1;
		else
			return fib(n-1)+fib(n-2);	
	}
}