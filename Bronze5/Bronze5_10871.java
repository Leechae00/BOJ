import java.util.Scanner;
public class Bronze5_10871 {

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int N = sc.nextInt();
		int X = sc.nextInt();
		for (int i = 0; i < N; i++) {
			int A = sc.nextInt();
			if(A < X) System.out.print(A+" ");
		}
	}
}