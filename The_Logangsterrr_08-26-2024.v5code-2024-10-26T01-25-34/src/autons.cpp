#include "vex.h"

void default_constants(){
  chassis.set_drive_constants(12, 1.5, 0, 10, 0);
  chassis.set_heading_constants(12, .4, 0, 1, 0);
  chassis.set_turn_constants(8, .4, .03, 3, 15);
  chassis.set_swing_constants(12, .3, .001, 2, 15);
  chassis.set_drive_exit_conditions(1.5, 300, 2000);
  chassis.set_turn_exit_conditions(1, 000, 2000);
  chassis.set_swing_exit_conditions(1, 000, 2000);
}

void odom_constants(){
  default_constants();
  chassis.drive_max_voltage = 12;
  chassis.drive_settle_error = 3;
}

// void rightCode() {
//   chassis.drive_distance(28.4);
//   arm.spin(reverse);
//   wait(1, sec);
//   arm.stop(hold);
  

// }

void drive_test(){
  // five
  // claw.spin(reverse);
  chassis.drive_distance(5);
  // claw.stop();
  // chassis.drive_distance(-30);
  // chassis.left_swing_to_angle(-45, 10, 2, 0, 1000, 2, 0, 7, 0);
  // VL.set(true);
  // claw.stop();
  // chassis.drive_distance(-13);
  // chassis.left_swing_to_angle(-95, 10, 2, 0, 1000, 2, 0, 7, 0);
  // VL.set(false);
  // wait(.2, seconds);
  // chassis.turn_to_angle(-265);
  // chassis.left_swing_to_angle(-272, 10, 2, 0, 1000, 2, 0, 7, 0);
  // chassis.left_swing_to_angle(-92, 10, 2, 0, 1000, 2, 0, 7, 0);
  // chassis.drive_distance(-12);
  // chassis.drive_distance(8);
  // chassis.turn_to_angle(-272);
  // claw.spin(forward);
  // wait(.2, seconds);
  // chassis.drive_distance(18);
  // chassis.drive_distance(-14);
  // claw.stop();
  // chassis.turn_to_angle(25);
  // claw.spin(reverse);
  // chassis.drive_distance(23);
  // chassis.left_swing_to_angle(45, 10, 2, 0, 1000, 2, 0, 7, 0);
  // chassis.drive_distance(35);
  // chassis.turn_to_angle(180);
  // FlapsR.set(true);
  // claw.spin(Forward);
  // chassis.drive_distance(30);
  // chassis.drive_distance(-13);
  // FlapsR.set(false);

}

void turn_test(){
  // five
  // intake.spin(forward);
  chassis.drive_distance(5);
  //intake.stop();
  chassis.drive_distance(-30);
  chassis.left_swing_to_angle(-45, 10, 2, 0, 1000, 2, 0, 7, 0);
  // VL.set(true);
  chassis.drive_distance(-16);
  // VL.set(false);
  wait(.2, seconds);
  chassis.left_swing_to_angle(-88, 10, 2, 0, 1000, 2, 0, 7, 0);
  chassis.drive_distance(-12);
  chassis.drive_distance(8);
  chassis.turn_to_angle(-270);
  // intake.spin(reverse);
  chassis.drive_distance(8);
  chassis.drive_distance(-14);
  // intake.stop();
  chassis.turn_to_angle(25);
  // intake.spin(forward);
  chassis.drive_distance(23);
  chassis.left_swing_to_angle(45, 10, 2, 0, 1000, 2, 0, 7, 0);
  chassis.drive_distance(35);
  chassis.turn_to_angle(180);
  // FlapsR.set(true);
  // intake.spin(reverse);
  chassis.drive_distance(35);
  chassis.drive_distance(-10);
  // FlapsR.set(false);

}

void swing_test(){
  //Win point
  // intake.spinFor(forward, 360.0, degrees, true);
  chassis.drive_distance(18);
  chassis.left_swing_to_angle(44, 10, 2, 0, 1000, 2, 0, 7, 0);
  // intake.spin(reverse);
  wait(.2, seconds);
  chassis.drive_distance(13);
  chassis.drive_distance(-12);
  chassis.left_swing_to_angle(0, 10, 2, 0, 1000, 2, 0, 7, 0);
  // VL.set(true);
  wait(.2, seconds);
  chassis.drive_distance(-11);
  // VL.set(false);
  wait(.2, seconds);
  chassis.drive_distance(-6);
  chassis.left_swing_to_angle(-45, 10, 2, 0, 1000, 2, 0, 7, 0);
  chassis.drive_distance(-5);
  chassis.turn_to_angle(90);
  chassis.turn_to_angle(135);
  chassis.drive_distance(24);

}

void full_test(){
  // six
  // intake.spin(forward);
  chassis.drive_distance(5);
  //intake.stop();
  chassis.drive_distance(-30);
  chassis.left_swing_to_angle(-45, 10, 2, 0, 1000, 2, 0, 7, 0);
  // VL.set(true);
  chassis.drive_distance(-16);
  // VL.set(false);
  wait(.2, seconds);
  chassis.left_swing_to_angle(-88, 10, 2, 0, 1000, 2, 0, 7, 0);
  chassis.drive_distance(-12);
  chassis.drive_distance(8);
  chassis.turn_to_angle(-270);
  // intake.spin(reverse);
  chassis.drive_distance(8);
  chassis.drive_distance(-14);
  // intake.stop();
  chassis.turn_to_angle(25);
  // intake.spin(forward);
  chassis.drive_distance(60);
  chassis.turn_to_angle(170);
  // intake.spin(reverse);
  wait(.5, seconds);
  chassis.turn_to_angle(90);
  chassis.drive_distance(20);
  chassis.left_swing_to_angle(180, 10, 2, 0, 1000, 2, 0, 7, 0);
  // FlapsR.set(true);
  // intake.spin(reverse);
  chassis.drive_distance(35);
  chassis.drive_distance(-10);
  // FlapsR.set(false);

}

void odom_test(){
  chassis.set_coordinates(0, 0, 0);
  while(1){
    Brain.Screen.clearScreen();
    Brain.Screen.printAt(0,50, "X: %f", chassis.get_X_position());
    Brain.Screen.printAt(0,70, "Y: %f", chassis.get_Y_position());
    Brain.Screen.printAt(0,90, "Heading: %f", chassis.get_absolute_heading());
    Brain.Screen.printAt(0,110, "ForwardTracker: %f", chassis.get_ForwardTracker_position());
    Brain.Screen.printAt(0,130, "SidewaysTracker: %f", chassis.get_SidewaysTracker_position());
    task::sleep(20);
  }
}

void tank_odom_test(){
  odom_constants();
  chassis.set_coordinates(0, 0, 0);
  chassis.turn_to_point(24, 24);
  chassis.drive_to_point(24,24);
  chassis.drive_to_point(0,0);
  chassis.turn_to_angle(0);
}

void holonomic_odom_test(){
  odom_constants();
  chassis.set_coordinates(0, 0, 0);
  chassis.holonomic_drive_to_point(0, 18, 90);
  chassis.holonomic_drive_to_point(18, 0, 180);
  chassis.holonomic_drive_to_point(0, 18, 270);
  chassis.holonomic_drive_to_point(0, 0, 0);
}