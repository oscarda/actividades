import pygame
import random
pygame.init()

AMARILLO = (255, 255, 0)
NEGRO = (0, 0, 0)

radio=200

SIZE = (640,420)
screen = pygame.display.set_mode(SIZE)
 
screen.fill((0,0,0))
pygame.draw.circle(screen, AMARILLO,(320,210),radio) 
pygame.display.flip()
    
input("Presione una tecla para continuar...")

pygame.quit()

exit();
