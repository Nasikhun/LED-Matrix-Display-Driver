/* 
 * File:   courier.h
 * Author: Jovan
 *
 * Created on April 26, 2019, 5:27 PM
 */

#ifndef COURIER_H
#define	COURIER_H

const unsigned char Courier9x13[] = {
0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char  
0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char !
0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char "
0x09, 0x00, 0x00, 0x40, 0x00, 0xC8, 0x03, 0x78, 0x00, 0x4F, 0x00, 0xC8, 0x03, 0x78, 0x00, 0x4F, 0x00, 0x08, 0x00,  // Code for char #
0x08, 0x00, 0x00, 0x1C, 0x01, 0x22, 0x02, 0x22, 0x02, 0x23, 0x0E, 0x22, 0x02, 0x22, 0x02, 0xC4, 0x01, 0x00, 0x00,  // Code for char $
0x09, 0x00, 0x00, 0x02, 0x01, 0x85, 0x00, 0x45, 0x00, 0x22, 0x00, 0x10, 0x01, 0x88, 0x02, 0x84, 0x02, 0x02, 0x01,  // Code for char %
0x09, 0x00, 0x00, 0xC0, 0x01, 0x2E, 0x02, 0x11, 0x02, 0x21, 0x02, 0x41, 0x02, 0x82, 0x01, 0x80, 0x01, 0x40, 0x02,  // Code for char &
0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char '
0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x03, 0x06, 0x0C, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00,  // Code for char (
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x06, 0x0C, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char )
0x08, 0x00, 0x00, 0x10, 0x00, 0x54, 0x00, 0x7C, 0x00, 0x38, 0x00, 0x7C, 0x00, 0x54, 0x00, 0x10, 0x00, 0x00, 0x00,  // Code for char *
0x08, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xFC, 0x01, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00,  // Code for char +
0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,  // Code for char ,
0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00,  // Code for char -
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char .
0x09, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x40, 0x00, 0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04, 0x00, 0x02, 0x00,  // Code for char /
0x08, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x01, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0xFE, 0x01, 0x00, 0x00,  // Code for char 0
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0xFF, 0x03, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00,  // Code for char 1
0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x81, 0x02, 0x41, 0x02, 0x21, 0x02, 0x11, 0x02, 0x0E, 0x02, 0x00, 0x00,  // Code for char 2
0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x01, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xEE, 0x01, 0x00, 0x00,  // Code for char 3
0x08, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x50, 0x00, 0x4C, 0x00, 0x42, 0x02, 0xFF, 0x03, 0x40, 0x02, 0x00, 0x00,  // Code for char 4
0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x01, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xE1, 0x01, 0x00, 0x00,  // Code for char 5
0x08, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x01, 0x22, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xE0, 0x01, 0x00, 0x00,  // Code for char 6
0x08, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x03, 0xC1, 0x00, 0x31, 0x00, 0x0D, 0x00, 0x03, 0x00, 0x00, 0x00,  // Code for char 7
0x08, 0x00, 0x00, 0x00, 0x00, 0xEE, 0x01, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xEE, 0x01, 0x00, 0x00,  // Code for char 8
0x08, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x21, 0x02, 0x21, 0x02, 0x21, 0x02, 0x11, 0x01, 0xFE, 0x00, 0x00, 0x00,  // Code for char 9
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x03, 0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char :
0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x18, 0x07, 0x18, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,  // Code for char ;
0x07, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x50, 0x00, 0x88, 0x00, 0x04, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00,  // Code for char <
0x08, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x50, 0x00, 0x50, 0x00, 0x50, 0x00, 0x50, 0x00, 0x50, 0x00, 0x00, 0x00,  // Code for char =
0x07, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x04, 0x01, 0x88, 0x00, 0x50, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char >
0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xC1, 0x02, 0x21, 0x00, 0x11, 0x00, 0x0E, 0x00, 0x00, 0x00,  // Code for char ?
0x09, 0x00, 0x00, 0xFC, 0x01, 0x02, 0x02, 0x71, 0x04, 0x89, 0x04, 0x89, 0x04, 0x79, 0x04, 0x82, 0x04, 0x7C, 0x00,  // Code for char @
0x09, 0x00, 0x02, 0x80, 0x03, 0x71, 0x02, 0x4D, 0x00, 0x43, 0x00, 0x4C, 0x00, 0x70, 0x02, 0x80, 0x03, 0x00, 0x02,  // Code for char A
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xEE, 0x01, 0x00, 0x00,  // Code for char B
0x08, 0x00, 0x00, 0xFC, 0x00, 0x02, 0x01, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x02, 0x0F, 0x01, 0x00, 0x00,  // Code for char C
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x01, 0xFC, 0x00, 0x00, 0x00,  // Code for char D
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x11, 0x02, 0x11, 0x02, 0x39, 0x02, 0x01, 0x02, 0x03, 0x03, 0x00, 0x00,  // Code for char E
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x11, 0x02, 0x11, 0x02, 0x39, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00,  // Code for char F
0x09, 0x00, 0x00, 0xFC, 0x00, 0x02, 0x01, 0x01, 0x02, 0x01, 0x02, 0x21, 0x02, 0x22, 0x02, 0xEF, 0x01, 0x20, 0x00,  // Code for char G
0x09, 0x01, 0x02, 0xFF, 0x03, 0x11, 0x02, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x11, 0x02, 0xFF, 0x03, 0x01, 0x02,  // Code for char H
0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0xFF, 0x03, 0x01, 0x02, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00,  // Code for char I
0x09, 0x00, 0x00, 0x80, 0x01, 0x00, 0x02, 0x00, 0x02, 0x01, 0x02, 0x01, 0x02, 0xFF, 0x01, 0x01, 0x00, 0x01, 0x00,  // Code for char J
0x09, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x21, 0x02, 0x30, 0x00, 0x4D, 0x00, 0x83, 0x00, 0x01, 0x03, 0x00, 0x02,  // Code for char K
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x01, 0x02, 0x01, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00,  // Code for char L
0x09, 0x01, 0x02, 0xFF, 0x03, 0x0C, 0x02, 0x30, 0x00, 0xC0, 0x00, 0x30, 0x00, 0x0C, 0x02, 0xFF, 0x03, 0x01, 0x02,  // Code for char M
0x09, 0x01, 0x02, 0xFF, 0x03, 0x04, 0x02, 0x18, 0x02, 0x20, 0x00, 0xC1, 0x00, 0x01, 0x01, 0xFF, 0x03, 0x01, 0x00,  // Code for char N
0x08, 0x00, 0x00, 0xFC, 0x00, 0x02, 0x01, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x01, 0xFC, 0x00, 0x00, 0x00,  // Code for char O
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x21, 0x02, 0x21, 0x02, 0x21, 0x00, 0x21, 0x00, 0x1E, 0x00, 0x00, 0x00,  // Code for char P
0x08, 0x00, 0x00, 0xFC, 0x00, 0x02, 0x09, 0x01, 0x0A, 0x01, 0x06, 0x01, 0x06, 0x02, 0x09, 0xFC, 0x08, 0x00, 0x00,  // Code for char Q
0x09, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x21, 0x02, 0x21, 0x00, 0x61, 0x00, 0xA1, 0x00, 0x1E, 0x03, 0x00, 0x02,  // Code for char R
0x08, 0x00, 0x00, 0x8E, 0x03, 0x11, 0x01, 0x11, 0x02, 0x11, 0x02, 0x21, 0x02, 0x22, 0x02, 0xC7, 0x01, 0x00, 0x00,  // Code for char S
0x09, 0x03, 0x00, 0x01, 0x00, 0x01, 0x02, 0x01, 0x02, 0xFF, 0x03, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x03, 0x00,  // Code for char T
0x09, 0x01, 0x00, 0xFF, 0x01, 0x01, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x01, 0x01, 0xFF, 0x01, 0x01, 0x00,  // Code for char U
0x09, 0x01, 0x00, 0x07, 0x00, 0x39, 0x00, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x39, 0x00, 0x07, 0x00, 0x01, 0x00,  // Code for char V
0x09, 0x0F, 0x00, 0x71, 0x00, 0x80, 0x03, 0x70, 0x00, 0x0C, 0x00, 0x70, 0x00, 0x80, 0x03, 0x71, 0x00, 0x0F, 0x00,  // Code for char W
0x09, 0x01, 0x02, 0x03, 0x03, 0x85, 0x02, 0x48, 0x00, 0x30, 0x00, 0x48, 0x00, 0x85, 0x02, 0x03, 0x03, 0x01, 0x02,  // Code for char X
0x09, 0x01, 0x00, 0x03, 0x00, 0x0D, 0x02, 0x10, 0x02, 0xE0, 0x03, 0x10, 0x02, 0x0D, 0x02, 0x03, 0x00, 0x01, 0x00,  // Code for char Y
0x08, 0x00, 0x00, 0x03, 0x03, 0x81, 0x02, 0x41, 0x02, 0x31, 0x02, 0x09, 0x02, 0x05, 0x02, 0x03, 0x03, 0x00, 0x00,  // Code for char Z
0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x1F, 0x01, 0x10, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00,  // Code for char [
0x09, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x80, 0x00, 0x00, 0x01,  // Code for char BackSlash
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x01, 0x10, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ]
0x08, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x02, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,  // Code for char ^
0x09, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08,  // Code for char _
0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char `
0x08, 0x00, 0x00, 0xC0, 0x01, 0x28, 0x02, 0x28, 0x02, 0x28, 0x02, 0x28, 0x02, 0xF0, 0x01, 0x00, 0x02, 0x00, 0x00,  // Code for char a
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x10, 0x01, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0xF0, 0x01, 0x00, 0x00,  // Code for char b
0x08, 0x00, 0x00, 0xF0, 0x01, 0x10, 0x01, 0x08, 0x02, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0x18, 0x01, 0x00, 0x00,  // Code for char c
0x08, 0x00, 0x00, 0xF0, 0x01, 0x10, 0x01, 0x08, 0x02, 0x08, 0x02, 0x11, 0x01, 0xFF, 0x03, 0x00, 0x02, 0x00, 0x00,  // Code for char d
0x08, 0x00, 0x00, 0xF0, 0x01, 0x50, 0x01, 0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0x50, 0x01, 0x70, 0x01, 0x00, 0x00,  // Code for char e
0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x02, 0xFE, 0x03, 0x11, 0x02, 0x11, 0x02, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00,  // Code for char f
0x08, 0x00, 0x00, 0xF0, 0x0C, 0x90, 0x10, 0x08, 0x11, 0x08, 0x11, 0x90, 0x10, 0xF8, 0x0F, 0x08, 0x00, 0x00, 0x00,  // Code for char g
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x10, 0x02, 0x08, 0x00, 0x08, 0x02, 0xF0, 0x03, 0x00, 0x02, 0x00, 0x00,  // Code for char h
0x07, 0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 0x08, 0x02, 0xF9, 0x03, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,  // Code for char i
0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x10, 0x08, 0x10, 0x08, 0x10, 0xF9, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char j
0x08, 0x00, 0x00, 0x01, 0x02, 0xFF, 0x03, 0x40, 0x02, 0x60, 0x00, 0x98, 0x02, 0x08, 0x03, 0x08, 0x02, 0x00, 0x00,  // Code for char k
0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0xFF, 0x03, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,  // Code for char l
0x09, 0x08, 0x02, 0xF8, 0x03, 0x10, 0x02, 0x08, 0x00, 0xF8, 0x03, 0x10, 0x02, 0x08, 0x00, 0xF8, 0x03, 0x00, 0x02,  // Code for char m
0x08, 0x00, 0x00, 0x08, 0x02, 0xF8, 0x03, 0x10, 0x02, 0x08, 0x00, 0x08, 0x02, 0xF0, 0x03, 0x00, 0x02, 0x00, 0x00,  // Code for char n
0x08, 0x00, 0x00, 0xF0, 0x01, 0x10, 0x01, 0x08, 0x02, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0xF0, 0x01, 0x00, 0x00,  // Code for char o
0x08, 0x00, 0x00, 0x08, 0x10, 0xF8, 0x1F, 0x10, 0x11, 0x08, 0x12, 0x08, 0x02, 0x10, 0x01, 0xF0, 0x01, 0x00, 0x00,  // Code for char p
0x08, 0x00, 0x00, 0xF0, 0x01, 0x10, 0x01, 0x08, 0x02, 0x08, 0x12, 0x10, 0x11, 0xF8, 0x1F, 0x08, 0x10, 0x00, 0x00,  // Code for char q
0x09, 0x00, 0x00, 0x08, 0x02, 0x08, 0x02, 0xF8, 0x03, 0x10, 0x02, 0x08, 0x02, 0x08, 0x00, 0x08, 0x00, 0x10, 0x00,  // Code for char r
0x08, 0x00, 0x00, 0x30, 0x01, 0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0x90, 0x01, 0x00, 0x00,  // Code for char s
0x08, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0xFE, 0x01, 0x08, 0x02, 0x08, 0x02, 0x08, 0x02, 0x00, 0x01, 0x00, 0x00,  // Code for char t
0x08, 0x00, 0x00, 0x08, 0x00, 0xF8, 0x01, 0x00, 0x02, 0x00, 0x02, 0x08, 0x01, 0xF8, 0x03, 0x00, 0x02, 0x00, 0x00,  // Code for char u
0x09, 0x08, 0x00, 0x18, 0x00, 0x68, 0x00, 0x80, 0x01, 0x00, 0x02, 0x80, 0x01, 0x68, 0x00, 0x18, 0x00, 0x08, 0x00,  // Code for char v
0x09, 0x08, 0x00, 0xF8, 0x00, 0x08, 0x03, 0xE0, 0x00, 0x18, 0x00, 0xE0, 0x00, 0x08, 0x03, 0xF8, 0x00, 0x08, 0x00,  // Code for char w
0x08, 0x00, 0x00, 0x08, 0x02, 0x18, 0x03, 0xA8, 0x02, 0x40, 0x00, 0xA8, 0x02, 0x18, 0x03, 0x08, 0x02, 0x00, 0x00,  // Code for char x
0x09, 0x08, 0x00, 0x18, 0x10, 0x68, 0x10, 0x80, 0x09, 0x00, 0x06, 0x80, 0x01, 0x68, 0x00, 0x18, 0x00, 0x08, 0x00,  // Code for char y
0x08, 0x00, 0x00, 0x18, 0x02, 0x08, 0x03, 0x88, 0x02, 0x48, 0x02, 0x28, 0x02, 0x18, 0x02, 0x08, 0x03, 0x00, 0x00   // Code for char z
};

const font_t COURIER_9X13={9,13,32,122,Courier9x13};

#endif	/* COURIER_H */

