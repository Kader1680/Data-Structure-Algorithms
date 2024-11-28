# link problem ==> https://codeforces.com/problemset/problem/1996/A


x = int(input())   

while x > 0:
    a = int(input()) 
    
    # maximum number of cows
    cows = a // 4
    
    # remainder legs after using cows
    remainder = a % 4
    
    # Check if remainder can be covered by chickens (each has 2 legs)
    if remainder % 2 == 0:
        
        animals = cows + (remainder // 2)
    else:
       
        animals = cows + 1
    
    print(animals)
    
    x -= 1  
