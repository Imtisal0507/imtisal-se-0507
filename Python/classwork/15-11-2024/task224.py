class A:
    def fun1(self):
        print("This is function 1!!!")


class B(A):
    def fun2(self):
        print("This is function 2!!!")


class C():
    def fun3(self):
        print("This is function 3!!!")

class D(B,C):
    def fun4(self):
        print("This is function 4!!!!!")







obj = D()
obj.fun1()
obj.fun2()
obj.fun3()
obj.fun4()
