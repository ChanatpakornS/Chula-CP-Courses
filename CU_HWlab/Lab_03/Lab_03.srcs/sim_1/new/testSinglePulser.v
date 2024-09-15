`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/10/2024 01:56:17 PM
// Design Name: 
// Module Name: testSinglePulser
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


module testSinglePulser();
    reg clock, d;
    wire out;
    
    SinglePulser sp(out, d, clock);
    
    initial begin
        clock = 0;
        d = 1;
    end
    
    always
        #8 clock = ~clock;
     
     initial 
        begin 
            #50 d = 0;
            #100; $finish;
            //... 
        end 
endmodule
