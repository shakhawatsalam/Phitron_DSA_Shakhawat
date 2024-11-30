# def double(x):
#     return x*2

doubled = lambda num : num * 2
suqared = lambda num : num * num
print(doubled(44))
print(suqared(9))


add = lambda x, y : x + y
 
print(add (11,33))

numbers = [12,12,15,15,44,66,44]

# doubled_nums = map(doubled, numbers)
doubled_nums = map(lambda x : x*x, numbers)

print(list(doubled_nums))