# list --> []
# tuple --> ()
# set --> {} unique item 
# Set: unique items collection
numbers = [12,12,15,15,44,66,44]
print(numbers)
numbers_set = set(numbers)
print(numbers_set)
# numbers_set.add(55)
numbers_set.remove(66)
print(numbers_set)

for item in numbers_set:
    print(item)

if 12 in numbers_set:
    print("Exist")

A = {1,3,5, 7}
B = {1,2,3,4,5}
print(A&B)
print(A | B)