class shop:
    cart = []  # it is an class attribute
    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self, item):
        self.cart.append(item)


shawon = shop('hello world')
shawon.add_to_cart('shoes')
shawon.add_to_cart('phone')
print(shawon.cart)

jiva = shop('Jiva')
jiva.add_to_cart('dress')
jiva.add_to_cart('watch')
print(jiva.cart)