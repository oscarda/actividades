import pygame
import random
pygame.init()

COLOR = (0, 200, 100)
radio=random.randrange(50,100)

SIZE = (1000,1000)
screen = pygame.display.set_mode(SIZE)

screen.fill((0,0,0))    #limpiamos la pantalla
pygame.draw.circle(screen, COLOR,(500,500),radio)   
pygame.draw.rect(screen, COLOR,(500,500,250, 250),2)

pygame.display.flip()

input("Presione una tecla para continuar...")

pygame.quit()

exit();
