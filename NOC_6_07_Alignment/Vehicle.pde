// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Vehicle class

class Vehicle {

  // All the usual stuff
  PVector position;
  PVector velocity;
  PVector acceleration;
  float r;
  float maxforce;    // Maximum steering force
  float maxspeed;    // Maximum speed
  boolean type;

    // Constructor initialize all values
  Vehicle(float x, float y, boolean t) {
    position = new PVector(x, y);
    r = 12;
    maxspeed = random(1, 3);
    maxforce = 0.05;
    acceleration = new PVector(0, 0);
    velocity = new PVector(random(-1,1),random(-1,1));
    type = t;
  }

  void applyForce(PVector force) {
    // We could add mass here if we want A = F / M
    acceleration.add(force);
  }

  // Separation
  // Method checks for nearby vehicles and steers
  void align (ArrayList<Vehicle> vehicles) {
    PVector sum = new PVector();
    int count = 0;
    // For every boid in the system, check if it's too close
    for (Vehicle other : vehicles) {
      if(this.type != other.type){
        continue;
      }
      float d = PVector.dist(position, other.position);
      // If the distance is greater than 0 and less than an arbitrary amount (0 when you are yourself)
      if (d > 0) {
        sum.add(other.velocity);
        count++;            // Keep track of how many
      }
    }
    // Average -- divide by how many
    if (count > 0) {
      // Our desired vector is moving away maximum speed
      sum.div(count);
      sum.setMag(maxspeed);
      // Implement Reynolds: Steering = Desired - Velocity
      PVector steer = PVector.sub(sum, velocity);
      steer.limit(maxforce);
      applyForce(steer);
    }
  }



  // Method to update position
  void update() {
    // Update velocity
    velocity.add(acceleration);
    // Limit speed
    velocity.limit(maxspeed);
    position.add(velocity);
    // Reset accelertion to 0 each cycle
    acceleration.mult(0);
  }

  void display() {
    fill(frameCount%256, type ? 0 : 255, 255);
    noStroke();
    pushMatrix();
    translate(position.x, position.y);
    ellipse(0, 0, r, r);
    popMatrix();
  }

  // Wraparound
  void borders() {
    if (position.x < -r) position.x = width+r;
    if (position.y < -r) position.y = height+r;
    if (position.x > width+r) position.x = -r;
    if (position.y > height+r) position.y = -r;
  }
}
