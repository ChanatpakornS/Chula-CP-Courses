`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/01/2020 11:50:42 PM
// Design Name: 
// Module Name: system
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


module system(
    output [6:0] seg,
    output dp,
    output [3:0] an,
    input [7:0] sw, // [7:4] for Higher num hex, [3:0] for Lower num hex
    input btnU, // push stack
    input btnC, // pop stack -> display top value in num3,num2 and stack size in num1,num0
    input btnD, // reset
    input clk
    );
    
    reg [3:0] num3,num2,num1,num0; // left to right

    wire an0,an1,an2,an3;
    assign an={an3,an2,an1,an0};
    
    ////////////////////////////////////////
    // Clock
    wire targetClk;
    wire [18:0] tclk;
    
    assign tclk[0]=clk;
    
    genvar c;
    generate for(c=0;c<18;c=c+1) begin
        clockDiv fDiv(tclk[c+1],tclk[c]);
    end endgenerate
    
    clockDiv fdivTarget(targetClk,tclk[18]);
    
    quadSevenSeg q7seg(seg,dp,an0,an1,an2,an3,num0,num1,num2,num3,targetClk);
    
    
     reg [7:0]rom[31:0];
    
    initial $readmemb("rom.mem", rom);
    
    always @(posedge clk)
    begin
        {num3,num2,num1,num0} = {8'b00000000, rom[sw[4:0]]};
    end 

endmodule