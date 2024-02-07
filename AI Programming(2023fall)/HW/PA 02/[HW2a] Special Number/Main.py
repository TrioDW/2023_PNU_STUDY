for i in range(1000, 9999) :
	special_num = list(str(i))
	special_num.reverse()
	special_num = 4 * int("".join(special_num))
	
	if i == special_num :
		print(f"Since 4 times {special_num / 4 :.0f} is {special_num}, the special number is {special_num / 4 :.0f}.")