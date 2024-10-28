`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/08/2024 01:21:50 PM
// Design Name: 
// Module Name: Decode
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


module Decode(
       output reg [3:0]num3,num2,num1,num0,
       output reg err,
       input wire [13:0] value,
       input wire clk
    );
 
    reg [3:0]k1,k2,k3,k4;
    
    always @(posedge clk) begin
        k1 = (value/1000) % 10;
        k2 = (value/100) % 10;
        k3 = (value/10) % 10;
        k4 = value %10;
        if(value > 9999) begin
            num3 = 0;
            num2 = 0;
            num1 = 0;
            num0 = 0;
            err = 1;
        end
        else begin
            err = 0;
            num3 = k1;
            num2 = k2;
            num1 = k3;
            num0 = k4;
        end
    end
    
endmodule
