import math


def timer(func):
    def inner(*args, **kwargs):
        print('time started')
        # print(func)
        func(*args, **kwargs)
        print('time ended')
    return inner

# time()()
@timer
def get_factorial(n):
    print('factorials started')
    result = math.factorial(n)
    print(f'factorial of {n} is: {result}')
    
    
get_factorial(5)
    
# time(get_factorial)()