import random
num=random.randint(1,10)
flag=True
count=0
while flag:
    count+=1
    guess_num=int(input("请输入你的数字："))
    if guess_num==num:
         print("二货你猜对了")
         flag=False
    else:
        if guess_num>num:
            print("二货你猜大了")
        if guess_num<num:
            print("二货你猜小了")
print(f"你个二货已经猜了{count}次了")            




