library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity binary2gray is
    Port ( sel: in std_logic ;
    data : in  STD_LOGIC_VECTOR (3 downto 0);
           data_out : inout  STD_LOGIC_VECTOR (3 downto 0));
end binary2gray;

architecture Behavioral of binary2gray is
begin
process(sel,data,data_out)
begin
if (sel='1') then -- converting binary to gray
data_out(3) <=data(3);
data_out(2) <=data(3) xor data (2);
data_out(1) <=data(2) xor data (1);
data_out(0) <=data(1) xor data (0);
else -- converting gray to binary 
data_out(3) <= data(3);
data_out(2) <= data(2) xor data_out(3);
data_out(1) <= data(1) xor data_out(2);
data_out(0) <= data(0) xor data_out(1);
end if ;
end process ;
end Behavioral;