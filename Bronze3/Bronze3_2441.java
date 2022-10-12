import java.util.Scanner;

public class Bronze3_2441 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		for (int j =0; j<N; j++) {
			for (int K = 0;K<j;K++) {
				System.out.print(" ");
			}
			for (int i = N; i>j; i--) {
				System.out.print("*");
			}
			System.out.println("");
		}
		
	}

}
