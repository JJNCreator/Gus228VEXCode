
task main()
{
while (1 == 1)
{
  motor[port1] = vexRT[Ch4];
  if(vexRT[Btn6U] == 1) {
  	motor[port2] = 127;
  }
  else {
  	motor[port2] = -127;
  }
}


}
