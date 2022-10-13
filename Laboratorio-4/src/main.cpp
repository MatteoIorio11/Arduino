#include <Arduino.h>
#include <LiquidCrystal_I2C.h> 

/* Wiring: SDA => A4, SCL => A5 */
/* I2C address of the LCD: 0x27 */
/* Number of columns: 20 rows: 4 */
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,20,4); 
/*
void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
    int i = 0;
    int k = 1;
    int z = 2;
    int u = 3;
    while(true){
        lcd.setCursor(i % 20, 0); // Set the cursor on the third column and first row.
        lcd.print("C");
        lcd.setCursor(k % 20, 0); // Set the cursor on the third column and first row.
        lcd.print("I");
        lcd.setCursor(z % 20, 0); // Set the cursor on the third column and first row.
        lcd.print("A");
        lcd.setCursor(u % 20, 0); // Set the cursor on the third column and first row.
        lcd.print("O");
        delay(50);
        lcd.clear();
        delay(50);
        i++;
        k++;
        z++;
        u++;
    }
}
*/