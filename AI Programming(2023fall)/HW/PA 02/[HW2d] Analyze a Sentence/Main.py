import re

sentence = input("Enter a sentence: ")

sentence = re.sub(r"^\W+", "", sentence)
sentence = re.sub(r"\W+$", "", sentence)

words = sentence.split()

if len(words) == 1 :
	print(f"First word: {words[0]}")
	print(f"Last word: {words[0]}")

else : 
	print(f"First word: {words[0]}")
	print(f"Last word: {words[-1]}")