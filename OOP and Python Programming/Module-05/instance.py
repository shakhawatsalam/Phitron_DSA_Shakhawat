class Shop:
    shoping_mall = 'Jamuna'
    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = [] # it is an instance attribute
    def add_to_cart(self, item):
        self.cart.append(item)



sakib = Shop('Sakib')
sakib.add_to_cart('bat')
sakib.add_to_cart('ball')
sakib.add_to_cart('PANT')
print(sakib.cart)
shisir = Shop('Shisir')
shisir.add_to_cart('dress')
shisir.add_to_cart('Expensive Phone')
shisir.add_to_cart('dress for daughter')
print(shisir.cart)