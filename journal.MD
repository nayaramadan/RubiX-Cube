# RubiX-Cube
<img width="825" height="668" alt="First Message" src="Images\15CAD.png" />
<img width="825" height="668" alt="First Message" src="Images\14schematic.png" />
<img width="825" height="668" alt="First Message" src="Images\16WOKWISimulator.png" />
<img width="825" height="668" alt="First Message" src="Images\17Draft.png" />
<img width="825" height="668" alt="First Message" src="Images\18Draft.png" />

The RubiX-Cube is a physical modeled cube that makes traditional cubing more interesting and difficult, but cooler; it doesn't rely on physical turns! Instead, it relies on digital turns that get translated to the cube via LEDs. That's right, LEDs. The cube will be loaded with 54 addressable neopixels that correspond to user input. It will also come preloaded with shuffles for the user to get unlimited shuffles, without actually shuffling the cube, unlike a traditional cube! Think of it as an auto-shuffler.

Basically, the way that it works is through a physical aspect, electronic aspect, and software aspect.
The physical aspect includes the CAD and acrylic as the shell for the electronics to rest in. It resembles a Rubik's cube but contains holes for each 54 LEDs and divots on each row so you could tell each individual cube apart.

The components are listed above in the images!
_____________________________________________________________________________________________
<h2> Additional/Time-Accurate Journal(s) </h2>
Journal(s):
Stardance Journal: https://stardance.hackclub.com/projects/21632
Message Thread(s) (follow the links to OG message): https://hackclub.slack.com/archives/C0B04RP43TQ/p1782753392262719
PDF w/Summary + BOM: BOM+SUMMARY.pdf

<h2>Beginning the Project</h2>
_____________________________________________________________________________________________
<h3> Brainstorming <h3>
This was my original idea for the project:
<img width="825" height="668" alt="First Message" src="Images\11stmessage.png" />
I then started drafting many prompts to ask Gemini on how I'd even begin to approach the project:
<img width="825" height="668" alt="First Message" src="Images\21stideadrafts.png" />
I then realized that LEDs might be a bit too difficult, so I came up with two ideas (I unfortunately lost the sketches for these :C):
____

<h3> The Ideas </h3>
1- Continue to pursue the LED path. Code about 54 LEDs to respond to an input (somehow?) either through a sensor or something... (this caused me to consider idea2 a lot more originally) and make a cool glowing cube. Also! Wiring (spoiler alert: I thought) would be an issue.. 54 LEDs, how would you ever wire that? (its actually so simple lmao). I was thinking slip rings?
*OR*
2- Find a new path w/touchscreen displays for each 6 sides. This would resolve the input issue, and make a super cool cube. However, this is super expensive + time consuming + difficult to CAD a model for. 
____

<h3> The Decision (?) + Discussion </h3>
I ultimately decided to settle for option 2; although many wanted to see option 1 come to life, many also wanted to see option 2 (including me) and I was confused about how to approach idea 1. Additionally, I was already looking at examples (that were difficult to find), like the WOWCube on Amazon. ($400????)
So I ended up asking about idea 2 before pursuing.
<img width="825" height="668" alt="First Message" src="Images\3ideaasking.png" />
At this point, I was *somewhat* set in stone with my choice. I knew nothing other than I'd probably need an MCU, such as the ESP32. I did a lot of research on idea 2.
Or multiple ESP32s? How would I power all the displays? Raspberry PI??
Those are extremely unlikely to recieve funding. Plus would be a bit bulky for the project itself...
How would I approach this?

And then I got a response which ended up changing the projection of the project.
____

<h3> The Change </h3>
<img width="825" height="668" alt="First Message" src="Images\4ideachange.png" />
Maybe the pixel LEDs were still an option? They sounded really cool... the touchscreen issues that I'd have to deal with did not.
So, I ended up joining the KiCad Discord to ask for their opinions.
<img width="825" height="668" alt="First Message" src="Images\5ideachange.png" />
TFT and microcontroller? I was thinking to use a raspberry pi or arduino... mini computers.
<img width="825" height="668" alt="First Message" src="Images\6ideachange.png" />
<img width="825" height="668" alt="First Message" src="Images\7ideachange.png" />
Finally, I drew a diagram.
<img width="825" height="668" alt="First Message" src="Images\8whattheheeeehllllll.png" />
💀 Don't worry I was flamed for this respectfully.
But I also learned a lot from our conversation and got advice on what to do.
Then after a conversation on Slack, I was convinced.
I should do idea 1.
Idea 2 was elimated.
____

<h3> The New Research </h3>
I took more notes on eletrics after asking a few friends on Instagram, Discord, and Slack!
<img width="825" height="668" alt="First Message" src="Images\9notes.png" />
<img width="825" height="668" alt="First Message" src="Images\10notes.png" />
____
_____________________________________________________________________________________________
<h2>Building the Project</h2>
<h3> Time for CAD </h3>

I tried to do a draft and then a formal engineering isometric + top + front + side drawing.
<img width="825" height="668" alt="First Message" src="Images\11CAD.png" />
<img width="825" height="668" alt="First Message" src="Images\12CAD.png" />
I needed a sliding mechanism (or so I thought) to attach the top and bottom so I could load the inside with electronics.
After MANY revisions and advise I got on doing a dove-tail joint (which was a super cool idea), I decided to just go with screws as this is a test + I'm on a time constraint :C
One more idea I had before ultimately going with the screws:
<img width="825" height="668" alt="First Message" src="Images\13CAD.png" />

<h3> The Lock-In and Finish </h3>
I ultimately finished my list of electronics needed and made a mini schematic to lock in!
<img width="825" height="668" alt="First Message" src="Images\14schematic.png" />

I then finished up the CAD and research on materials... I switched to neopixels since they're addressable LEDs, basically meaning they could be programmed! Instead of doing the SK6812, I ultimately went for the individual ones due to spacing issues in the cube itself (a strip wouldn't work).
I ultimately decided on an ESP32 as my microcontroller (MCU). However, I now had an issue with the batteries. I decided to use one 5volt battery bank for the neopixels, and a 3.3v liPo battery for the ESP32 itself to avoid building a buck booster (time constraints, but this will definitely be in my v2.)

Additionally due to time constraints, I've decided to create a custom PCB via a perfboard or a perma-protoboard so that I could map things out onto a breadboard and continue from there. A custom JLCPCB is the goal in V2 of the project!

<h3> Finishing Touches </h3>
Ultimate CAD Final:
<img width="825" height="668" alt="First Message" src="Images\15CAD.png" />

(Almost) Ultimate Schematic Final:
<img width="825" height="668" alt="First Message" src="Images\14schematic.png" />

(Almost) Ultimate Wokwi Simulator:
<img width="825" height="668" alt="First Message" src="Images\16WOKWISimulator.png" />

And Ultimate Notes + BOM!
<img width="825" height="668" alt="First Message" src="Images\17Draft.png" />
<img width="825" height="668" alt="First Message" src="Images\18Draft.png" />


Thank you for reading :D
Estimated total hours: 17-19 (research)
_____________________________________________________________________________________________