# Sumar-21

import random 


def sacar_carta():
    valor_carta= random.randrange(1,12)
    print ("Su carta es ", valor_carta)
    return valor_carta

##########################################

def comprueba_fin_juego(puntos):
    seguir_jugando = True
    if puntos==21:
        print ("Enhorabuena has llegado a 21!!!")
        seguir_jugando = False
    
    elif puntos>21:
        print ("Lo siento, has superado 21!!!")
        seguir_jugando = False
    
    else:
        respuesta = input("¿Deseas otra carta? (S/n):  ")
        if respuesta == "n":
            print ("Te plantas con ", puntos, ".")
            print ("Te quedas a ", 21-puntos, "de llegar a 21.")
            seguir_jugando=False
            
    #fin if-elif-else
    
    return seguir_jugando

##########################################
    
    
# función principal del juego    
def algoritmo_principal():
    
    print ("Bienvenido usuario al juego de Sumar 21")
    
    while True:    

        print("\n\nIniciamos una nueva partida")
        
        puntos=0                 
        seguir_jugando = True    
        respuesta = "s"            
        
        while seguir_jugando:
            puntos += sacar_carta()
            print ("\ttienes ", puntos, "puntos...")
            seguir_jugando=comprueba_fin_juego(puntos)

        #Fin de la partida, ¿jugamos otra?
        if "n" == input("¿Desea jugar otra partida? (S/n): "):
            break;
    
    print ("Gracias por jugar con nosotros. Vuelva pronto!!")

##########################################    
    
    
#Aquí inicia la ejecución del programa
algoritmo_principal()



