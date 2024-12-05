# poly --> many
# morph --> shape


class Animal:
    def __init__(self, name) -> None:
        self.name = name
        
    def make_sound(self):
        print('animal making  some sound')
        
        
        
class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
        
    def make_sound(self):
        print('mew mew') 
        
        
class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
        
    def make_sound(self):
        print('Gwe gwewe ')
        
        
class Goat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
        
    def make_sound(self):
        print('bbea lon dorr')
        
don =  Cat('Real Don')

don.make_sound()

shepart = Dog('Local Shepard')

shepart.make_sound()

mess = Goat('L M')

mess.make_sound()

less = Goat('Naymer')

animals = [don, shepart, mess, less]


for animal in  animals:
    animal.make_sound()