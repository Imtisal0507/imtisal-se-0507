from abc import ABC
class Employye(ABC):
    def salary(self):
        pass


class Riddhi(Employye):
    def salary(self):
        print("Riddhi got 20k!!!")


class Antima(Employye):
    def salary(self):
        print("Antima got 25k!!!")

class Imtisal(Employye):
    def salary(self):
        print("Imtisal got 80k!!!")


obj = Riddhi()
obj.salary()

obj1 = Antima()
obj1.salary()

obj2 = Imtisal()
obj2.salary()