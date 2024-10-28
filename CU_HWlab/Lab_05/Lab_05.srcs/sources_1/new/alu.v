`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/22/2024 12:55:32 PM
// Design Name: 
// Module Name: alu
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


module alu(S,z,Cout,A,B,Cin,alu_ops);
output reg [31:0] S;
output z;
output reg Cout;
input [31:0] A;
input [31:0] B;
input Cin;
input [2:0] alu_ops;

assign z=~|S;

always @(A or B or alu_ops or Cin)
begin
	case (alu_ops)
	3'b001: {Cout,S}=A-B;
	3'b010: begin S=A|B;Cout=0; end
	3'b011: begin S=A&B;Cout=0; end
	3'b100: begin S=A^B;Cout=0; end
	3'b101: begin S=-A;Cout=0; end
	3'b110: begin S=~A;Cout=0; end
	3'b111: begin S=~B;Cout=0; end
	default: {Cout,S}=A+B+Cin;	
	endcase
end

endmodule