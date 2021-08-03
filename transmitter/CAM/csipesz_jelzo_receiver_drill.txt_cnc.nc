(G-CODE GENERATED BY FLATCAM v8.994 - www.flatcam.org - Version Date: 2020/11/7)

(Name: csipesz_jelzo_receiver_drill.txt_cnc)
(Type: G-code from Geometry)
(Units: MM)

(Created on Tuesday, 03 August 2021 at 18:07)

(This preprocessor is the default preprocessor used by FlatCAM.)
(It is made to work with MACH3 compatible motion controllers.)


(TOOLS DIAMETER: )
(Tool: 1 -> Dia: 0.8128)
(Tool: 2 -> Dia: 0.9652)
(Tool: 3 -> Dia: 3.1999936)

(FEEDRATE Z: )
(Tool: 1 -> Feedrate: 60.0)
(Tool: 2 -> Feedrate: 60.0)
(Tool: 3 -> Feedrate: 60.0)

(FEEDRATE RAPIDS: )
(Tool: 1 -> Feedrate Rapids: 1500)
(Tool: 2 -> Feedrate Rapids: 1500)
(Tool: 3 -> Feedrate Rapids: 1500)

(Z_CUT: )
(Tool: 1 -> Z_Cut: -1.0)
(Tool: 2 -> Z_Cut: -1.0)
(Tool: 3 -> Z_Cut: -1.0)

(Tools Offset: )
(Tool: 1 -> Offset Z: 0.0)
(Tool: 2 -> Offset Z: 0.0)
(Tool: 3 -> Offset Z: 0.0)

(Z_MOVE: )
(Tool: 1 -> Z_Move: 2.0)
(Tool: 2 -> Z_Move: 2.0)
(Tool: 3 -> Z_Move: 2.0)

(Z Toolchange: 15 mm)
(X,Y Toolchange: 0.0000, 0.0000 mm)
(Z Start: None mm)
(Z End: 0.5 mm)
(X,Y End: None mm)
(Steps per circle: 64)
(Preprocessor Excellon: default)

(X range:    3.4468 ...   43.6294  mm)
(Y range:    2.3345 ...   14.4958  mm)

(Spindle Speed: 0 RPM)
G21
G90
G94

G01 F60.00

M5
G00 Z15.0000
T1
G00 X0.0000 Y0.0000                
M6
(MSG, Change to Tool Dia = 0.8128 ||| Total drills for tool T1 = 17)
M0
G00 Z15.0000

G01 F60.00
M03
G00 X29.3345 Y6.4694
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X21.7145 Y6.4694
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X11.5545 Y6.4694
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X3.9294 Y6.4745
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X3.9294 Y3.9345
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X11.5545 Y9.0094
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X11.5545 Y11.5494
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X21.7145 Y9.0094
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X21.7145 Y11.5494
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X21.7145 Y14.0894
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X29.3345 Y14.0894
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X29.3345 Y11.5494
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X29.3345 Y9.0094
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X36.9545 Y11.5494
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X36.9545 Y9.0094
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X36.9545 Y6.4694
G01 Z-1.0000
G01 Z0
G00 Z2.0000
G00 X42.0294 Y3.9345
G01 Z-1.0000
G01 Z0
G00 Z2.0000
M05
G00 Z0.50

