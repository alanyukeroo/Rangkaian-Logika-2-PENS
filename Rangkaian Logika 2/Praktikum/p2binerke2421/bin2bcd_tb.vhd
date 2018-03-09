LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY bin2bcd_tb IS
END bin2bcd_tb;
ARCHITECTURE behavior OF bin2bcd_tb IS 
    COMPONENT bin2bcd
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         w : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal w : std_logic_vector(3 downto 0);
BEGIN
   uut: bin2bcd PORT MAP (
          a => a,
          w => w
        );
   stim_proc: process
   begin		
      wait for 5 ns;	
		a(0) <= not a(0);
   end process;

	 stim_proc1: process
   begin		
      wait for 10 ns;	
		a(1) <= not a(1);
   end process;
	
	 stim_proc2: process
   begin		
      wait for 20 ns;	
		a(2) <= not a(2);
   end process;
	
	 stim_proc3: process
   begin		
      wait for 40 ns;	
		a(3) <= not a(3);
   end process;
END;
