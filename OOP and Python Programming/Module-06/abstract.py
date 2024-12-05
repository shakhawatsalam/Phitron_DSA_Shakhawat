from abc import ABC, abstractmethod
# abstract base class
class Animal(ABC):
    @abstractmethod  # enforce all derived class to have a eat  method
    def eat(self):
     print('I need food')
    @abstractmethod
    def move(self):
        print('I want to move on')
    

class Monkey(Animal):
    def __init__(self, name) -> None:
        self.category = 'category'
        self.name = name
        super().__init__()
    
    def eat(self):
       print("hey naana i am aeatina bana")
       
    def move(self):
        print('I am move from monkey')
        
layka = Monkey('lucky')

print(layka.move())