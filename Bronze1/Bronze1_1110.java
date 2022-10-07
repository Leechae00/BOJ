
import java.util.Scanner;

public class Bronze1_1110 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner IN=new Scanner(System.in);
		int N =IN.nextInt();
		IN.close();
		
		int sum = N;
		int count = 0;
		
		while (true){
			N =((N%10)*10) + (((N/10)+ (N%10))%10);
			count++	;
			if (sum ==N){
				break;
			}
		}
		System.out.println(count);
	}

}
