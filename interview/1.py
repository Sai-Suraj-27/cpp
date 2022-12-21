a = 3
print(a)

a = 5
print(a)

b = "Hello"
print(b)
#b[0] = '2'
#print(b)

s = list("Hello World")
print(s)

s[0] = '2'
print(s)

print("".join(s))

p = lambda x,y: x**2 + pow(y,2)
print(p(6,3))

x = 22
def printer():
    for i in range(0,27,3):
        print(i)
    global x
    x = 5
    y = 3
    print(x)

printer()
print("x = ", x)
#print(y)

x = 23
print("x = ", x)



