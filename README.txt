This project use's four 8x8 LED matrix's wired in series, I wanted to understand functions more so I turned to the arduino. I love messing with LED's and this was a great chance to really get to see how everything works. 

Assuming you are familiar with the arduino board layout and 8x8 LED matrix layout

                                           Pin Layout 



   Arduino ---------------> LED Matrix's
   
   5v ----------------> VCC
    GND ---------------> GND
     Pin12 -------------- > DIN
      Pin11 --------------> CLK
       Pin10 ---------------> CS
      
      
      *****************************
      
                                              Conncecting the four Matrix's together.
                                              
                  Board-1-------------> board-2 -----------> board-3 ----------> board-4
                  
                VCC ----------------> VCC ---------------> VCC ------------> VCC
                
                GND -----------------> GND --------------> GND -----------> GND
                
                DIN ------------------> DIN -------------> DIN -----------> DIN
                
                CLK -------------------> CLK -------------> CLK ----------> CLK
                
                CS --------------------> CS --------------> CS --------------> CS
                
                
              ******************************* From the opposite end of your matrix's you will connect them together starting with the first matrix that is connected to your arduino. 
                                     
                                     FROM THE TOP
          VCC  -
          GND  -
          DIN  ----------------> DIN -----------------> DIN ----------------> DIN 
          CS -
          CLK -
            
          Now that your wired up take it for a spin!
          
            
                
      
