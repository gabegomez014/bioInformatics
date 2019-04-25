def ToRna(dna):
	
	return dna.replace("T", "U")

def main():
	dna = input("Enter a string of nucleobases: ")
	rna = ToRna(dna)
	print("The results are\n{}".format(rna)

if __name__ == '__main__':
	main()