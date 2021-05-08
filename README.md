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

## Project Setup
There are several steps you will need to follow in order to get this project up and running:
1. If you haven't done so already, download and install Visual Studio in order to compile the project and modify code: https://visualstudio.microsoft.com/downloads/
2. Also download and install Unreal Engine 4.25 or greater. You will need to download the Epic Games Store and install the Unreal Engine from there: https://www.unrealengine.com/en-US/download
3. The project uses the 'Runtime Transformer' plugin in the maze editor. Find it in the Unreal Engine Marketplace in the Epic Games Store, or find it here: https://www.unrealengine.com/marketplace/en-US/product/runtime-transformer-tool-gizmo
4. The project also requires NIDAQmx drivers to interface with National Instruments DAQ devices. Whether you plan on using these devices or not, you need to install the drivers so the project can open: https://www.ni.com/en-us/support/downloads/drivers/download.ni-daqmx.html
5. You will need to clone this git repository onto your local computer. This requires you to download git from here: https://git-scm.com/download/win
6. Once you've downloaded git, run 'git clone https://github.com/WestRyanK/Rodent-VR.git' using Git Bash or Command Prompt to clone (download) the repository.
7. Once the repo is downloaded, navigate to it (a folder called Rodent-VR) and go to the RodentVR folder within it.
8. Right click on RodentVR.uproject and select 'Generate Visual Studio project files'.
9. Open RodentVR.sln to open the project in Visual Studio.
10. In the Solution Explorer, right click on the RodentVR project and select 'Set as StartUp Project'.
11. At the dropdowns at the top, ensure the Solution Configuration is 'DebugGame Editor' and Solution Platform is 'Win64'.
12. Click 'Local Windows Debugger' to start the editor.

I recommend opening the project this way instead of simply clicking on the uproject file because it compiles the project with the latest changes, avoiding some mishaps that can happen if you open the uproject directly.



