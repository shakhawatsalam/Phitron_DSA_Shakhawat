# encapsulation --> hide details
# access modifier : public, procted, private

class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name # Public
        self._branch = 'banani 11' # Procted
        self.__balance = initial_deposit # Private
        
    def deposit(self, amount):
        self.__balance += amount
    
    def wihtdraw(self,amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Fokir na kii'
    def get_balance(self):
        return self.__balance
        
    

rafSun = Bank('chotto bro', 1000)


print(rafSun.holder_name)
rafSun.deposit(40000)
print(rafSun.get_balance())
print(rafSun._branch)
# print(dir(rafSun))
print(rafSun._Bank__balance)
  