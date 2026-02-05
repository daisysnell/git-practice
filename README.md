# git-practice

Practicing with github
Hello Mission to Mars!



This is the readme. Formatting of text is as follows.
\# Largest Heading
\## Smaller heading
\### Smaller again
\*\*Bold Text\*\*
\*italics\*
>Quoted text


Coded text with back ticks before and after

```
Each time I edit in notepad, save then at command line:

git status

git add .

git commit -m "This is code text formatting"

```

Then git push origin main

# Setting up Git and Github
This took a lot longer than I thought and I had to get some help from my Mum. We looked up the steps on the internet because we couldn't find my README file and the key string wasn't being created. That was because the version of git is newer than the one in the instructions. 

## Story_1 Tinkercad practice
I had to make sure everything was connected to the right pins and the variables matched the right numbers. I **liked** the coding part and working out how to make it flash in different sequences. 

## Story_2 alternating flashing LED every second
This was interesting, coding was fun but the hooking up the wires was confusing at first but I copied the practice one. 

## Story_3 LEDs working in a pattern as motors 
I did a flow diagram to work out the pattern of the motors.
The crossed wires confused me at first but then I realised it was left and right pins/wheels. I decided to rename the red green yellow LEDs to enable, reverse and forwards and left and right so it would be easier to understand when checking the code. The flow diagram really helped then I could just type up the code from the picture.

## Story_4 change it to make it easier to understand
This was interesting, it was really cool to see how you can shorten such a long page of code to just a few lines in the loop. I didn't know how to do this before, so I had to get some help about functions and how to define the functions at the top of the code to use them inside the loop. I looked at a few webpages on C++ function code and then was able to deduce how to write functions and use them.

## Story_5 Make the rover snake left and right for 10 seconds total
I looked at the instructions in the manual and realised I had to add new ones to make it go left and right. First I made either the left or right enable 0, but then realised the rover would turn off one of the motors on either side every time and it would not snake but spin? So then I changed each enable on each side that wasn't meant to turn to 100 (because the lowest is 80 means it is just still moving, but I didn't want just so set it a little higher) I didn't include the millis code, but I'm going to look at this another day.

## Story_6 make the rover stop after 2 metres
I used the instructions and copied and pasted from story 6 and looked at Arduine IDE instructions to make new code for Story 6.  I worked out I had to declare the two new pins 3 and 2. I started out with 2 void setup and 2 void loop and I had to work out I had to put all the code under either and have one of each, one void one loop. It didn't work very well with the snaking code so I removed it and just had the goForwards function. I worked out 2 metres was count of 870 all together but I set it to 10 for testing the buttons.

## Story_7 Make the rover turn in a figure of eight once
I had to make the rover go out for 2 seconds, turn left for .85 seconds. It wasn't keep turning for 850 I realised it had to turn then move forwards again for 2 seconds, then turn left again then forwards and back into garage and same again going right.


## Story_8
I added the library and only use Arduino IDE not Tinkercad. Added a loop to avoid obstacles

## Story_9



## Story_10
I made a Mission to Mars poster to promote the work experience. I saved it as an image from Word.