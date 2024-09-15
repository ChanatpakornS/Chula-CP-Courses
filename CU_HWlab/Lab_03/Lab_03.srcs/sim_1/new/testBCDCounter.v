`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/10/2024 01:09:18 PM
// Design Name: 
// Module Name: testBCDCounter
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module testBCDCounter();
    reg clock, up, down, set9, set0;
    wire [3:0] outputs;
    wire bout;
    wire cout;
    
    BCDCounter bcd(outputs, bout, cout, up, down, set9, set0, clock);
    
    always  
        #5 clock = ~clock;
    
    initial begin
        #0 up=1;down=0;set9=0;set0=0;clock=0;
        #120 up=0;down=1;set9=0;set0=0;
        #275 up=0;down=0;set9=1;set0=0;
        #285 up=0;down=0;set9=0;set0=1;
        #300; 
        $finish;
    end
    
endmodule
