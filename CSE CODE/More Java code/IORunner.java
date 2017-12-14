package io;

import java.util.ArrayList;

public class IORunner {

	
	public static void main(String[] args) {
		// edit as necessary
		//testPeople();
		//testPhoneNumbers();
		testPerson();
		//testPeople();
		
	}
	

	
	
	public static void testPeople() {
		// fill in as necessary		
		
		People a = new People();
		System.out.println(a.readFile());
	}
	
	
	public static void testPhoneNumbers(){
		PhoneNums n = new PhoneNums();
		n.readPhoneNumbers();
	}
	
	
	public static void testPerson(){
		//Person p = new Person("John", 18, "La");
		Person p = new Person();
		//p.toString();
		
	}
	
	

	
	
}

