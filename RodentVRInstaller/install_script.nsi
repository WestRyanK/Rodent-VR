Name "RodentVR"
OutFile "RodentVRInstaller.exe"

Unicode True
RequestExecutionLevel admin
# Default install dir
InstallDir $PROGRAMFILES\RodentVR

# Indicate we want to allow the user to change the install dir
Page directory
Page instfiles

UninstPage uninstConfirm
UninstPage instfiles

Section
	# Copy Files to Install Dir
	SetOutPath $INSTDIR
	File /r ".\Files\*"
	#File "myfile.txt"
	
	# Write uninstall registry keys for Windows so it shows up in Add/Remove Programs
	WriteRegStr HKLM "SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\RodentVR" "DisplayName" "RodentVR"
	WriteRegStr HKLM "SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\RodentVR" "UninstallString" '"$INSTDIR\uninstaller.exe"'
	WriteRegDWORD HKLM "SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\RodentVR" "NoModify" 1
	WriteRegDWORD HKLM "SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\RodentVR" "NoRepair" 1
	
	# Create an uninstaller
	WriteUninstaller $INSTDIR\uninstaller.exe


	# Create desktop and start menu shortcuts
	CreateShortcut "$SMPROGRAMS\RodentVR.lnk" "$INSTDIR\RodentVR.exe"
	CreateShortcut "$DESKTOP\RodentVR.lnk" "$INSTDIR\RodentVR.exe"
SectionEnd

Section "Uninstall"
	DeleteRegKey HKLM "SOFTWARE\Microsoft\Windows\CurrentVerison\Uninstall\RodentVR"
	Delete $INSTDIR\uninstaller.exe
	RMDir /r $INSTDIR

	# Delete desktop and start menu shortcuts
	Delete "$SMPROGRAMS\RodentVR.lnk"
	Delete "$DESKTOP\RodentVR.lnk" 
SectionEnd
