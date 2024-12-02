a, b = map(int, input().split())
s = input()
def fun(s):
    if s.count('-') != 1: 
        print('No')
        return
   
    
    first_part, second_part = s.split('-')

    if a == len(first_part) and b == len(second_part):
        print("Yes")
    else:
        print("No")


fun(s)
