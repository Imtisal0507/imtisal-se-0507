class A:
    def fun1(self):

        print("This is a function1!!!")

class B:
    def fun1(self):
        super().fun1()

        print("This is function 2!!!")

class C(B,A):
    def fun1(self):
        super().fun1()
        print("This is function 3!!!")


obj = C()
obj.fun1()
