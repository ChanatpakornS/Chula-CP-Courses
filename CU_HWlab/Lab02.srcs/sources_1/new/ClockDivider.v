`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/27/2024 01:54:27 PM
// Design Name: 
// Module Name: clockDivider
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


module clockDiv(
    input tclk,
    output tclkDiv
    );
    
    reg tclkDiv;
    
    initial
    begin 
        tclkDiv = 0;
    end;
    
    always @(posedge tclk)
    begin
        tclkDiv = ~tclkDiv;
    end
    
endmodule
