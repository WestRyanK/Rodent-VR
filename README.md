# Rodent-VR
RodentVR is a system developed to assist researchers in performing experiments with lab rats in a virtual reality environment. RodentVR improves upon the current state of the art in this area by providing a system which is easy to use and modify while still allowing for extensive customization of mazes and other parameters. The system is developed in Unreal Engine 4, and interfaces with National Instruments DAQ devices for reward/punishment dispensing. Movement is registered by placing the rodent on top of a large styrofoam ball and placing two computer mice on the sides of the ball to track its rotation. Rodent behavior is tracked during the simulation and is saved in a CSV file. This CSV file can be visualized within RodentVR, or imported into a spreadsheet program for custom analysis.

### Main Menu
RodentVR strives to be both powerfully configurable and user-friendly.

![Main Menu](/Images/rodent_vr_01.png?raw=true "Main Menu")

### Settings Menu
Many settings options exist:
* Saving and loading settings files for quickly altering configurations.
* Creating playlists of mazes which will play one after another and advance based on custom criteria.
* Assigning air puffer DAQ devices to puff air on the rodent's whiskers when it approaches walls to simulate impact.
* Assigning computer mice to register ball movement and modifying the simulation's sensitivity to movement.
* Adding DAQ devices which can dispense rewards/punishments such as sugar water, morphine, etc.
* Modifying graphics settings to adapt to the capabilities of your PC.

![Settings Menu](/Images/rodent_vr_02.png?raw=true "Settings Menu")

### Maze Editor
Mazes can be customized for specific experiments:
* Several different maze shapes exist: corridor, Y maze, square, circle.
* Walls and floors of mazes can be painted with different colors or textures including both built-in patterns and user uploaded images.
* Objects such as cubes, cones, spheres, cylinders, and figurines can be placed in the maze, resized, and textured to provide reference points or obstacles for the rodent.
* Trigger regions can be added to the maze. Entering and exiting regions is logged in the behavior file and trigger regions can be configured to both play auditory cues as well as dispense rewards for a certain amount of time.
* Nose pokes - holes in the wall of the maze which act like trigger regions when the rodent puts its nose in the hole - can be added and customized like trigger regions.
* Starting position and orientation can be defined.
* Conditions for when to advance to the next maze in the playlist can be configured on a per-maze basis. Conditions include a certain amount of time passing or the rodent entering certain trigger regions a specified number of times.

![Maze Editor](/Images/rodent_vr_03.png?raw=true "Maze Editor")
