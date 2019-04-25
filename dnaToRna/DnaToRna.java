import java.util.Scanner;

public class DnaToRna {

	public static String ToRna(String bases) {
		String rna;

		rna = bases.toUpperCase().replace('T', 'U');

		return rna;
	}
	
	public static void main(String[] args) {
		Scanner reader = new Scanner(System.in);
		String dna;

		System.out.println("Enter a string of nucleobases:");
		dna = reader.nextLine();

		System.out.printf("RNA Sequence:\n%s\n", ToRna(dna));
	}
}