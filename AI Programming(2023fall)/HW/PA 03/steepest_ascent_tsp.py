import random
import math

NumEval = 0    # Total number of evaluations


def main():
	# Create an instance of TSP
	fileName = input()
	p = createProblem(fileName)    # 'p': (numCities, locations, table)
	# Call the search algorithm
	solution, minimum = steepestAscent(p)
	# Show the problem and algorithm settings
	describeProblem(p)
	displaySetting()
	# Report results
	displayResult(solution, minimum)


def createProblem(fileName):
	# Read in a TSP (# of cities, locatioins) from a file.
	# Then, create a problem instance and return it.
	f = open(fileName, 'r')

	# First line is number of cities
	numCities = int(f.readline())

	locations = []
	line = f.readline()  # The rest of the lines are locations

	while line != '':
		locations.append(eval(line))  # Make a tuple and append
		line = f.readline()

	f.close()

	table = calcDistanceTable(numCities, locations)

	return numCities, locations, table


def calcDistanceTable(numCities, locations):
	# A symmetric matrix of pairwise distances
	table = []
	
	for i in range(numCities):
		a = []
		for j, k in locations:
			a.append(math.sqrt((locations[i][0] - j) ** 2 + (locations[i][1] - k) ** 2))
		table.append(a)
	
	return table  # A symmetric matrix of pairwise distances


def steepestAscent(p):

	current = randomInit(p)   # 'current' is a list of city ids
	valueC = evaluate(current, p)

	while True:
		neighbors = mutants(current, p)
		(successor, valueS) = bestOf(neighbors, p)
		if valueS >= valueC:
			break
		else:
			current = successor
			valueC = valueS
	return current, valueC


def randomInit(p):   # Return a random initial tour
	n = p[0]
	init = list(range(n))
	random.shuffle(init)
	return init # [2, 6, 49, ...]


def evaluate(current, p):
	## Calculate the tour cost of 'current'
	## 'p' is a Problem instance
	## 'current' is a list of city ids
	## Consider the cost to return to the first city from the last city
	global NumEval
	
	# p[2] is a distance table == cost
	cost = 0

	# 현재 위치에서 다음 위치로의 cost 모두 더하기
	for i in range(len(current) - 1):
		cost += p[2][current[i]][current[i+1]]
		
	cost += p[2][current[0]][current[-1]] # 마지막 위치에서 처음 위치로

	NumEval += 1
	return cost


def mutants(current, p):  # Inversion only
	n = p[0]; neighbors = []
	count = 0; triedPairs = []

	while count <= n:  # Pick two random loci for inversion
		i, j = sorted([random.randrange(n) for _ in range(2)])
		if i < j and [i, j] not in triedPairs:
			triedPairs.append([i, j])
			curCopy = inversion(current, i, j)
			count += 1
			neighbors.append(curCopy)
	return neighbors

# shuffle current llist to test 
def inversion(current, i, j):  # Perform inversion
	curCopy = current[:]

	while i < j:
		curCopy[i], curCopy[j] = curCopy[j], curCopy[i]
		i += 1
		j -= 1
	
	return curCopy


def bestOf(neighbors, p):
	# Select the best solution among neighbors
	b = []
	bv = []
	
	for i in neighbors:
			bv.append(evaluate(i, p))
			b.append(i)
			
	bestValue = min(bv)
	best = b[bv.index(bestValue)]
	return best, bestValue


def describeProblem(p):
	print()
	n = p[0]
	print("Number of cities:", n)
	print("City locations:")
	locations = p[1]
	for i in range(n):
		print("{0:>12}".format(str(locations[i])), end='')
		if i % 5 == 4:
			print()


def displaySetting():
	print()
	print("Search algorithm: Steepest-Ascent Hill Climbing")


def displayResult(solution, minimum):
	print()
	print("Best order of visits:")
	tenPerRow(solution)       # Print 10 cities per row
	print("Minimum tour cost: {0:,}".format(round(minimum)))
	print()
	print("Total number of evaluations: {0:,}".format(NumEval))


def tenPerRow(solution):
	for i in range(len(solution)):
		print("{0:>5}".format(solution[i]), end='')
		if i % 10 == 9:
			print()


main()
