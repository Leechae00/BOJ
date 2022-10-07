import java.util.Scanner;

public class Bronze4_2480 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc =new Scanner(System.in);
		int a,b,c;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		if (a!=b && b!=c && a!=c) {
			int max;
			if(a>b) { //a>b
				if(c>a) { // c>a>b
					max = c;
				}
				else { //a>b?c
					max =a;
				}
			}
			else { // b>a
				if (c>b) { //c>b>a
					max = c;
				}
				else { // b>a?c
					max =b;
				}
			}
			System.out.println(max*100);
		}
		
		else {
			if (a==b&&a==c) { //수가 모두 같을 경우
				System.out.println(10000+(a*1000)); //성공
			}
			else { //숫자 2개가 같을 경우
				if(a==b||a==c) { //a가 다른수가 같은 경우
					System.out.println(1000+(a*100));
				}
				else { //b와 c가 같은 경우
					System.out.println(1000+(b*100));
				}
			}
		}
	}
}
