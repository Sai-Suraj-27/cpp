print("hello world")
print([i for i in range(2,200) if all(i%j!=0 for j in range(2,i))])