numbers = [54,65,46,43,21,65,54,65,46,5]

odd_numbers = [num for num in numbers if num % 2 == 1 if num % 5 == 0]
print(odd_numbers)