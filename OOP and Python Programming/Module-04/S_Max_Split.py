s = input()
arr = []  
l, r = 0, 0  
ans = ''  

for x in s:
    ans += x  
    if x == "L":
        l += 1
    else:
        r += 1
    if l == r:  
        arr.append(ans)
        ans = ''
        l, r = 0, 0


print(len(arr))  
for ar in arr:  
    print(ar)
