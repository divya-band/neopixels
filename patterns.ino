

// Pattern 1 - Black 
    void pattern1() {

for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 0,0,0);//black
} 
    strip.show();
    }
    
// Pattern 2 - White 
    void pattern2() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 255,255,255);//white
} 
    strip.show();
    }
      
    
// Pattern 3 - Red 
    void pattern3() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 255,0,0);//red
} 
    strip.show();
    }
    
// Pattern 4 - Orange
    void pattern4() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 255,128,0);//orange
} 
    strip.show();
    }
     

// Pattern 5 - Yellow 
    void pattern5() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 255,255,0);//yellow
} 
    strip.show();
    }
     
    
// Pattern 6 - Green
    void pattern6() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 0,255,0);//green
} 
    strip.show();
    }
       

// Pattern 7 - Blue 
    void pattern7() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 0,0,255);//blue
} 
    strip.show();
    }
      
    
// Pattern 8 - Purple
    void pattern8() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 127,0,255);//purple
} 
    strip.show();
    }

// Pattern 9 - Rainbow 
    void pattern9() {
        strip.setPixelColor(0, strip.Color(255, 0, 255)); // Red
        strip.setPixelColor(1, strip.Color(255, 255, 0)); // Yellow
        strip.setPixelColor(2, strip.Color(0, 255, 0)); // Green
        strip.setPixelColor(3, strip.Color(0, 0, 255)); // Blue
        strip.setPixelColor(4, strip.Color(127, 0, 255)); // Purple
    strip.show();
    }

// Pattern 10 - Black 
    void pattern10() {
      for (int i = 0; i < 5; i++){
  strip.setPixelColor(i, 0,0,0);//black
} 
    strip.show();
    }
