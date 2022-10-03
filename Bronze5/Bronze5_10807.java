import java.util.Scanner;

public class Bronze5_10807 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int N =sc.nextInt();
		int[] number=new int[N];
		int cnt =0;
		
		for (int i=0;i<N;i++) {
			number[i] =sc.nextInt();
		}
		int V =sc.nextInt();
		
		for(int i=0;i<number.length;i++) {
			if(V==number[i]) {
				cnt++;
			}
		}
		System.out.println(cnt);
		

}
}