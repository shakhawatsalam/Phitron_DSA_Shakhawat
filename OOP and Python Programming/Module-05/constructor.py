class Phone:
    manufactured = 'china'

    def __init__(self, owner,brand, price) :
        self.owner = owner
        self.brand = brand
        self.price = price
    def send_sms(self,  phone, sms):
        text = f'sending to : {phone} {sms}'
        return text
    

my_phone = Phone('Kala Chan', 'Oppo', 9800)

her_phone = Phone('She', 'Iphone', 15000)
print(my_phone.owner, my_phone.brand, my_phone.price)
print(her_phone.owner, her_phone.brand, her_phone.price)