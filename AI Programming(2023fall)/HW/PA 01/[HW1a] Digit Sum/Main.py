sum = 0

for i in range(1, 1000001) :
	temp = list(map(int, list(str(i))))
	
	for j in range(len(temp)):
		sum += temp[j]

print(f"The sum of the digits in the numbers from 1 to one million is {sum:,}.")