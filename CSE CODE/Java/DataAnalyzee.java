import java.util.*;
public class DataAnalyzee {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int one=0 ;
		int counter = 0;
		int j =0;
		int i =0;
		int sum1 =0, a,b,c,d;
		int sum2 =0;
		int sum3 =0;
		int sum4 = 0;
		Scanner input = new Scanner (System.in);
		System.out.print("Please Enter the sample size" );
		int sam = input.nextInt(); //sam is how much samples per trail 
		int arr[][] = new int[sam][4]; // 2d array set to parameters
		for ( i = 1; i <5; i++){ {
			System.out.println("Enter numbers for trial "+ i);}
		for(counter =0; counter < sam; counter++) {	
			System.out.print("Enter sample #" + counter + " "  );
			one = input.nextInt();
			arr[counter][i-1] = one;
		}
		}
		System.out.println("\tSample #\tTrial 1\tTrial 2\tTrial 3\tTrial 4");

		for(int k = 0; k < sam; k++){
			System.out.println("\t" + k + "\t\t" + arr[k][j] + "\t" + arr[k][j+1] + "\t" + arr[k][j+2] + "\t" + arr[k][j+3]);
			sum1 +=  arr[k][j];
			sum2 +=  arr[k][j+1];
			sum3 +=  arr[k][j+2];
			sum4 += arr[k][j+3];
		} 
		System.out.println("--------------------------------------------------------------------------------------------");
		System.out.println("\t Averages\t" + (sum1/sam) + "\t" + (sum2/sam) + "\t" + (sum3/sam) + "\t" + (sum4/sam));

		a= (sum1/sam);  b =(sum2/sam); c =(sum3/sam );   d = (sum4/sam);

		int min = Integer.MAX_VALUE; 
		int max = Integer.MIN_VALUE;
		int arr1[] = {a,b,c,d};
		for (int k = 0; k < arr1.length; k++) {

			if(arr1[k] < min ){
				min = arr1[k];

			}
			if (arr1[k] > max ){
				max = arr1[k];

			}	
		}
		System.out.println("Min Average" + min);
		System.out.println("Max Average" +  max);
		if( max == min)
			System.out.println("Trials Match the Same !");
		else if ( min+2 == max) 
			System.out.print("The trials concur with each other!");
		else
			System.out.print("The trials do NOT concur!");    			 

	}
}















