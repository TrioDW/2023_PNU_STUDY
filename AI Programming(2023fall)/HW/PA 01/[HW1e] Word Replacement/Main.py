sentence = input("Enter a sentence: ").split()
word1 = input("Enter word to replace: ")
word2 = input("Enter replacement word: ")

for i in range(len(sentence)) :
	if (sentence[i] == word1) :
		sentence[i] = word2

print(*sentence)