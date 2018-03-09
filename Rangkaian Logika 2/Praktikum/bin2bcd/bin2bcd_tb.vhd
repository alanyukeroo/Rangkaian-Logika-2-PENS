library ieee;
use ieee.std_logic_1164.ALL;
ENTITY bin2bcd_tb is

end bin2bcd_tb;

architecture behaviour of bin2bcd_tb is
	component bin2bcd
	port(
			bin: in std_logic_vector(3 downto 0);
			bcd: out std_logic_vector(3 downto 0)
			);
	end component;
	
	signal bin : std_logic_vector(3 downto 0) := (others => '0');
	signal bcd : std_logic_vector(3 downto 0);

BEGIN
	uut: bin2bcd PORT MAP(
	bin => bin,
	bcd => bcd
	);
	
	stim_proc:process
	begin
		wait for 5 ns;
		bin(0) <= not bin(0);
		end process;	
	stim_proc1:process
	begin
		wait for 10 ns;
		bin(1) <= not bin(1);
		end process;	
	stim_proc2:process
	begin
		wait for 20 ns;
		bin(2) <= not bin(2);
		end process;
		
	stim_proc3:process
	begin
		wait for 40 ns;
		bin(3) <= not bin(3);
		end process;	

END;
