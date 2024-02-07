word = list(input("Starting word: "))

crossed_out = []
remaining = []

for i in range(len(word)) :
	if i % 2 == 0 :
		crossed_out.append(word[i])
	
	else :
		remaining.append(word[i])
		

print("Crossed out letters: ", end='')
print(*crossed_out)
print("Remaining letters: ", end='')
print(*remaining)