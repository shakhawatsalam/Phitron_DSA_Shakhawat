
n = int(input())
a = list(map(int, input().split()))


a.sort()


removals = 0
i = 0


while i < n: 
    x = a[i]  
    count = 0

  
    while i < n and a[i] == x:
        count += 1
        i += 1

 
    if count > x:
        removals = removals + count - x  
    elif count < x:
        removals = removals + count  


print(removals)
