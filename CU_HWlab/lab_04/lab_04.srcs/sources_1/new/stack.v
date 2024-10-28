`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/01/2024 08:40:23 AM
// Design Name: 
// Module Name: stack
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

/*
module Stack(
     output reg [7:0] addr , // Address
    output reg [7:0] dout, // Out
    input wire [7:0] din, // In
    input wire oe , // Output Enable
    input wire clk , we, reset
    ) ;
    
    reg [7:0] mem [255:0];
    
    initial begin
        dout = 0;
        addr = 0;
    end
    
    always @(posedge clk) begin
        if(we) begin // write enable = write d_input into RAM
            mem[addr] = din;
            addr = addr+1;
        end
        if(reset || (oe&&addr==0)) begin // reset button or empty stack
            dout = 0;
            addr = 0;
        end
        if(oe && addr > 0) begin // read from stack to d_output
            addr = addr-1;
            dout = mem[addr];
            mem[addr] = 0;
        end
    end
endmodule
*/

module Stack (
    output reg [7:0]dout,
    output reg [7:0]addr,
    input wire [7:0]din,
    input wire wen,
    input wire oen,
    input wire reset,
    input wire clk
);

    reg [7:0]mem[255:0];
    
    initial begin
        dout = 0;
        addr = 0;
    end
    
    always @(posedge clk) begin
        if(wen) begin
            mem[addr] = din;
            addr = addr + 1;
        end
        if(oen && addr > 0) begin
            addr = addr - 1;
            dout = mem[addr];
        end
        if(reset) begin
            addr = 0;
            mem[addr] = 0;
        end
    
    end 
endmodule