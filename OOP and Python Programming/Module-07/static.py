# static attribute (class attribute)
# static method @staticmethod
# class method @classmethod
class Shopping:
    cart = []  # class attribute / static attribute
    origin = 'china'
    
    def __init__(self, name, location) -> None:
        self.name = 'jamuna city' # instance attribute
        self.location = 'Jam er maj khana'
        
    def purchase(self, item, price, amount):
        remaining = amount  - price
        print(f'buying: {item} for price: {price} and reamaining: {remaining}')\
            
    @staticmethod    
    def multiply ( a, b):
        print(a * b) 
    @classmethod  
    def hudai_dekhai(self, item):
        print('not want to buy', item)

 
bashundara  = Shopping('basun dare', 'not poppular palce')        
bashundara.purchase('lungi', 500, 1000)
        
Shopping.purchase('a', 2,  2, 5)
Shopping.hudai_dekhai('lungi')
Shopping.multiply(10, 55) # static method
bashundara.multiply(5, 5)