# creating an empty list
list = []

# number of elements as input
n = int(input("Enter number of elements : "))

# iterating till the range
for i in range(0, n):
	ele = int(input())

	list.append(ele) # adding the element
print("data sebelum diurutkan:") 
print( list)
print("data setelah diurutkan:") 
print(sorted(list))
