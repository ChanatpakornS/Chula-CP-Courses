`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/01/2024 01:07:14 PM
// Design Name: 
// Module Name: rom
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

    parameter n = 5;
    parameter b = 8;

module Rom( 
        output reg [15:0]hexDisplay,
        input wire [n-1:0]addr,
        input wire clk    
    );
    
    reg [n-1:0] mem [2**5-1:0];
    
    initial $readmemb("rom.mem", mem);
    
    always @(posedge clk) begin
        hexDisplay = {8'b00000000, mem[addr]};
    end
    
endmodule
