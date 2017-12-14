package io;

import java.util.*;
import java.io.*;

public class PhoneNums {
	
	public ArrayList<String> readPhoneNumbers() {

		String filename = "data/phone.txt"; 
		ArrayList<String> output = new ArrayList<String>();

		try {
			Scanner input = new Scanner ( new FileReader(filename) );

			while (input.hasNextLine()) {
				/*	
				 *	Fill-in 
				 */
				input.useDelimiter("[-+]");
				
				String country = (input.next());
				country = country.replace("-", "");
				String area = (input.next());
				
				String number = (input.nextLine());
				number = number.replace("-", "");
				//String number2 = (input.next());
				//String number = number1.concat(number2);
				
				System.out.println("Country Code: " + country);
				System.out.println("Area Code: " + area);
				System.out.println("Number: " + number);
				System.out.println();
				
				//System.out.println(input.nextLine()); // Comment this line out 
			} 
			input.close();
		} catch ( NoSuchElementException e){
			System.out.println(e);

		} catch (FileNotFoundException e) {
			System.out.println(e);
		}
		
		return output;
		
	}
	
	

}
