f_value = int(input("Enter future value:"))
interest_rate = float(input("Enter interest rate (as %):"))
years = int(input("Enter number of years:"))

p_value = f_value / ((1 + interest_rate/100) ** years)

print(f"Present value: ${p_value:,.2f}")