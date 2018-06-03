
def baseCounter(dna):
	a = 0
	g = 0
	c = 0
	t = 0
	length = len(dna)
	i = 0

	while (i < length):
		if (dna[i] == "A"):
			a += 1

		elif (dna[i] == "C"):
			c += 1

		elif (dna[i] == "G"):
			g += 1

		elif (dna[i] == "T"):
			t += 1

		else:
			print("We seem to have found a non-nucleobase character at {}. The character here is {}. Please fix this.".format(i, dna[i]))

		i += 1

	counter = [a,c,g,t]
	return counter

def main():
	dna = input("Enter a string of nucleobases: ")
	count = baseCounter(dna)
	print("The results are\n{} {} {} {}".format(count[0], count[1], count[2], count[3]))

if __name__ == '__main__':
	main()

