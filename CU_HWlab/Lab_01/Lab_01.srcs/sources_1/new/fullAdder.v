`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/20/2024 01:18:49 PM
// Design Name: 
// Module Name: fullAdder
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

module fullAdder(
    output reg cout,
    output reg s,
    input a,
    input b,
    input cin
    );
    
    always @(a or b or cin)
        begin
            {cout, s} = a+b+cin ;
        end
endmodule

module fullAdder_noblock(
    input a,
    input b,
    input cin,
    output cout,
    output s
    );
    
    assign {cout, s} = a+b+cin;
    
endmodule
