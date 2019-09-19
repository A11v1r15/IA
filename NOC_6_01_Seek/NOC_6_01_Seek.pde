// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Seeking "vehicle" follows the mouse position

// Implements Craig Reynold's autonomous steering behaviors
// One vehicle "seeks"
// See: http://www.red3d.com/cwr/

Vehicle v;
Seek s;

void setup() {
  size(640, 360);
  colorMode(HSB);
  v = new Vehicle(width, 0);
  s = new Seek(0, 0);
}

void draw() {
  background(0);

  PVector mouse = new PVector(width/2, height/3);//(mouseX, mouseY);

  // Draw an ellipse at the mouse position
  fill(color(frameCount%256, 255, 255));
  noStroke();
  strokeWeight(2);
  ellipse(mouse.x, mouse.y, 48, 48);

  // Call the appropriate steering behaviors for our agents
  v.seek(mouse);
  v.update();
  v.display();
  
  s.seek(v);
  s.update();
  s.display();
}
