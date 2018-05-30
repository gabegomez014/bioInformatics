import java.util.Scanner;

public class nucleotideCounter {

	public static int[] baseCounter(String bases) {
		int[] count = {0,0,0,0};

		int a = 0;
		int c = 0;
		int g = 0;
		int t = 0;
		int length = bases.length();
		int i = 0;

		while (i < length) {
			if (bases.charAt(i) == 'A') {
				a++;
			}

			else if (bases.charAt(i) == 'C') {
				c++;
			}

			else if (bases.charAt(i) == 'G') {
				g++;
			}

			else if (bases.charAt(i) == 'T') {
				t++;
			}

			else {
				System.out.printf("It seems at index %d, there is a %c, which is not a nucleobase. Please fix this and try again.\n", i, bases.charAt(i));
				return null;
			}

			i++;
		}


		count[0] = a;
		count[1] = c;
		count[2] = g;
		count[3] = t;

		return count;
	}
	
	public static void main(String[] args) {
		Scanner reader = new Scanner(System.in);
		String dna;

		System.out.println("Enter a string of nucleobases:");
		dna = reader.nextLine();

		// System.out.println("DNA is " + dna);

		int[] counter = baseCounter(dna);
		System.out.printf("The count results are:\n%d %d %d %d\n", counter[0], counter[1], counter[2], counter[3]);
	}
}