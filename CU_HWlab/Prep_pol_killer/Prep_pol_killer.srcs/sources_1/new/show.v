`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/08/2024 12:29:31 AM
// Design Name: 
// Module Name: show
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


module show(
        output reg [15:0] display,
        input wire [3:0]data[3:0],
        input wire [1:0] idx,
        input wire clk
    );
    
    reg [1:0]i;
    
    always @(posedge clk) begin
        for(i = 0; i < idx; i = i +1) begin
            data[i + 1] = data[i];
       end
    end
endmodule
