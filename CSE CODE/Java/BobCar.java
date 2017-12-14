import java.util.Scanner;
public class BobCar {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		String plan = "none"; // Variable will hold the type of plan they choose.


		int choice ; //user's plan choice will be registered in choice variable
		  System.out.println("Hello, Welcome to Bob's Rent a Car. "); 
		  System.out.println("To get started please choose one of the following car plans.");
		  System.out.println("Select 1. for Economy Plan for $25 per day ");
		  System.out.println("Select 2. for Compact plan for $55 per day");
		  System.out.println("Select 3. for Standard plan for $100 per day");
		  System.out.print("Enter plan number here : " );
		   choice = input.nextInt();
		if(choice == 1){
			choice = 25;
			plan = ("Economic plan @ $25 per day: $");
	   }else if (choice == 2 ){
			choice = 55;
			plan =" Compact Plan @ $55 per day: $";
	  }else if (choice == 3){
			choice = 100;
			plan = "Standard Plan @ $100 per day: $";
	  }else {
			System.out.println("Please choose a number 1 - 3 ");
			    return; }


	   int days; //amount of days rented will be assigned to days variable
		System.out.println("How much days do you want to rent this car? ");
		System.out.print("Enter days here: ");
		 days = input.nextInt();
		 
	   int base = days * choice ; // variable will store the base prince

		 String club; // answer stored in club
		   System.out.println("Are you a current member?");
		 club = input.next();

	   String plat ; // platinum variable 
	   int disc = 0; //discount variable
	   double exe = 0 ; // variable which will add 20% of base price.

	   if(club.equalsIgnoreCase( "Yes") ){
		 System.out.println("Thank you for being a member.");
		 System.out.println("Would you like the Platinum Executive Package? :");
		   plat = input.next(); 
			if(plat.equalsIgnoreCase("yes")){
			  System.out.println("You will be charged 20% more");
			    disc = (days /5) * choice; 
				exe = (double)(base * .20) ;
	  }else
		 System.out.println("you will not be charged 20%");
		}
      else if (club.equalsIgnoreCase("no") )
		 System.out.println("You are not a club member."); 
	  else 
		 System.out.println("Please enter a Yes or No answer. Thank you."); 


        System.out.println("Base: " +  days + " days for a " + plan  + base);
		System.out.println("Club Member Discount:                            -$" + disc); 
		System.out.println("Platinum Executive Package:                      +$" + (int) (exe));
		System.out.println("\nTotal estimate for rental:                     $" + (int)((base + exe) - disc));
	}

	
}





