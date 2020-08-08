import random
lista =[
            [0, 0, 0],
            [0, 0, 0],
            [0, 0, 0]
    ]
def printlist():
    for row in lista:
        print(row)
print("It is player one's turn.")
namea = input("What's your name?:  ")
playera = int(input("Enter the row you want to put X in(1, 2, 3):  "))
playera -=1
playerap = int(input("Enter the place you want to put X in(1, 2, 3):  "))
playerap -=1
lista[playera][playerap] = "X"
printlist()
print("It is player two's turn.")
nameb = input("What's your name?:  ")
playerb = int(input("Enter the row you want to put O in(1, 2, 3):  "))
playerb -=1
playerbp= int(input("Enter the place you want to put O in(1, 2, 3):  "))
playerbp -=1
lista[playerb][playerbp] = "O"
printlist()
