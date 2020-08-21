stack1, stack2 = [], []
for _ in range(int(input())):
    choice = list(map(int,input().split()))
    if choice[0] == 1:
        stack1.append(choice[1])
    elif choice[0] == 2:
        if not stack2 :
            while stack1 :
                stack2.append(stack1.pop())
        stack2.pop()
    else:
        if stack2 :
            print(stack2[-1])
        else :
            print(stack1[0])
