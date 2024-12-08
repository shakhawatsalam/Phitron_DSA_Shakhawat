# read only --> you can not set the value. value can not be change
# getter --> get a value of property through a method. Most of the time, you will get the value of a private attribute.
# setter --> set a value of a property through a method. Most of the time, you will set the  value of a provate property

class User:
    def __init__(self, name, age, mony) -> None:
        self._name = name
        self._age = age
        self.__mony = mony
        
    # getter without any setter is readonly attribute
    @property  
    def age(self):
        return self._age
    # getter 
    @property
    def salary(self):
        return self.__mony
    # setter
    @salary.setter
    def salary(self,value):
        if value < 0:
            return 'salary can not be negative'
        self.__mony += value
    
    
    
samsu = User('kopa', 21, 12000)

# print(samsu._age)
# print(samsu.age)
# samsu.salary = 15000
print(samsu.salary)