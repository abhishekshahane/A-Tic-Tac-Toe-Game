import random
from time import sleep
lista =[
            [None, None, None],
            [None, None, None],
            [None, None, None]
    ]

another = True
def printlist():
    for row in lista:
        print(row)
def check(lista):
    # The code below this is to BrainStorm every possible win combination.
    if (lista[0][0] == 'X' and lista[0][1] == 'X' and lista[0][2] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
               
            
    elif (lista[1][0] == 'X' and lista[1][1] == 'X' and lista[1][2] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
      
    elif (lista[2][0] == 'X' and lista[2][1] == 'X' and lista[2][2] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
          
          
    elif (lista[0][0] == 'X' and lista[1][0] == 'X' and lista[2][0] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
        
    elif (lista[0][1] == 'X' and lista[1][1] == 'X' and lista[2][1] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
         
    elif (lista[0][2] == 'X' and lista[1][2] == 'X' and lista[2][2] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
 
            
           
    elif (lista[0][0] == 'X' and lista[1][1] == 'X' and lista[2][2] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
    

          
    elif (lista[0][2] == 'X' and lista[1][1] == 'X' and lista[2][0] == 'X'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
            
    else:
        another = True
        # The code below this is to BrainStorm every possible win combination.
    if (lista[0][0] == 'O' and lista[0][1] == 'O' and lista[0][2] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
            
      
    elif (lista[1][0] == 'O' and lista[1][1] == 'O' and lista[1][2] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
            
         
    elif (lista[2][0] == 'O' and lista[2][1] == 'O' and lista[2][2] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
            
         
    elif (lista[0][0] == 'O' and lista[1][0] == 'O' and lista[2][0] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
            
       
    elif (lista[0][1] == 'O' and lista[1][1] == 'O' and lista[2][1] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
           
        
    elif (lista[0][2] == 'O' and lista[1][2] == 'O' and lista[2][2] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
            
          
    elif (lista[0][0] == 'O' and lista[1][1] == 'O' and lista[2][2] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
           
           
    elif (lista[0][2] == 'O' and lista[1][1] == 'O' and lista[2][0] == 'O'):
        print(f"Nice {namea}! You've won the game!")
        another = False
        sleep(2)
        exit()
           
    else:
        another = True
                

#The main game loop, or the main game while loop is below this line.
namea = input("What's your name?:  ")
nameb = input("What's your name?:  ")
while another == True:
    print("It is player one's turn.")
    playera = int(input("Enter the row you want to put X in(1, 2, 3):  "))
    playera -=1
    print(lista[playera])
    playerap = int(input("Enter the place you want to put X in(1, 2, 3):  "))
    playerap -=1
    if (lista[playera][playerap] == 'X' or lista[playera][playerap] == 'O'):
        print("Hey! You can't put your X on top of another X or O!")
    else:
        lista[playera][playerap] = 'X'
    check(lista)
    

    printlist()
    print("It is player two's turn.")
    playerb = int(input("Enter the row you want to put O in(1, 2, 3):  "))
    playerb -=1
    print(lista[playerb])
    playerbp= int(input("Enter the place you want to put O in(1, 2, 3):  "))
    playerbp -=1
    if (lista[playerb][playerbp] == 'X' or lista[playerb][playerbp] == 'O'):
        print("Hey! You can't put your O on top of another X or O!")
    else:
        lista[playerb][playerbp] = 'O'
    # Checking every time after one move for any condition
    check(lista)
    printlist()
