import random
import math

DELTA = 0.01   # Mutation step size
LIMIT_STUCK = 100  # Max number of evaluations enduring no improvement
NumEval = 0    # Total number of evaluations


def main():
	fileName = input()
	# Create an instance of numerical optimization problem
	p = createProblem(fileName)   # 'p': (expr, domain)
	# Call the search algorithm
	solution, minimum = firstChoice(p)
	# Show the problem and algorithm settings
	describeProblem(p)
	displaySetting()
	# Report results
	displayResult(solution, minimum)


def createProblem(fileName):
	## Read in an expression and its domain from a file.
	## Then, return a problem 'p'.
	## 'p' is a tuple of 'expression' and 'domain'.
	## 'expression' is a string.
	## 'domain' is a list of 'varNames', 'low', and 'up'.
	## 'varNames' is a list of variable names.
	## 'low' is a list of lower bounds of the varaibles.
	## 'up' is a list of upper bounds of the varaibles.
	
	f = open(fileName, 'r')
	expression = f.readline()
	
	varNames = []; low = []; up = []
	
	while True:
		line = f.readline()
		
		if not line: 
			break
			
		l = line.split(',')
		varNames.append(l[0])
		low.append((int)(l[1]))
		up.append((int)(l[2]))
		
	domain = [varNames, low, up]
	return expression, domain


def firstChoice(p):
	current = randomInit(p)   # 'current' is a list of values
	valueC = evaluate(current, p)
	i = 0
	while i < LIMIT_STUCK:
		successor = randomMutant(current, p)
		valueS = evaluate(successor, p)
		if valueS < valueC:
			current = successor
			valueC = valueS
			i = 0              # Reset stuck counter
		else:
			i += 1
	return current, valueC


def randomInit(p):
	# Return a random initial point
	# as a list of values
	init = p[1][random.randint(1,2)]
	
	return init    # list of values


def evaluate(current, p):
	# Evaluate the expression of 'p' after assigning
	# the values of 'current' to the variables
	global NumEval

	NumEval += 1
	expr = p[0]         # p[0] is function expression
	varNames = p[1][0]  # p[1] is domain: [varNames, low, up]
	for i in range(len(varNames)):
		assignment = varNames[i] + '=' + str(current[i])
		exec(assignment)
	return eval(expr)


def randomMutant(current, p):
	# Return a random successor
	i = random.randint(0, len(current) - 1)
	x = random.randint(0, 1)
	d = DELTA
	
	if x :
		d = -DELTA
	return mutate(current, i, d, p)


def mutate(current, i, d, p):  # Mutate i-th of 'current' if legal
	curCopy = current[:]
	domain = p[1]        # [VarNames, low, up]
	l = domain[1][i]     # Lower bound of i-th
	u = domain[2][i]     # Upper bound of i-th
	if l <= (curCopy[i] + d) <= u:
		curCopy[i] += d
	return curCopy


def describeProblem(p):
	print()
	print("Objective function:")
	print(p[0])   # Expression
	print("Search space:")
	varNames = p[1][0]  # p[1] is domain: [VarNames, low, up]
	low = p[1][1]
	up = p[1][2]
	for i in range(len(low)):
		print(" " + varNames[i] + ":", (low[i], up[i]))


def displaySetting():
	print()
	print("Search algorithm: First-Choice Hill Climbing")
	print()
	print("Mutation step size:", DELTA)
	print("Max evaluations with no improvement: {0:,} iterations"
				.format(LIMIT_STUCK))


def displayResult(solution, minimum):
	print()
	print("Solution found:")
	print(coordinate(solution))  # Convert list to tuple
	print("Minimum value: {0:,.3f}".format(minimum))
	print()
	print("Total number of evaluations: {0:,}".format(NumEval))


def coordinate(solution):
	c = [round(value, 3) for value in solution]
	return tuple(c)  # Convert the list to a tuple

main()