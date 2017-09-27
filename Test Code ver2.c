
task main()
{
//This will make a continuous loop
while (1 == 1)
{
  motor[port1] = vexRT[Ch2];
  motor[port2] = vexRT[Ch2];
  motor[port9] = vexRT[Ch3] * -1;
  motor[port10] = vexRT[Ch3];

  //If up button on right shoulder of the controller is enabled
  if(vexRT[Btn6U] == 0) {
  	motor[port3] = 50;
  }
  else {
  	motor[port3]= 0;
  }
}
}
