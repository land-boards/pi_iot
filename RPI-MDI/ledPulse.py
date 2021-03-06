#!/usr/bin/python

from Adafruit_PWM_Servo_Driver import PWM
import time

# ===========================================================================
# RPI-MDI Code
# ===========================================================================

# Initialise the PWM device using the default address
pwm = PWM(0x40, debug=False)

pwm.setPWMFreq(60)                        # Set frequency to 60 Hz
while (True):
	channel = 0
	duration = 150
	while duration < 600:
		pwm.setPWM(channel, 0, duration)
		time.sleep(.1)
		duration += 10
	channel = 6
	duration = 150
	while duration < 600:
		pwm.setPWM(channel, 0, duration)
		time.sleep(.1)
		duration += 10
	channel = 7
	duration = 150
	while duration < 600:
		pwm.setPWM(channel, 0, duration)
		time.sleep(.1)
		duration += 10
	channel = 8
	duration = 5
	while duration < 4096:
		pwm.setPWM(channel, 0, duration)
		time.sleep(.01)
		duration += 10
	channel = 9
	duration = 5
	while duration < 4096:
		pwm.setPWM(channel, 0, duration)
		time.sleep(.01)
		duration += 10
