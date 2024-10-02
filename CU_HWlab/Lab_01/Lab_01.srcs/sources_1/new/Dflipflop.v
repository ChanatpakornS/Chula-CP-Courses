`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/20/2024 02:10:35 PM
// Design Name: 
// Module Name: Dflipflop
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


module Dflipflop(
    output q,
    input clock,
    input nreset,
    input d
    );
    
reg q;

always @(posedge clock , nreset)
    begin
        if (nreset==1)
            q=d;
        else
            q=0;
    end
    
endmodule

