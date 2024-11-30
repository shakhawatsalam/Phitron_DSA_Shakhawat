def multiple():
    return 3, 4

# print(multiple())
things = 'pen', 'tripod', 'water'
# print(type(things))
print(things[0])
print(things[-2])
print(len(things))

if 'pen' in things:
    print('exists')

for item in things:
    print(item)
