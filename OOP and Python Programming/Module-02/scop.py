balance = 3000
def buy_thins(item, price):
    balance = balance - price
    print(f'balance after buying {item}',balance)

buy_thins('sunglass', 1000)