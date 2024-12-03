class A:
    def fun1(self):
        print("This is function 1!!!")


class B(A):
    def fun2(self):
        print("This is function 2!!!")


class C(A):
    def fun3(self):
        print("This is function 3!!!")







obj = B()
obj.fun1()
obj.fun2()

obj = C()
obj.fun1()
obj.fun3()


