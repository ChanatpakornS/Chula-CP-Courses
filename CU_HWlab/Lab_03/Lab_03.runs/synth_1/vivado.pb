
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
create_project: 2

00:00:062

00:00:062	
595.9182	
240.105Z17-268h px� 
�
Command: %s
1870*	planAhead2�
�read_checkpoint -auto_incremental -incremental Z:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/utils_1/imports/synth_1/system.dcpZ12-2866h px� 
�
;Read reference checkpoint from %s for incremental synthesis3154*	planAhead2^
\Z:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/utils_1/imports/synth_1/system.dcpZ12-5825h px� 
T
-Please ensure there are no constraint changes3725*	planAheadZ12-7989h px� 
a
Command: %s
53*	vivadotcl20
.synth_design -top system -part xc7a35tcpg236-1Z4-113h px� 
:
Starting synth_design
149*	vivadotclZ4-321h px� 
z
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
	Synthesis2	
xc7a35tZ17-347h px� 
j
0Got license for feature '%s' and/or device '%s'
310*common2
	Synthesis2	
xc7a35tZ17-349h px� 
D
Loading part %s157*device2
xc7a35tcpg236-1Z21-403h px� 
Z
$Part: %s does not have CEAM library.966*device2
xc7a35tcpg236-1Z21-9227h px� 

VNo compile time benefit to using incremental synthesis; A full resynthesis will be run2353*designutilsZ20-5440h px� 
�
�Flow is switching to default flow due to incremental criteria not met. If you would like to alter this behaviour and have the flow terminate instead, please set the following parameter config_implementation {autoIncr.Synth.RejectBehavior Terminate}2229*designutilsZ20-4379h px� 
o
HMultithreading enabled for synth_design using a maximum of %s processes.4828*oasys2
2Z8-7079h px� 
a
?Launching helper process for spawning children vivado processes4827*oasysZ8-7078h px� 
N
#Helper process launched with PID %s4824*oasys2
28408Z8-7075h px� 
�
%s*synth2{
yStarting RTL Elaboration : Time (s): cpu = 00:00:03 ; elapsed = 00:00:03 . Memory (MB): peak = 1445.488 ; gain = 449.637
h px� 
�
.redeclaration of ANSI port '%s' is not allowed7382*oasys2	
tclkDiv2R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/ClockDivider.v2
288@Z8-11121h px� 
�
Sextra semicolon is not allowed here in this dialect; use SystemVerilog mode instead6975*oasys2R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/ClockDivider.v2
338@Z8-10714h px� 
�
.redeclaration of ANSI port '%s' is not allowed7382*oasys2

segments2S
OZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/hexto7segment.v2
288@Z8-11121h px� 
�
'%s' has already been declared5139*oasys2
b32L
HZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/system.v2
698@Z8-8881h px� 
�
%second declaration of '%s' is ignored7413*oasys2
b32L
HZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/system.v2
698@Z8-11152h px� 
�
)previous declaration of '%s' is from here4683*oasys2
b32L
HZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/system.v2
698@Z8-6826h px� 
�
5undeclared symbol '%s', assumed default net type '%s'7502*oasys2
b22
wire2L
HZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/system.v2
738@Z8-11241h px� 
�
synthesizing module '%s'%s4497*oasys2
system2
 2L
HZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/system.v2
238@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2
ClockDivider2
 2R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/ClockDivider.v2
238@Z8-6157h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
ClockDivider2
 2
02
12R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/ClockDivider.v2
238@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2
SinglePulser2
 2Z
VZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/sources_1/new/SinglePulser.v2
238@Z8-6157h px� 
�
-case statement is not full and has no default155*oasys2Z
VZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/sources_1/new/SinglePulser.v2
358@Z8-155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
SinglePulser2
 2
02
12Z
VZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/sources_1/new/SinglePulser.v2
238@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2

BCDCounter2
 2X
TZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/sources_1/new/BCDCounter.v2
238@Z8-6157h px� 
�
-case statement is not full and has no default155*oasys2X
TZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/sources_1/new/BCDCounter.v2
408@Z8-155h px� 
�
-case statement is not full and has no default155*oasys2X
TZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/sources_1/new/BCDCounter.v2
458@Z8-155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2

BCDCounter2
 2
02
12X
TZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.srcs/sources_1/new/BCDCounter.v2
238@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2
quadSevenSeg2
 2R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/quadSevenSeg.v2
238@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2
hexTo7Segment2
 2S
OZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/hexto7segment.v2
238@Z8-6157h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
hexTo7Segment2
 2
02
12S
OZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/hexto7segment.v2
238@Z8-6155h px� 
�
8referenced signal '%s' should be on the sensitivity list567*oasys2
num02R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/quadSevenSeg.v2
698@Z8-567h px� 
�
8referenced signal '%s' should be on the sensitivity list567*oasys2
num12R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/quadSevenSeg.v2
698@Z8-567h px� 
�
8referenced signal '%s' should be on the sensitivity list567*oasys2
num22R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/quadSevenSeg.v2
698@Z8-567h px� 
�
8referenced signal '%s' should be on the sensitivity list567*oasys2
num32R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/quadSevenSeg.v2
698@Z8-567h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
quadSevenSeg2
 2
02
12R
NZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/quadSevenSeg.v2
238@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
system2
 2
02
12L
HZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab02.srcs/sources_1/new/system.v2
238@Z8-6155h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[15]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[14]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[13]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[12]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[11]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[10]2
systemZ8-7129h px� 
n
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[9]2
systemZ8-7129h px� 
n
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[8]2
systemZ8-7129h px� 
�
%s*synth2{
yFinished RTL Elaboration : Time (s): cpu = 00:00:04 ; elapsed = 00:00:04 . Memory (MB): peak = 1554.965 ; gain = 559.113
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
;
%s
*synth2#
!Start Handling Custom Attributes
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:04 ; elapsed = 00:00:04 . Memory (MB): peak = 1554.965 ; gain = 559.113
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished RTL Optimization Phase 1 : Time (s): cpu = 00:00:04 ; elapsed = 00:00:04 . Memory (MB): peak = 1554.965 ; gain = 559.113
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Netlist sorting complete. 2

00:00:002
00:00:00.0012

1554.9652
0.000Z17-268h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
>

Processing XDC Constraints
244*projectZ1-262h px� 
=
Initializing timing engine
348*projectZ1-569h px� 
v
Parsing XDC File [%s]
179*designutils25
1C:/Users/Chanatpakorn/Downloads/Basys3_Master.xdc8Z20-179h px� 

Finished Parsing XDC File [%s]
178*designutils25
1C:/Users/Chanatpakorn/Downloads/Basys3_Master.xdc8Z20-178h px� 
�
�Implementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project23
1C:/Users/Chanatpakorn/Downloads/Basys3_Master.xdc2
.Xil/system_propImpl.xdcZ1-236h px� 
H
&Completed Processing XDC Constraints

245*projectZ1-263h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Netlist sorting complete. 2

00:00:002

00:00:002

1659.5592
0.000Z17-268h px� 
l
!Unisim Transformation Summary:
%s111*project2'
%No Unisim elements were transformed.
Z1-111h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
 Constraint Validation Runtime : 2

00:00:002
00:00:00.0072

1659.5592
0.000Z17-268h px� 

VNo compile time benefit to using incremental synthesis; A full resynthesis will be run2353*designutilsZ20-5440h px� 
�
�Flow is switching to default flow due to incremental criteria not met. If you would like to alter this behaviour and have the flow terminate instead, please set the following parameter config_implementation {autoIncr.Synth.RejectBehavior Terminate}2229*designutilsZ20-4379h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
Finished Constraint Validation : Time (s): cpu = 00:00:07 ; elapsed = 00:00:09 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
D
%s
*synth2,
*Start Loading Part and Timing Information
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
8
%s
*synth2 
Loading part: xc7a35tcpg236-1
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Loading Part and Timing Information : Time (s): cpu = 00:00:07 ; elapsed = 00:00:09 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
H
%s
*synth20
.Start Applying 'set_property' XDC Constraints
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:00:07 ; elapsed = 00:00:09 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:07 ; elapsed = 00:00:10 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
:
%s
*synth2"
 Start RTL Component Statistics 
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Detailed RTL Component Info : 
h p
x
� 
(
%s
*synth2
+---Adders : 
h p
x
� 
F
%s
*synth2.
,	   4 Input    4 Bit       Adders := 4     
h p
x
� 
F
%s
*synth2.
,	   2 Input    2 Bit       Adders := 1     
h p
x
� 
+
%s
*synth2
+---Registers : 
h p
x
� 
H
%s
*synth20
.	                4 Bit    Registers := 4     
h p
x
� 
H
%s
*synth20
.	                2 Bit    Registers := 1     
h p
x
� 
H
%s
*synth20
.	                1 Bit    Registers := 43    
h p
x
� 
'
%s
*synth2
+---Muxes : 
h p
x
� 
F
%s
*synth2.
,	   3 Input    4 Bit        Muxes := 8     
h p
x
� 
F
%s
*synth2.
,	   2 Input    4 Bit        Muxes := 4     
h p
x
� 
F
%s
*synth2.
,	   4 Input    4 Bit        Muxes := 2     
h p
x
� 
F
%s
*synth2.
,	   4 Input    1 Bit        Muxes := 16    
h p
x
� 
F
%s
*synth2.
,	   2 Input    1 Bit        Muxes := 8     
h p
x
� 
F
%s
*synth2.
,	   3 Input    1 Bit        Muxes := 8     
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
=
%s
*synth2%
#Finished RTL Component Statistics 
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
6
%s
*synth2
Start Part Resource Summary
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
p
%s
*synth2X
VPart Resources:
DSPs: 90 (col length:60)
BRAMs: 100 (col length: RAMB18 60 RAMB36 30)
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Finished Part Resource Summary
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
E
%s
*synth2-
+Start Cross Boundary and Area Optimization
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
H
&Parallel synthesis criteria is not met4829*oasysZ8-7080h px� 
b
+design %s has port %s driven by constant %s3447*oasys2
system2
dp2
1Z8-3917h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[15]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[14]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[13]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[12]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[11]2
systemZ8-7129h px� 
o
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[10]2
systemZ8-7129h px� 
n
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[9]2
systemZ8-7129h px� 
n
9Port %s in module %s is either unconnected or has no load4866*oasys2
sw[8]2
systemZ8-7129h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:09 ; elapsed = 00:00:12 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
@
%s
*synth2(
&Start Applying XDC Timing Constraints
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Applying XDC Timing Constraints : Time (s): cpu = 00:00:12 ; elapsed = 00:00:15 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
4
%s
*synth2
Start Timing Optimization
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2
}Finished Timing Optimization : Time (s): cpu = 00:00:12 ; elapsed = 00:00:15 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
3
%s
*synth2
Start Technology Mapping
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2~
|Finished Technology Mapping : Time (s): cpu = 00:00:12 ; elapsed = 00:00:15 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
-
%s
*synth2
Start IO Insertion
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
?
%s
*synth2'
%Start Flattening Before IO Insertion
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
B
%s
*synth2*
(Finished Flattening Before IO Insertion
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
6
%s
*synth2
Start Final Netlist Cleanup
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Finished Final Netlist Cleanup
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2x
vFinished IO Insertion : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
=
%s
*synth2%
#Start Renaming Generated Instances
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Renaming Generated Instances : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
:
%s
*synth2"
 Start Rebuilding User Hierarchy
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Rebuilding User Hierarchy : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Start Renaming Generated Ports
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Renaming Generated Ports : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
;
%s
*synth2#
!Start Handling Custom Attributes
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
8
%s
*synth2 
Start Renaming Generated Nets
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Renaming Generated Nets : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
9
%s
*synth2!
Start Writing Synthesis Report
h p
x
� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
/
%s
*synth2

Report BlackBoxes: 
h p
x
� 
8
%s
*synth2 
+-+--------------+----------+
h p
x
� 
8
%s
*synth2 
| |BlackBox name |Instances |
h p
x
� 
8
%s
*synth2 
+-+--------------+----------+
h p
x
� 
8
%s
*synth2 
+-+--------------+----------+
h p
x
� 
/
%s*synth2

Report Cell Usage: 
h px� 
0
%s*synth2
+------+-----+------+
h px� 
0
%s*synth2
|      |Cell |Count |
h px� 
0
%s*synth2
+------+-----+------+
h px� 
0
%s*synth2
|1     |BUFG |     2|
h px� 
0
%s*synth2
|2     |LUT1 |    21|
h px� 
0
%s*synth2
|3     |LUT2 |    18|
h px� 
0
%s*synth2
|4     |LUT3 |     8|
h px� 
0
%s*synth2
|5     |LUT4 |    28|
h px� 
0
%s*synth2
|6     |LUT5 |     8|
h px� 
0
%s*synth2
|7     |LUT6 |    19|
h px� 
0
%s*synth2
|8     |FDRE |    61|
h px� 
0
%s*synth2
|9     |IBUF |    11|
h px� 
0
%s*synth2
|10    |OBUF |    12|
h px� 
0
%s*synth2
+------+-----+------+
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
�
%s*synth2�
�Finished Writing Synthesis Report : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h px� 
l
%s
*synth2T
R---------------------------------------------------------------------------------
h p
x
� 
a
%s
*synth2I
GSynthesis finished with 0 errors, 0 critical warnings and 10 warnings.
h p
x
� 
�
%s
*synth2�
Synthesis Optimization Runtime : Time (s): cpu = 00:00:10 ; elapsed = 00:00:16 . Memory (MB): peak = 1659.559 ; gain = 559.113
h p
x
� 
�
%s
*synth2�
�Synthesis Optimization Complete : Time (s): cpu = 00:00:14 ; elapsed = 00:00:18 . Memory (MB): peak = 1659.559 ; gain = 663.707
h p
x
� 
B
 Translating synthesized netlist
350*projectZ1-571h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Netlist sorting complete. 2

00:00:002
00:00:00.0012

1659.5592
0.000Z17-268h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
Q
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02
0Z31-138h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Netlist sorting complete. 2

00:00:002

00:00:002

1659.5592
0.000Z17-268h px� 
l
!Unisim Transformation Summary:
%s111*project2'
%No Unisim elements were transformed.
Z1-111h px� 
V
%Synth Design complete | Checksum: %s
562*	vivadotcl2

c0c66e71Z4-1430h px� 
C
Releasing license: %s
83*common2
	SynthesisZ17-83h px� 

G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
372
252
22
0Z4-41h px� 
L
%s completed successfully
29*	vivadotcl2
synth_designZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
synth_design: 2

00:00:162

00:00:212

1659.5592

1059.016Z17-268h px� 
c
%s6*runtcl2G
ESynthesis results are not added to the cache due to CRITICAL_WARNING
h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Write ShapeDB Complete: 2

00:00:002
00:00:00.0032

1659.5592
0.000Z17-268h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2N
LZ:/home/csap/Chula-CP-Courses/CU_HWlab/Lab_03/Lab_03.runs/synth_1/system.dcpZ17-1381h px� 
�
Executing command : %s
56330*	planAhead2W
Ureport_utilization -file system_utilization_synth.rpt -pb system_utilization_synth.pbZ12-24828h px� 
\
Exiting %s at %s...
206*common2
Vivado2
Tue Sep 10 15:34:05 2024Z17-206h px� 


End Record