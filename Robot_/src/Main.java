

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		 String[] args2 = new String[args.length + 1];
		System.arraycopy(args, 0, args2, 0, args.length);
		args2[args.length] = args;
		
	} 

}
