import sys
n = input()
arr = input().split()

int_arr = [int(x) for x in arr]
max_size = -sys.maxsize - 1
min_size = sys.maxsize
max_i = -1
min_i = -1
for i,x in enumerate(int_arr):
    if x > max_size:
        max_size = x
        max_i = i
    elif x < min_size:
        min_size = x  
        min_i = i

int_arr[max_i] = min_size
int_arr[min_i] = max_size
for x in int_arr:
    print(x, end=" ")
