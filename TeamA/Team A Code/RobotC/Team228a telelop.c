#pragma config(Motor,  port1,           frontleft,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           frontright,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           backright,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           backleft,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1==1){
		//Drivetrain
		motor[backright] = vexRT[Ch2];
		motor[backleft] = vexRT[Ch3];
		motor[frontright] = vexRT[Ch2];
		motor[frontleft] = vexRT[Ch3];
		///////////////////////////////
	}


}
