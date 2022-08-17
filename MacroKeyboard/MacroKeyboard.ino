#include <SimpleKeypad.h>
#include "Keyboard.h"

const byte nb_rows = 4;
const byte nb_cols = 4;
char key_chars[nb_rows][nb_cols] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[nb_rows] = {9, 8, 7, 6};
byte colPins[nb_cols] = {5, 4, 3, 2};

SimpleKeypad kp1((char*)key_chars, rowPins, colPins, nb_rows, nb_cols);

void setup() {
  Keyboard.begin();
}

void loop() {
  char key = kp1.getKey();
  if (key) {
    switch(key){
      case '1':
        // Insert what happens if 1 is pressed
        
        break;

      case '2':
        // Insert what happens if 2 is pressed
        
        break;

      case '3':
        // Insert what happens if 3 is pressed
        
        break;

      case 'A':
        // Insert what happens if A is pressed
        
        break;

      case '4':
        // Insert what happens if 4 is pressed
        
        break;
        
      case '5':
        // Insert what happens if 5 is pressed
        
        break;

      case '6':
        // Insert what happens if 6 is pressed
        
        break;

      case 'B':
        // Insert what happens if B is pressed
        
        break;

      case '7':
        // Insert what happens if 7 is pressed
        
        break;
        
      case '8':
        // Insert what happens if 8 is pressed
        
        break;
      
      case '9':
        // Insert what happens if 9 is pressed
        
        break;

      case 'C':
        // Insert what happens if C is pressed
        
        break;
      
      case '*':
        // Insert what happens if * is pressed
        
        break;

      case '0':
        // Insert what happens if 0 is pressed
        
        break;

      case '#':
        // Insert what happens if # is pressed
        openBrowser();
        break;

      case 'D':
        // Insert what happens if D is pressed
        openZoom();
        break;
        
      default:
        Keyboard.press(key);
    }
  }
  delay(100);
  Keyboard.releaseAll();
}

// Sample usage:

void openBrowser(){
  // Browser app has the shorcut key Ctrl + Shift + Alt + Up
    Keyboard.press(128); // Keyboard decimal value for Ctrl
    Keyboard.press(129); // Shift
    Keyboard.press(130); // Alt
    Keyboard.press(218); // Up Arrow
}

void openZoom(){
  // Zoom app has the shortcut key Ctrl + Shift + Alt + Down
    Keyboard.press(128); // Ctrl
    Keyboard.press(129); // Shift
    Keyboard.press(130); // Alt
    Keyboard.press(217); // Down
}
