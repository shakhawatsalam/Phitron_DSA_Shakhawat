t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    min_size = float('inf')

    for i in  range(n):
        for j in range(i +1, n):
            result = arr[i] + arr[j] + (j -i)
            min_size = min(min_size, result)
    

    print(min_size)
