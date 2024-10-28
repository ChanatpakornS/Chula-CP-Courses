`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/10/2024 01:47:58 PM
// Design Name: 
// Module Name: SinglePulser
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


module singlePulser(
        output reg d,
        input wire pushed, clk
    );
    
    reg state;
    
    initial state = 0;
    
    always @(posedge clk) begin
        d=0;
        case({pushed,state})
            2'b00: ;
            2'b01: state=0;
            2'b10: begin state=1; d=1; end // 1 only one clock
            2'b11: ;
        endcase
    end
endmodule
