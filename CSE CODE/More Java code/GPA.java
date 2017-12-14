import java.util.Scanner;
import java.util.ArrayList;
public class GPA {
	public double GPA;
	private String units = "How many units is this class?";
	private String gpa = "What was your grade value for the class?";
	private ArrayList <Double> grades = new ArrayList();
	private static ArrayList <String> gradesLetter = new ArrayList<String>();
	private ArrayList <Double> gradesUnits = new ArrayList();

	public void run(){
		int x = 1;
		Scanner input = new Scanner(System.in);
		System.out.print("Do you want to see your transcript? " + "(y or n): ");
		String answer = input.next();

		if(answer.equals("y")){
			System.out.print("How many classes are you taking? ");
			int max = input.nextInt();
			System.out.print("Do you want to see your letter grades? " + "(y or n): ");
			String answer2 = input.next();
			if(answer2.equals("y")){
				for (int i = 0; i < max*2; i++)
					if (i%2==0){
						System.out.println(units + x + "?");
						double units = input.nextDouble();
						gradesUnits.add(units);
					}else{
						System.out.println(gpa + x + "?");
						double value = input.nextDouble();
						grades.add(value);
						x++;
					}
				gradesletter(grades);
				System.out.println("Units" + "      " + "Grades");
				for(int i = 0; i < gradesUnits.size(); i++){
					System.out.println(gradesUnits.get(i) + "      " + gradesLetter.get(i));
				}
				Calculator(grades, gradesUnits);
				System.out.println("Your GPA is " + GPA);
			}else{
				for(int i = 0; i < max*2; i++)
					if(i%2==0){
						System.out.println(units + x + "?");
						double units = input.nextDouble();
						gradesUnits.add(units);
					}else{
						System.out.println(gpa + x + "?");
						double value = input.nextDouble();
						grades.add(value);
						x++;
					}
				System.out.println("Units" + "      " + "Grades");
				for(int i = 0; i<gradesUnits.size();i++){
					System.out.println(gradesUnits.get(i) + "      " + grades.get(i));
				}
				Calculator(grades, gradesUnits);
				System.out.println("Your GPA is " + GPA);
			}
		}
			double credit = Units(gradesUnits);
			if(credit<12){
				System.out.println("You need to input more than 12 units. You have " );
			}
			else{
				System.out.println("Goodbye!");
				System.exit(3);
			}
	}
			public double Calculator(ArrayList<Double> GPANUM, ArrayList<Double> GPAUNITS){
				double credit = 0;
				double gpa = 1;
				for(int i = 0; i<GPAUNITS.size(); i++){
					credit += GPAUNITS.get(i);
					gpa += GPANUM.get(i)*GPAUNITS.get(i);
				}
				GPA = gpa/credit;
				return GPA;
			}
			private double Units(ArrayList<Double> GPAUNITS){
				double credit = 0;
				for (int i = 0; i< GPAUNITS.size();i++){
					credit += GPAUNITS.get(i);
				}
				return credit;
			}
			public static void gradesletter(ArrayList<Double> GPANUM){
				for (int i = 0; i < GPANUM.size(); i++){
					if (0.0 <= GPANUM.get(i) && GPANUM.get(i)<1.0){
						gradesLetter.add("F");
					}else{
						if(1.0 <= GPANUM.get(i) && GPANUM.get(i) < 1.3){
							gradesLetter.add("D");
						}
					}{
						if(1.3 <= GPANUM.get(i) && GPANUM.get(i) < 1.7){
							gradesLetter.add("D+");
						}
					}{
						if(1.7 <= GPANUM.get(i) && GPANUM.get(i) < 2.0){
							gradesLetter.add("C-");
						}
					}{
						if(2.0 <= GPANUM.get(i) && GPANUM.get(i) < 2.3){
							gradesLetter.add("C");
						}
					}{
						if(2.3 < GPANUM.get(i) && GPANUM.get(i) < 2.7){
							gradesLetter.add("C+");
						}
					}{
						if(2.7 < GPANUM.get(i) && GPANUM.get(i) < 3.0){
							gradesLetter.add("B-");
						}
					}{
						if(3.0 < GPANUM.get(i) && GPANUM.get(i) < 3.3){
							gradesLetter.add("B");
						}
					}{
						if(3.3 < GPANUM.get(i) && GPANUM.get(i) < 3.7){
							gradesLetter.add("B+");
						}
					}{
						if(3.7 < GPANUM.get(i) && GPANUM.get(i) < 3.7){
							gradesLetter.add("A-");
						}
					}{
						if(3.8 < GPANUM.get(i) && GPANUM.get(i) < 3.9){
							gradesLetter.add("A");
						}
					}{
						if(3.9 < GPANUM.get(i) && GPANUM.get(i) < 4.0){
							gradesLetter.add("A+");
						}
					}
				}
				
	}


}


