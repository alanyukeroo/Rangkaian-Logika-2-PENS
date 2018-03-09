library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity bin2bcd is
	port (a : in std_logic_vector(3 downto 0);
			w : out std_logic_vector(3 downto 0)
			);
end bin2bcd;

architecture Behavioral of bin2bcd is

begin
	with a select 
		w (3 downto 0) <= "0001" when "0001",
								"0010" when "0010",
								"0011" when "0011",
								"0100" when "0100",
								"1011" when "0101",
								"1100" when "0110",
								"1101" when "0111",
								"1111" when "1001",
								"0000" when others;
end Behavioral;

