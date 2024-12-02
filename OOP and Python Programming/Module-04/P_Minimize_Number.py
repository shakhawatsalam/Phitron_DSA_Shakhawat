n = int(input())
arr = list(map(int, input().split()))


count = 0


while all(x % 2 == 0 for x in arr):
    arr = [x // 2 for x in arr]
    count += 1

print(count)
