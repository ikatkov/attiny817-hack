# HOW-TO modify ATtiny817 Xplained Mini devboard for external target

1. Make hardware modifications as shown here 
![](ATtiny817_Xplained_Mini_modification.jpg)
* Cut traces
* Remove 0 Ohm resistors
* Solder headers
* Solder wires

## Results
![](result.jpg)

Serial terminal works.</br>
Remote debugging works (in MPLABx only)

## For internal target MCU 
i.e. for ATTiny817 on the devboard, move all 3 jumpers to the right position. Notice the white dots.
![](internal-target.jpg)

## For external target MCU 
Move all 3 jumpers to the left position
![](external-target.jpg)

## Enclosure

![](enclosure.jpg)
See [enclosure.step](enclosure.step)