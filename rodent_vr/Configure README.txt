;To change settings for the maze, change the file called Game.ini located in 'Saved/Config/Windows/'.



[StartupActions]
bAddPacks=False
[/Game/RodentVR.RodentVR_C]


;#################################################
; NIDAQ Configuration
;#################################################

; Device Paths
;------------------------------------------------

; The following entries are the paths to individual
; channels/lines for the NIDAQmx devices. You can
; figure out the paths of the devices by using NI MAX.
; Device names are like 'Dev1/port1/line2'. You can
; specify multiple lines by doing 'Dev1/port1/line0:2'
; This specifies lines 0-2.


AirPuffLeftDeviceName=Dev1/port1/line0
AirPuffRightDeviceName=Dev1/port1/line1
Reward1DeviceName=Dev1/port1/line0
Reward2DeviceName=Dev1/port1/line1

; Air Puffer Configuration
;--------------------------

; When the rodent runs into the wall, we will puff air on
; its whiskers coming from the direction of the wall.
; If the wall is on the left, we puff with the left device,
; if it is on the right, we puff with the right device.
; But if the rodent is directly facing the wall, we puff with
; both of the devices at once. 'AirPuffFrontAngle' determines
; the largest angle the rodent can face away from the wall and
; still be considered facing the wall head on. It is measured in degrees.

AirPuffFrontAngle=30.0

; Reward Trigger Configuration
;------------------------------

; Each time a rodent enters a trigger region, we can dispense a
; reward substance to them. These settings determine which
; reward substance to dispense for each trigger, and the length
; of time a substance should be dispensed.
;
; Like Materials, Triggers are referenced by their ordering in the
; config file. Comments located above each trigger specify which
; one it is referring to.
;
; Each trigger has 3 properties:
;    IsEnabled - If true, then when the rodent enters the trigger
;                region, a reward is dispensed.
;    Reward    - Refers to Reward 1 or Reward 2. The possible values
;                are 1 and 2.
;    Duration  - The length of time (measured in seconds) to dispense
;                the reward when the rodent enters the trigger region.
;                If Duration is 0, then reward will continue to be
;                dispensed until rodent leaves region.
;                If Duration is greater than zero and the rodent leaves
;                the region before the full time has elapsed, the reward
;                system will stop dispensing.

; First Corridor Section
Maze_01_Triggers=(IsEnabled=false, Reward=1, Duration=1.0)
; Second Corridor Section
Maze_01_Triggers=(IsEnabled=true, Reward=1, Duration=2.0)
; Third Corridor Section
Maze_01_Triggers=(IsEnabled=true, Reward=2, Duration=0.0)

; Start Wing
Maze_02_Triggers=(IsEnabled=false, Reward=2, Duration=2.0)
; Left Wing
Maze_02_Triggers=(IsEnabled=true, Reward=1, Duration=0.5)
; Right Wing
Maze_02_Triggers=(IsEnabled=true, Reward=2, Duration=2.0)


;#################################################
; Mouse Configuration
;#################################################

; Mouse Device Instance Paths
; The following entries are the Device Instance Paths for
; the computer mice that will be used to read input from 
; the ball.
; To retrieve the Device Instance Path of a computer mouse,
; do the following:
; 1. Open Control Panel > Device Manager
; 2. Open Mice and other pointing devices
; 3. Find the mouse you want to identify under the list of mice.
;    Protip: Unplug all the other mice to be sure you're looking
;            at the correct one.
; 4. Right-click > Properties > Details
; 5. On the drop down Property menu, select "Device Instance Path"
; 6. Right-click and copy the entire path into the config file
;    as shown below
; MouseADeviceName=HID\VID_0461&PID_4D15\6&31D2D65F&0&0000
;
; MouseA controls forward motion
; MouseB controls rotational motion
;
; Protip: As long as you consistently plug the computer mice into
; the same usb ports, they will keep the same Device 
; Instance Paths. You can unplug them, just be sure to plug
; it back into the same port. A mouse plugged into usb port 1
; will have a different Device Instance Path than the same
; mouse plugged into usb port 2, for example.

MouseADeviceName=HID\VID_0461&PID_4D15\6&31D2D65F&0&0000
MouseBDeviceName=HID\VID_046D&PID_C016\6&D2A8B0A&0&0000


; Mouse velocity multipliers
; You may want to tweak how fast the rodent can rotate the
; camera or walk forward. The movement values reported by
; the computer mice are multiplied by the following values
; before moving the camera.
; MouseA controls forward motion
; MouseB controls rotational motion

MouseAMultiplier=-0.5
MouseBMultiplier=0.25






;#################################################
; Start Up Maze
;#################################################

; This is the maze that is loaded upon start up.
; The following are the available options:
;    maze_01_level (The Long Corridor)
;    maze_02_level (The Y Shaped Maze)

InitialMaze=maze_02_level

;#################################################
; Maze Materials
;#################################################

; The order of material assignment determines which part of
; the maze to apply it to. For example, for maze_01_level, 
; the first material will cover the first pillars, the second 
; material will cover the second pillars, etc. Explanation of 
; object to be covered are given before each entry.
;
; The following are the available materials:
;    checkers_large
;    checkers_medium
;    checkers_small
;    stripes_large
;    stripes_small
;    dots_1
;    dots_2
;    green
;    blue
;    cyan
;    black
;    white
;    gray


; Materials for maze_01_level (The Long Corridor)
;------------------------------------------------

; Material for First Pillars
Maze_01_Materials=green
; Material for Second Pillars
Maze_01_Materials=cyan
; Material for Third Pillars
Maze_01_Materials=blue
; Material for Maze Exterior (You don't see it, but this has to be here)
Maze_01_Materials=gray
; Material for First Corridor Section
Maze_01_Materials=checkers_large
; Material for Third Corridor Section
Maze_01_Materials=dots_1
; Material for Second Corridor Section
Maze_01_Materials=stripes_small



; Materials for maze_02_level (The Y)
;------------------------------------

; Material for Right Wing
Maze_02_Materials=dots_01
; Material for Left Wing
Maze_02_Materials=stripes_small
; Material for Start Wing
Maze_02_Materials=checkers_large


