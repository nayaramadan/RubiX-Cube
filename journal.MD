
@naya on RubiX Cube · about 11 hours ago

1h 1m 56s logged

(2) Research!
After chatting to a few more people, I’ve come up with a lot of general notes.
A lot of these notes include:

What I might need
How some things might work, like MCUs on a PCB
Issues that I might face, like wiring
Questions that I have that were either clarified within the notes (or not, which I’ll do research on tomorrow!
And finally, a summarized list of the hardware I might need
This list is somewhat inaccurate I realize after chatting to more people about what I could potentially do with the LEDs.
I know I definitely have to get a breadboard and esp32 asap to test the project before creating an actual custom PCB (if time hopefully allows; may need to expedite shipping :( )
Tomorrow I’ll start a few notes on the LEDs and make a general diagram of what I need, then CAD everything.
So far, the list is as follows:
[] CAD
[] Addressable LEDs (Need to expand on this; in correspondence to the battery and how it connects to the microcontroller)
[] ESP32/Other MCU (After asking someone I don’t think a Pico 2 could handle this; however, I think it could be used for other features that could potentially expand this project later
[] Re-chargeable battery (coin batteries probably are too low of a voltage (not powerful enough) to work :( )
As for software:
[] Find a way to map the LEDs (more on this tomorrow)
[] Shuffles for the Rubiks cube (database hopefully)
[] Controller (via web app or if time allows, a physical controller (?))
Extras include:
[] Possible acrylic casing?
[] Research Adafruit and try to possibly reverse-engineer a few builds.
If anyone has any feedback or thoughts, lmk! I’d appreciate it :D


@naya on RubiX Cube · about 17 hours ago

1h 22m 48s logged

Research!
I did a lot of research today and ultimately came up with two ideas, after asking around in the outpost slack and KiCad discord (thank you guys sm :D ) aaand after checking, my whiteboard did not save… but I do have my work recorded on a lookout somewhere which I’ll definitely post a screenshot of if I find it later.
Anyway, the image attached has my planning doc. These are my thoughts as a researched the cube and how I would even approach it.
Ultimately, I came up with two solutions:
Solution 1: a CAD rubik’s cube with holes in each of the 54 cubes (for the leds) that wouldn’t move; either

1 : It would be controlled via a switch or turning the cube (difficult with wires; looked into slip rings and that probably wouldn’t work)
2 : A coded controller (a random software controller OR, if there’s the allotted time for it, an actual physical controller!) that registers user moves and responds thru the LEDs!!
Solution 2: A 4x4 display (or any square screen) and I would need 6 of them for each cube side. The cube wouldn’t turn, rather (the displays would also be touchscreen) the user would slide up or swipe on a row (I would program a 3x3 cube display for each side) and that would move the cube w/moving animations! Everything, just like in idea 1, would use an algorithm! Problem is, this would be a bit costly and wayyyy out of my expertise-zone (not like this project wasn’t already 😭) but also undoable in 13 days for Outpost.

I really liked Idea 1 and I decided to go with that, mainly for time constraints + expertise constraints.
Since I’m on a huuge time crunch, my idea is as follows:

Quickly create the CAD + PCB for the cube or use a brain (make the layout) + create a BOM
Submit ASAP to get funding in order to order parts ASAP!
Work on the software in the meantime, practice/learn where I’ll map everything so that it works fully and I’m able to build it as soon as it arrives!
See if the blinky board I recently built for Stasis arrives ASAP so that I can use the soldering kit from there (practice on the blinky board) before the actual component!
Hopefully chill with a cool RubiX Cube Project!
Thank you for reading :) Any, and I mean ANY suggestions will be looked over! I need all the knowledge I can get :) Thank you to everyone who provided information, you’re the best!
