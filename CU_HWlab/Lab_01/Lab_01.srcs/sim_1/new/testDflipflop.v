`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/20/2024 02:14:05 PM
// Design Name: 
// Module Name: testDflipflop
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


module testDFlipFlop();

reg clock, nreset, d;
Dflipflop D1(q,clock,nreset,d);

always
    #10 clock=~clock;

initial

begin
    //$dumpfile("testDFlipFlop.dump");
    //$dumpvars(1,D1);
    #0 d=0;
    clock=0;
    nreset=0;
    #50 nreset=1;
    #23 nreset=0;
    #23 nreset=1;
    #12 nreset=0;
    #18 nreset=1;
    #64 nreset=0;
    #30 nreset=1;
    #1000 $finish;
end
always
#8 d=~d;

    
endmodule