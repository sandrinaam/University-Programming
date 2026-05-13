import math
from functools import reduce
from operator import mul

def func(pos1:int, pos2:int,/,mix1:str,mix2:str,*,key1:float,key2:float=2.4) -> None: #документиране
    """Documentation
    """ #анотация
    print(pos1,pos2,mix1,mix2,key1,key2)
    print(func.__annotations__)
    print(func.__doc__)

def func1(mix1,mix2):
    print(mix1,mix2)

def func2(*,key1,key2):
    print(key1,key2)

def func3(pos1,pos2,/):
    print(pos1,pos2)

def printlist(*args):
    print(args)
    print(*args)
    for x in args: # разпакетиране
        print(x)

def mult(list):
    # 3.8 + python
 return math.prod(list)

def mult1(list):
    # 3.8 + python
 return reduce(mul, list)

def mult2(list):
    prod = 1
    for x in list:
        prod *= x
    return prod

def dictionary(key:int, value:str) ->None:
    print(key)
    print(value)

#def add_to_list(L:list=[],data:int=1): ->None:
 #   L.append(data)

#def add_to_list1(L:list=[],data:int=1): ->list:
 # if list == None:
 # L = []
 # L.append(data)
   # return L



if __name__ == '__main__':
 print('Hello', 'World',sep='#|', end=' |')
 func(5,10,'hi','22',key1='abc',key2='False')
 func(5,10,'hi', mix2='22',key1='abc',key2='False')
 #func(5,pos2=10,mix1='hi',mix2='22',key1='abc',key2='False') - pos2 не позволява ключово предаване
 func(5,10,mix1='hi',mix2='22',key1='abc',key2='False')
 func1(1,mix2='hi')
 #func2(33,key2=11) - не работи
 func2(key1=33,key2=11)
 # func3(44,pos2=101)
 func3(44,101)
 printlist(1,2,3)
 print(mult([1,2,3]))
 print(mult1([1,2,3,4]))
 print(mult2([1,2,3]))
 list1 = [1,22,33,11,5]
 list1.sort() #по ред #метод на списъка
 print(list1)
 list1.sort(reverse=True)
 print(list1)
 print(sorted(list1))
 pairs = [(1,'one'),(2,'two'),(3,'three'),(10,'ten'),(5,'five')]
 pairs.sort()
 print(pairs)
 pairs.sort(key=lambda pair: pair[1]) #alphabetic
 print(pairs)
 # list2 = []
# add_to_list(list)
#list = add_to_list
dictionary('1','one')
