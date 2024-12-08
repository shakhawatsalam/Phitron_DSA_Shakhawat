class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
        
    def eat(self):
        print('I am eating, normal person')
        
        
    def exercise(self):
        raise NotImplementedError
        
        
class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)
        
    def eat(self):
        print('vegetable')
    
    
    def exercise(self):
        print('I am going to gym...')
    # + sign operator overload
    def __add__(self, others):
        return self.age + others.age
     # * sign operator overload
    def __mul__(self,  others):
        return self.age * others.age
    # len sign operator overload
    def __len__(self):
        return self.height
        
  
    
   
    
        
sakib = Cricketer('sakib', 38, 68, 91 , 'BD')
musi = Cricketer('musi', 36, 65, 78, 'BD')
# print(sakib.team)
# sakib.eat()
# sakib.exercise()

# plus sign overload

print(45 + 63)
print('sakib' + 'Rakib')
print([12,98] + [5,6,7,1,2])
print(sakib + musi)
print(sakib * musi)
print(len(sakib))