coefficient = float(input("Enter coefficient of restitution: "))
height = int(input("Enter initial height in meters: "))

distance = 0
cnt = 0
while ((height * 100) >= 10) :
	cnt += 1
	distance += height
	height *= coefficient
	
	if (height * 100) < 10 :
		break
	distance += height

print(f"Number of bounces: {cnt}")
print(f"Meters traveled: {distance:.2f}")
