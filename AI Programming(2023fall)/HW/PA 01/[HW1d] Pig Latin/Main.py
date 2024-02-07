word = list(input("Enter word to translate: "))

cnt = 0

while (word[0] not in ["a", "e", "i", "o", "u"]) :
	cnt += 1
	temp = word.pop(0)
	word.append(temp)
	
	
if cnt == 0 :
	word.append("way")
else :
	word.append("ay")

print("The word in Pig Latin is " + ''.join(word) + ".")