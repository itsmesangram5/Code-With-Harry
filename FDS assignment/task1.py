# a=int(input("Enter the marks of first subject  "))
# b=int(input("Enter the marks of Second subject  "))
# c=int(input("Enter the marks of Third subject  "))
# print("The average of three subjects is ",(a+b+c)/3)
for Number in range (1, 201):
    count = 0
    for i in range(2, (Number//2 + 1)):
        if(Number % i == 0):
            count = count + 1
            break

    if (count == 0 and Number != 1):
        print(" %d" %Number, end = '  ')
# def reverse_number(n):
#     r = 0
#     while n > 0:
#         r *= 10
#         r += n % 10
#         n /= 10
#     return r

# # print(reverse_number(123))
# n = input(15)  # input is always taken as a string
# rev = (int(str(n)[::-1]))
