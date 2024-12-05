class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000
    
    def get_balance(self):
        return self.balance
    
    def deposit(self, amount):
        if amount > 0 :
            self.balance += amount

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            print(f"fokira you can't withdraw below {self.min_withdraw}")
        elif amount > self.max_withdraw:
            print(f'Bank fokir hoi jabea. you can not withdraw more then {self.max_withdraw}')
        else:
            self.balance -= amount
            print(f'here is your money {amount}')
            print(f'your balacne after withdraw {self.balance}')
        
brack = Bank(15000)

brack.withdraw(15)
brack.withdraw(500000)
brack.withdraw(1000)

