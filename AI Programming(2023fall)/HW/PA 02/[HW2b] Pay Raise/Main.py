first_name = input("Enter first name:")
last_name = input("Enter last name:")
salary = int(input("Enter current salary:"))

new_salary = 0
if salary < 40000 :
	new_salary = salary * 1.05
else :
	new_salary = (salary - 40000) * 1.02 + 2000 + 40000

print(f"New salary for {first_name} {last_name}: ${new_salary:,.2f}")