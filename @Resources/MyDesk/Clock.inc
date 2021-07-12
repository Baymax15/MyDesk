[Variables]
 ; setting for 24hour clock.
 ; set to 1 for 24h, 0 for 12h
 hour24=0
 ; offset (make space for wednesday ;-;)
 padding=210
 ; color setting, updates on middle mouse click on skin
 variant=#activeVariant#


; Day
[DayStringStyle]
 FontFace=Dancing Script
 FontWeight=700
 FontSize=50
 StringAlign=Center
 AntiAlias=1
 FontColor=[#[#activeStyle][#variant]]66
 DynamicVariables=1

[TimeStringStyle]
 AntiAlias=1
 StringAlign=Center
 FontFace=COMPUTER Robot
 FontColor=[#[#activeStyle][#variant]]FF
 FontSize=50
 FontWeight=700
 DynamicVariables=1
 InlinePattern=".*"
 InlineSetting=CharacterSpacing | 1 | 1
 
[TimeStringStyle2]
 InlinePattern2="[MeasureAMPM]"
 InlineSetting2=Size | 30
 InlinePattern3="[MeasureAMPM]"
 InlineSetting3=Weight | 900

[DateStringStyle]
 AntiAlias=1
 StringAlign=Center
 FontFace=Black Ops one
 FontColor=[#[#activeStyle][#variant]]FF
 FontSize=25
 FontWeight=500
 DynamicVariables=1
