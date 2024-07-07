#include "mbed.h"

// Create a DigitalIn object for the button
DigitalIn button(PC_13);

// Initialize a counter variable
int button_press_count = 0;

int main() {
   
    button.mode(PullUp);

    
    while (true) {
        // Check if the button is pressed (active low)
        if (button == 0) {
            // Increment the button press count
            button_press_count++;
            
            // Print the total number of button presses
            printf("Button pressed %d times\n", button_press_count);
            
        
            while (button == 0) {
                
                ThisThread::sleep_for(50ms);
            }
        }
    }
}