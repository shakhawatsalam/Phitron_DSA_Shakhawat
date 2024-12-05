class Calculator:
    brand = 'Casio Ms68'
    def add(self, num1, num2):
        return num1 + num2
    def deduct(self, num1, num2):
        return num1 - num2
    def multiply(self, num1, num2) :
        return num1 * num2
    


my_calculator = Calculator()

print(my_calculator.add(50,200))
print(my_calculator.deduct(500,200))
print(my_calculator.multiply(500,200))