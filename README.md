# Hack Pack Badge Pomodoro Timer

This firmware runs a Twilio HackBadge via Particle and uses the NeoPixels to render a Pomodoro Timer

## Usage

Call the Particle start() method to start the timer and the stop() method to stop it.  
Right now it doesn't matter what you pass to them as arguments...

## TODO

Make it possible to change the timer duration with the argument to the start function

Have the timer fire events when it changes state (short break, long break, back to work etc)