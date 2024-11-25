def full_name(first, last):
    name = f'Full name is {first} {last}'
    return name

# print(full_name('Shakhawat', 'Salam'))
# print(full_name( last='Shakhawat', first= 'Salam'))

def famous_name(first, last, **additional) :
    name = f'{first} {last}'
    print(additional['title'])
    return name

print(famous_name(first='Thaer', last='ali', title='hujur', additional='tahirii'))

def a_lot(num1, num2):
    sum = num1 + num2
    mul = num1 * num2
    return sum, mul

print(a_lot(10,10))