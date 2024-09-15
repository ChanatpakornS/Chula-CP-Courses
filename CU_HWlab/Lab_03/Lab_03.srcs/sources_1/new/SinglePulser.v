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


module SinglePulser(
        output reg outbtn,
        input wire d, clock
    );
    
    reg state;
    
    initial state = 0;
    initial outbtn = 0;
    
    always @(posedge clock)
        begin
            case({d,state})
                2'b10 :
                    begin
                        outbtn = 1;
                        state = 1;
                    end 
                2'b11 : 
                    begin
                        outbtn = 0;
                    end
                2'b01 : 
                    begin
                        state = 0;
                    end                     
            endcase
        end
endmodule
