''' type of variables in python and their syntax and use'''


a=1  #integer data type
print(a)
print ("the type of a is ", type(a) )
b="harry"  #string data type
print(b)
c = True
d = None
print("type of c is", type(d))
a1 = complex(8 , 2)
print(a1)

''' 
sequence data :
1.List: A list is an ordered collection of data with elements seperated by a comma
             and enclosed within square brackets .
              Lists are mutable and can be modified after creation 
              Example:
              list1 = [ 8,2,4,[-4,-5],["apple","banna"]]
              print(list1)


2.Tuple: A tuple is an ordered collection of data with elements seperated by a comma 
           and enclosed within a parenthees. Tuples are immutable and can not be modified
               after creation .
               Example:
               tuple1 = {{"parrot", "sparrow"},{"lion","tiger"}}
               print(tuple1)

MAPPED DATA
dict: A dictionary is an unordered collection of data types containing a 
       key:value pair . The key:value pairs are enclosed within curly brackets.
       Example:
       dict1= {"name": "sakshi","age": 20 , "canvote": true)
       print(dict1)
}

'''


list1 = [ 8,2,4,[-4,-5],["apple","banna"]]
print(list1)

tuple1 = (("parrot", "sparrow"),("lion","tiger"))
print(tuple1)


dict1= {"name":"sakshi","age": 20 , "canvote": True}
print(dict1)


