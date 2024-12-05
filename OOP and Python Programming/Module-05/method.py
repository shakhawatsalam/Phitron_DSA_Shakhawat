class Phone:
    price = 1200
    color = 'blue'
    brand = 'samsung'
    features  = ['camera', 'speker', 'hammer']

    def call(self):
        print("calling one person")

    def send_sms(self, phone, sms):
        text = f'sending SMS to: {phone} and message: {sms}'
        return text



my_phone = Phone()

print(my_phone.call())
print(my_phone.send_sms(221, 'hello world'))