cnt = int(input("How many numbers do you want to enter? "))

number = []
tmp = 0
for i in range(cnt) :
	tmp = int(input("Enter a number: "))
	number.append(tmp)

number.sort()

median = 0
if cnt % 2 == 1 :
	median = number[cnt // 2]
else : 
	median = (number[cnt // 2 - 1] + number[cnt // 2]) / 2

print(f"Median: {median:.1f}")