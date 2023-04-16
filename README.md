# Car_Collisions

A program is created using C++ to predict the collision of cars and calculate the time of the crash.

This program is coded to work on a 2D plane to predict the collision of two cars. The make, model, year of manufacturing, x coordinate, y coordinate of the vehicle, v_x, i.e. the velocity in x and v_y, i.e. velocity in the y direction, are stored in a class as private members. Various functions have been implemented, like accelerate_px, which increases speed in the positive x direction, and accelerate_nx, which increases the speed in the negative x direction. A similar analogy is there for the brake_px and brake_ny. The move method can change coordinates using velocities in the respective order. Also, the time of collision is calculated by using relative velocities and relative coordinates.

For use, first create the two cars by providing their make, model, year, initial coordinates, and initial velocities. Then use the detect_collision function to detect whether a collision happens or not. Then use the time_to_collision function to predict the time after which the collision will occur. You can play with coordinates and velocities using the accelerate, brake and move functions.
