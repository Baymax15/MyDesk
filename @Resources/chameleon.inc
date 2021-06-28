[ChameleonDesk]
 Measure=Plugin
 Plugin=Chameleon
 Type=Desktop
 OnChangeAction=[!RefreshGroup MyDesk]

[Light1]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Light2]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Light3]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Light4]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Dark1]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Dark2]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Dark3]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Dark4]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]

[Luminance]
 Measure=Plugin
 Plugin=Chameleon
 Parent=ChameleonDesk
 Color=#CURRENTSECTION#
 OnChangeAction=[!SetVariable #CURRENTSECTION# [&#CURRENTSECTION#]][!WriteKeyValue Variables #CURRENTSECTION# [&#CURRENTSECTION#] "#@#colors.inc"]
 IfAboveValue=0.5
 IfAboveAction=[!SetVariable activeStyle "dark"][!WriteKeyValue Variables activeStyle "dark" "#@#colors.inc"]
 IfBelowValue=0.6
 IfBelowAction=[!SetVariable activeStyle "light"][!WriteKeyValue Variables activeStyle "light" "#@#colors.inc"]