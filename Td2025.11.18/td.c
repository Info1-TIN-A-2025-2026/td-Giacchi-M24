#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>

 double kmh_to_ms(double v_kmh);
 double reaction_distance(double speed, double reaction_time);
 double break_distance(double speed, double deceleration);
 double total_stop_distance(double speed, double reaction_time, double deceleration);
 bool   stop_before_obstacle(double stop_distance, double obstacle_distance);

int main(int argc, const char *argv[])
{
	double speed_Kmh = 3.6;
	double deceleration = 7.5;
	double reaction_time = 1;
	double obstacle_distance = 70;
	double speed = kmh_to_ms(speed_Kmh);
	double dist_tot = total_stop_distance(speed, reaction_time, deceleration);
	printf("%lf", dist_tot);
	
	return 0;
}

 double kmh_to_ms(double v_kmh){
	 assert(v_kmh >= 0);
	 return v_kmh / 3.6;
 }

 double reaction_distance(double speed, double reaction_time){
	 assert(speed >= 0);
	 assert(reaction_time >= 0);
	 return speed * reaction_time;
 }

 double break_distance(double speed, double deceleration){
	 assert(speed >= 0);
	 assert(deceleration >= 0);
	 return pow(speed, 2) / 2 * deceleration; // d
 }

 double total_stop_distance(double speed, double reaction_time, double deceleration){
	assert(speed >= 0);
	assert(reaction_time >= 0);
	assert(deceleration >= 0);
	return break_distance(speed, deceleration) + reaction_distance(speed, reaction_time);
 }

 bool   stop_before_obstacle(double stop_distance, double obstacle_distance){
	
 }