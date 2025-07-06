'''
#two sum
a= int(input("enter value of a "))
b = int(input("enter value of b "))
sum = a+b
print("the value of sum =  ", sum)
'''

'''
#largest of three numbers
a= int(input("enter value of a = "))
b= int(input("enter value of b = "))
c= int(input("enter value of c = "))
if a>b and a>c:
    print("a is greatest ")
  
elif b>a and b>c:
    print("b is greatest ")
   
else: 
    print("c is greatest ")
'''

'''
#find sum of all numbers in the list
print("enter the len of list ")
mylist = []
n = int(input())
for i in range(n):
    num= int(input())
    mylist.insert(i,num)
# print(mylist)
sum = 0
for i in range(n):
    sum = sum + mylist[i]
print(sum)

'''

'''
#print fib series upto a given number

n = int(input("enter the range of fib series "))
a= 0
b= 1
if n <=0:
    print("enter a valid range ")
else:
    for i in range(n):
        if(i == 0):
            print(a, end=" ")
        elif(i == 1):
            print(b, end=" ")
        else:
            c = a+b
            print(c, end=" ")
            a = b
            b =c
'''

'''
#to find factorial of a given number
n = int(input("enter the number "))
if(n == 0):
    print(1)
else:
    fact =1 
for i in range(1, n+1):
    fact = fact*i

print(fact)
'''

'''
#to find and delete the duplicates in a user defined list 
mylist = []
n = int(input("enter the length of the list "))
for i in range(n):
    x = int(input())
    mylist.append(x)

#method 1: to use set data structure
s = set()
for element in mylist:
    if element is not s:
        s.add(element)
newlist = list(s)
print(newlist)


#Method 2 : using dictionary
list_without_duplicates = list(dict.fromkeys(mylist))
print(list_without_duplicates)
'''

'''

#to find sum of digits of a number
n = int(input("enter the number "))
sum =0
while n>0:
    digit =int(n%10)
    sum += digit
    n = int(n/10)
print(sum)
'''

'''

# to check if the given string is pallindrome or not

s = input("enter the string ")
length= len(s)
reverse=""
for i in range(length):
    reverse+=s[length-i-1]
print(reverse)
if s == reverse:
    print("the string is palindrome")
else:
    print("the string is not palindrome")


'''

'''
#to find common elements in two lists

list1 =[1,2,3,4,5,6]
list2 =[4,5,6,6,7,8]
common_elements = [element for element in list1 if element in list2]
print(common_elements)

'''


'''
#Recursion
#factorial

def fact(num):
    if num==0:
        return 1
    else:
        return num*fact(num-1)
n = int(input("enter the number : "))
print(fact(n))
'''

'''
#to reverse the name using for loop
nam= input("enter your name :")
n = len(nam)
for i in range(-1,(-1)*n-1,-1):
    print(nam[i] ,end="")
'''


'''
#program to print all prime smaller using Sieve of Earthosthenes

def prime(num):
  
  prime = [True for i in range(num+1)]
  p = 2
  while(p*p<=num):
    if(prime[p] == True):
      for i in range(p*p,num+1,p):
        prime[i] = False
    
    p =p+1
  for i in range(2, num+1):
   if(prime[i]):
     print(i)



num = 30
prime(30)
'''
'''
# Selection Sort

def selection(arr):
    n= len(arr)
    for i in range(n):
        for j in range(i+1,n):
            if arr[j]< arr[i]:
                arr[i],arr[j] = arr[j],arr[i]

    return arr

mylist=[3,4,5,1,3]
sortedlist = selection(mylist)
print(sortedlist)
'''

'''
#merge sort

def merge_sort(arr):
    if len(arr)<=1:
        return arr
    mid = len(arr)/2
    left_half = arr[:mid]
    right_half= arr[mid:]
    left_half= merge_sort(left_half)
    right_half=merge_sort(right_half)
    return merge(left_half,right_half)


def merge(left, right):
    merged=[]
    i = j= 0
    while i<len(left) and j<len(right):
        if left[i] <right[j]:
            merged.append(left[i])
            i+=1
        else:
            merged.append(right[i])
            j+=1
    merged.extend(left[i:])
    merge.extend(right[j:])
    return merged
mylist = [3,5,6,1,0]
sortedlist = merge_sort(mylist)
print(sortedlist)
'''

'''
n= int(input("enter the number = "))
if n==1 or n==0:
    print("Not prime")
else:
    flag = 0
for i in range(2,n):
    if n%i==0:
        flag=1
        break
if flag ==0:
    print("prime")
else:
    print("NOt prime")
'''

