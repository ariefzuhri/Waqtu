[Variables]
FontColor=255,255,255,255
FontColorHi=255,255,255,255
FontSize=12
FontMediumSize=12
FontDebugSize=10
FontDebugMediumSize=12
FontDateSize=14
FontFace=Raleway Medium
ColorText=255,255,255,255
ColorTextHi=255,255,255,255
SolidWhite=255,255,255,255
SolidOffWhite=242,242,242,255
SolidGreyText=178,178,178,255
FadeTime=500

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop

[ChamFG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground1

[ChamFG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground2

[ChamBG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Background1

[ChamBG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Background2

[DesktopBG1]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamBG1
Timestep=25

[DesktopBG2]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamBG2
Timestep=25

[DesktopFG1]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamFG1
Timestep=25

[DesktopFG2]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamFG2
Timestep=25

[MainBackground]
DynamicVariables=1
SolidColor=[DesktopBG1]FF

[StyleWhiteText]
FontColor=#SolidWhite#

[StyleLeftAlign]
StringAlign=LeftCenter

[StyleRightAlign]
StringAlign=RightCenter

[StyleCenterAlign]
StringAlign=CenterCenter

[StyleMediumText]
DynamicVariables=1
AntiAlias=1
FontFace=#FontFace#
FontSize=#FontMediumSize#
;FontColor=#SolidWhite#
FontColor=[DesktopFG2]FF
;SolidColor=47,47,47,255
StringAlign=Left
ClipString=0

[StyleSmallText]
DynamicVariables=1
AntiAlias=1
FontFace=#FontFace#
FontSize=#FontSize#
;FontColor=#SolidGreyText#
FontColor=[DesktopFG1]FF
;SolidColor=47,47,47,255
StringAlign=Left
ClipString=0

[DebugMediumText]
DynamicVariables=1
AntiAlias=1
FontFace=#FontFace#
FontSize=#FontDebugMediumSize#
FontColor=[DesktopFG2]FF
SolidColor=[DesktopBG1]FF
ClipString=0

[DebugSmallText]
DynamicVariables=1
AntiAlias=1
FontFace=#FontFace#
FontSize=#FontDebugSize#
FontColor=[DesktopFG1]FF
SolidColor=[DesktopBG1]FF
ClipString=0

;-------------------------------

[PrayTime]
DynamicVariables=1
StringAlign=RIGHT
StringEffect=SHADOW
FontEffectColor=0,0,0,80
FontColor=[DesktopFG1]FF
FontFace=Raleway Light
FontSize=#FontSize#
AntiAlias=1

[PrayTimeHigh]
DynamicVariables=1
StringAlign=RIGHT
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,80
FontColor=[DesktopFG2]FF
FontFace=Raleway Black
FontSize=#FontSize#
AntiAlias=1

[PrayTitle]
DynamicVariables=1
StringAlign=RIGHT
StringEffect=SHADOW
FontEffectColor=0,0,0,80
FontColor=[DesktopFG1]FF
FontFace=#FontFace#
FontSize=#FontSize#
AntiAlias=1
;SolidColor=47,47,47,255

[PrayTitleHigh]
DynamicVariables=1
StringStyle=BOLD
StringAlign=RIGHT
StringEffect=SHADOW
FontEffectColor=0,0,0,80
FontColor=[DesktopFG2]FF
FontFace=#FontFace#
FontSize=#FontSize#
AntiAlias=1
;SolidColor=47,47,47,255

[HijriDate]
DynamicVariables=1
StringStyle=BOLD
StringAlign=RIGHT
StringEffect=SHADOW
FontEffectColor=0,0,0,80
FontColor=[DesktopFG2]FF
FontFace=#FontFace#
FontSize=#FontDateSize#
AntiAlias=1
;SolidColor=47,47,47,255

