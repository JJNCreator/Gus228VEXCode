
task main()
{
	//This will make a continuous loop
	while (1 == 1)
	{
		//Drivetrain
		motor[port1] = vexRT[Ch2];
		motor[port2] = vexRT[Ch2];
		motor[port9] = vexRT[Ch3] * -1;
		motor[port10] = vexRT[Ch3];
		////////////

		//If up button on right shoulder of the controller is enabled
		if(vexRT[Btn6U] == 1) {
			motor[port3] = 50;
		}
		//If down button on right shoulder of the controller is enabled
		else if (vexRT[Btn6D] == 1) {
			motor[port3] = -50;
		}
		//Otherwise
		else {
			motor[port3] = 0;
		}
	}
}
