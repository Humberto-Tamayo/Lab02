///* 
// * File:   test.c
// * Author: DELL
// *
// * Created on 8 de marzo de 2021, 06:03 PM
// */
//
//#include <stdio.h>
//#include "config2.h"
//#include <stdlib.h>
//#include <math.h>
//
///*
// * 
// * 
// */
//#define _XTAL_FREQ 1000000
//#define DELAY_SWEEP 300
//
//enum por_dir{output, input};
//enum por_ACDC{digital, analog};
//enum resistor_state{set_ON, res_ON};
//enum led_state{led_OFF,led_ON};
//enum butto_state{pushed,no_pushed};
//
////void_interrupt(high priority) high_isr (void);
////void_interrupt(low priority) low_isr (void);
//void portsInit(void);
//int main(void) {
//       portsInit();
//       int i, j;
//       int disp[2][4];
//       int bot[2][4];
//       int leds[8];
//       int bots[8];
//       
//      
//       while(1){
//           int num = (rand()%8);
//           
//          switch (num)
//          {
//              case 0:
//                  //LATAbits.LATA0= led_ON;
//                  LATA =  0x01; //b00000001
//                  __delay_ms(500);
//                  if (PORTDbits.RD0 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }
////                     for ( i=0; i<8; i++)
////                      
////                    {
////
////                    LATA = LATA >> 1;
////
////                    __delay_ms(300);
////
////                    }
////
////                    i= 0;
////
////                    for ( i=0; i<8; i++)
////
////                    {
////
////                    LATA = LATA << 1;
////
////                    //__delay_ms();                     
//                  
////                  else{
////                      __delay_ms(250);
////                      if (PORTDbits.RD7 == pushed){
////                            for ( i=0; i<8; i++)
////
////                           {
////
////                           LATA = LATA >> 1;
////
////                           __delay_ms(300);
////
////                           }
////
////                           i= 0;
////
////                           for ( i=0; i<8; i++)
////
////                           {
////
////                           LATA = LATA << 1;
////
////                           //__delay_ms();
////
////                           }
////
////                      }
////                      else{
////                          i=0;
////                      }
////                  }                 
//                  break;
//              case 1:
//                  LATA =  0x02; //b00000010
//                  __delay_ms(500);
//                  if (PORTDbits.RD1 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }
//                  break;
//              case 2:
//                  LATA =  0x04; //b00000100
//                  __delay_ms(500);
//                  if (PORTDbits.RD2 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }
//                  break;
//              case 3:
//                  LATA =  0x08; //b00008000
//                  __delay_ms(500);
//                  if (PORTDbits.RD3 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }
//                  break;
//              case 4:
//                  LATA =  0x10; //b00010000
//                  __delay_ms(500);
//                  if (PORTDbits.RD4 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }
//                  break;
//              case 5:
//                  LATA =  0x20; //b00100000
//                  __delay_ms(500);
//                  if (PORTDbits.RD5 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }
//                  break;
//              case 6:
//                  LATA =  0x40; //b01000000
//                  __delay_ms(500);
//                  if (PORTDbits.RD6 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }
//                  break;
//              case 7:
//                  LATA =  0x80; //b10000000
//                  __delay_ms(500);
//                  if (PORTDbits.RD7 == pushed){
//                      for(i = 0; i < 8; i++){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                      for(i = 7; i >= 0; i--){
//                          LATA = (unsigned char) pow(2,i);
//                          __delay_ms(DELAY_SWEEP);
//                      }
//                  }                  
//
//                  break;
//              default:
//                  printf("OK");
//          }     
//       }
//}
//void portsInit(void){
//    ANSELA= digital;
//    TRISAbits.TRISA0 = output;
//    TRISAbits.TRISA1 = output;
//    TRISAbits.TRISA3 = output;
//    TRISAbits.TRISA4 = output;
//    TRISAbits.TRISA5 = output;
//    TRISAbits.TRISA6 = output;
//    TRISAbits.TRISA7 = output;
//    
//    ANSELD=digital;
//    TRISDbits.TRISD0 = input;
//    TRISDbits.TRISD1 = input;
//    TRISDbits.TRISD2 = input;
//    TRISDbits.TRISD3 = input;
//    TRISDbits.TRISD4 = input;
//    TRISDbits.TRISD5 = input;
//    TRISDbits.TRISD6 = input;
//    TRISDbits.TRISD7 = input;
//}

/* 
 * File:   test.c
 * Author: DELL
 *
 * Created on 8 de marzo de 2021, 06:03 PM
 */

#include <stdio.h>
#include "config2.h"
#include <stdlib.h>
#include <math.h>

/*
 * 
 * 
 */
#define _XTAL_FREQ 1000000
#define DELAY_SWEEP 300

enum por_dir{output, input};
enum por_ACDC{digital, analog};
enum resistor_state{set_ON, res_ON};
enum led_state{led_OFF,led_ON};
enum butto_state{pushed,no_pushed};

//void_interrupt(high priority) high_isr (void);
//void_interrupt(low priority) low_isr (void);
void portsInit(void);
int main(void) {
       portsInit();
       int i, j;
       int disp[2][4];
       int bot[2][4];
       int leds[8];
       int bots[8];
       
      
       while(1){
           int num = (rand()%8);
           
          switch (num)
          {
              case 0:
                  //LATAbits.LATA0= led_ON;
                  LATA =  0x01; //b00000001
                  __delay_ms(500);
                  if (PORTDbits.RD0 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD0 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              case 1:
                  LATA =  0x02; //b00000010
                  __delay_ms(500);
                  if (PORTDbits.RD1 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD1 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              case 2:
                  LATA =  0x04; //b00000100
                  __delay_ms(500);
                  if (PORTDbits.RD2 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD2 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              case 3:
                  LATA =  0x08; //b00008000
                  __delay_ms(500);
                  if (PORTDbits.RD3 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD3 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              case 4:
                  LATA =  0x10; //b00010000
                  __delay_ms(500);
                  if (PORTDbits.RD4 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD4 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              case 5:
                  LATA =  0x20; //b00100000
                  __delay_ms(500);
                  if (PORTDbits.RD5 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD5 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              case 6:
                  LATA =  0x40; //b01000000
                  __delay_ms(500);
                  if (PORTDbits.RD6 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD6 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              case 7:
                  LATA =  0x80; //b10000000
                  __delay_ms(500);
                  if (PORTDbits.RD7 == pushed){
                      for(i = 0; i < 8; i++){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                      for(i = 7; i >= 0; i--){
                          LATA = (unsigned char) pow(2,i);
                          __delay_ms(DELAY_SWEEP);
                      }
                  } else {
                      __delay_ms(250);
                      if (PORTDbits.RD7 == pushed){
                          for(i = 0; i < 8; i++){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                          for(i = 7; i >= 0; i--){
                              LATA = (unsigned char) pow(2,i);
                              __delay_ms(DELAY_SWEEP);
                          }
                      }
                  }
                  break;
              default:
                  printf("OK");
          }     
       }
}
                  
void portsInit(void){
    ANSELA= digital;
    TRISAbits.TRISA0 = output;
    TRISAbits.TRISA1 = output;
    TRISAbits.TRISA3 = output;
    TRISAbits.TRISA4 = output;
    TRISAbits.TRISA5 = output;
    TRISAbits.TRISA6 = output;
    TRISAbits.TRISA7 = output;
    
    ANSELD=digital;
    TRISDbits.TRISD0 = input;
    TRISDbits.TRISD1 = input;
    TRISDbits.TRISD2 = input;
    TRISDbits.TRISD3 = input;
    TRISDbits.TRISD4 = input;
    TRISDbits.TRISD5 = input;
    TRISDbits.TRISD6 = input;
    TRISDbits.TRISD7 = input;
}
