`timescale 1ns / 1ns

module shifting(
    output reg [15:0] display,
    input wire [15:0] din,
    input wire [1:0] n,
    input wire clk
);
    
    always @(posedge clk) begin
        
        case (n)
            2'b00: begin
                display[3:0] <= din[3:0];
                display[7:4] <= din[7:4];
                display[11:8] <= din[11:8];
                display[15:12] <= din[15:12];
            end
            2'b01: begin
                display[3:0] <= din[7:4];
                display[7:4] <= din[11:8];
                display[11:8] <= din[15:12];
                display[15:12] <= din[3:0];
            end
            2'b10: begin
                display[3:0] <= din[11:8];
                display[7:4] <= din[15:12];
                display[11:8] <= din[3:0];
                display[15:12] <= din[7:4];
            end
            2'b11: begin
                display[3:0] <= din[15:12];
                display[7:4] <= din[3:0];
                display[11:8] <= din[7:4];
                display[15:12] <= din[11:8];
            end
            default: begin
                display <= display; // maintain the current display value
            end
        endcase
    end
endmodule
