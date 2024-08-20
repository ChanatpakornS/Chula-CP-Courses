`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/20/2024 01:30:54 PM
// Design Name: 
// Module Name: tester
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


module tester(

    );
    
    reg a,b,cin;
    wire cout,s,cout2,s2;
    
    fullAdder test(a,b,cin,cout,s);
    fullAdder_noblock test2(a,b,cin,cout2,s2);
    
    initial 
    begin
        $monitor("time %t: {%b %b} <- {%d %d %d}", $time,cout,s,a,b,cin);
        #0;
        a = 0;
        b = 0;
        cin = 0;
        #5;
        cin = 1;
        #5;
        b = 1;
        cin = 0;
        #5
        cin = 1;
        #5;
        a = 1;
        b = 0;
        cin = 0;
        #5
        b = 0;
        cin = 1;
        #5
        b = 1;
        cin = 0;
        #5
        a = 1;
        cin = 1;
        #100
        //...
        
        $finish;
    end
    
endmodule
