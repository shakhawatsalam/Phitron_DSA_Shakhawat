numbers = [12,12,15,15,44,66,44]


for i,num in enumerate(numbers) : 
    print(i,num)
# key value pair
# dictionary
# object
# hash table
# overlap with set
person = { 'name': 'kala cchan', 'address':'kalipur', 'age':15, 'job' : 'baker'}
print(person['name'])
print(person['job'])
print(person.keys())
print(person.values())
person['Dream'] = 'software engineere'
print(person.values())
del person['age']
print(person.values())

for k , v in person.items() : 
    print(k,":", v)
