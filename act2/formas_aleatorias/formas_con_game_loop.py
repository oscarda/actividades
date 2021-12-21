import pygame
import random
pygame.init()

COLOR = (0, 200, 100)
radio=100

SIZE = (640,420)
screen = pygame.display.set_mode(SIZE)
clock = pygame.time.Clock()

continuar=True
while continuar:

    for event in pygame.event.get():
       if event.type == pygame.QUIT or event.type == pygame.KEYDOWN:
            continuar=False
  
    screen.fill((0,0,0))    
    pygame.draw.circle(screen, COLOR,(320,210),radio)   
    pygame.draw.rect(screen, COLOR,(10,10,50,50),2)

    pygame.display.flip()
    clock.tick(60)
    
pygame.quit()

exit();
