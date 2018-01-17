/*****
 *                                                                   
 *                   Searduino
 *                      
 *   Copyright (C) 2013 Henrik Sandklef 
 *                                                                   
 * This program is free software; you can redistribute it and/or     
 * modify it under the terms of the GNU General Public License       
 * as published by the Free Software Foundation; either version 3    
 * of the License, or any later version.                             
 *                                                                   
 *                                                                   
 * This program is distributed in the hope that it will be useful,   
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     
 * GNU General Public License for more details.                      
 *                                                                   
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software       
 * Foundation, Inc., 51 Franklin Street, Boston,            
 * MA  02110-1301, USA.                                              
 ****/

#include <Arduino.h>
#include "searduino.h"

#include "lcd-shield.h"


#define SHORT_DELAY() delay(200)
#define LONG_DELAY()  delay(500)

void setup()
{
  lcd_setup();
}


int main1(void)
{
  init();
  setup();

  /* The following line uses a Saerduino macro 
   * You could use a plain "for (;;)" instead
   */
  SEARDUINO_LOOP()
    {
      /*      write_lcd("Hejsan");
      LONG_DELAY();
      write_lcd("Hoppsan");
      LONG_DELAY();
      */
      scroll_lcd("Fallerallera");
      //LONG_DELAY();
      
    }

}

int main(void)
{
  init();
  setup();
  SEARDUINO_LOOP()
    {
      loop();
    }

}

