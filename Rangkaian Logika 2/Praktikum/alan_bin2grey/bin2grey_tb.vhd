library ieee;
USE ieee.std_logic_1164.ALL;
ENTITY bin2grey_tb IS
END bin2grey_tb;
 
ARCHITECTURE behavior OF bin2grey_tb IS 
    COMPONENT bin2gray
    PORT(
         bin : IN  std_logic_vector(3 downto 0);
         G : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
   signal bin : std_logic_vector(3 downto 0) := (others => '0');
   signal G : std_logic_vector(3 downto 0);
 
BEGIN
   uut: bin2gray PORT MAP (
          bin => bin,
          G => G
        );
   stim_proc: process
   begin		
	bin <= "0000"; wait for 100 ns;
	bin <= "0001"; wait for 100 ns;
	bin <= "0010"; wait for 100 ns;
	bin <= "0011"; wait for 100 ns;
	bin <= "0100"; wait for 100 ns;
	bin <= "0101"; wait for 100 ns;
	bin <= "0110"; wait for 100 ns;
	bin <= "0111"; wait for 100 ns;
	bin <= "1000"; wait for 100 ns;
	bin <= "1001"; wait for 100 ns;
	bin <= "1010"; wait for 100 ns;
	bin <= "1011"; wait for 100 ns;
	bin <= "1100"; wait for 100 ns;
	bin <= "1101"; wait for 100 ns;
	bin <= "1110"; wait for 100 ns;
	bin <= "1111"; wait for 100 ns;
   end process;

END;
