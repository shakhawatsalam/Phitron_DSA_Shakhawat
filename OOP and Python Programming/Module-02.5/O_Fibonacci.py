n = int(input())
def fibo(n, memo={}):
    if n == 1:
        return 0
    if n == 2:
        return 1
    
    if n not in memo:
        memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo)
    return memo[n]

print(fibo(n))