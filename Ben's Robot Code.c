#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop, driveRight)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port10,           ,             tmotorVex393_HBridge, openLoop, driveLeft)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while (1==1) {
	//motor[port1] = vexRT[Ch2] + vexRT[Ch3];
	//motor[port2] = vexRT[Ch2] + vexRT[Ch3];
	//motor[port9] = vexRT[Ch2] + vexRT[Ch3];
	//motor[port10] = vexRT[Ch2] + vexRT[Ch3];

	//motor[port1] = vexRT[Ch3 + Ch2];
	//motor[port2] = vexRT[Ch2 + Ch3];
	//motor[port9] = vexRT[Ch2 + Ch3];
	//motor[port10] = vexRT[Ch2 + Ch3];

	motor[port1] = vexRT[Ch2];
	motor[port2] = vexRT[Ch2];
	motor[port9] = vexRT[Ch3] * -1;
	motor[port10] = vexRT[Ch3];

}


}
