LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

entity bin2bcd is
port(   bin : in std_logic_vector(3 downto 0);  --inputan binary
        bcd : out std_logic_vector(3 downto 0)  --inputan bcd
        );
end bin2bcd;

architecture gate_level of bin2bcd is 

begin

--xor gates.
--bcd(3) <= bin(3);
--bcd(2) <= bin(0) or (not(bin(1))and bin(2);
--bcd(1) <= bcd(0) or bcd(1)and(bcd(2);
--bcd(0) <= bin(1) xor bin(0);

bcd(3) <= bin(3);
bcd(2) <= bin(0) or (not(bin(1)) and bin(2));
bcd(1) <= bin(0) or (bin(1) and bin(2)) or (bin(1) and (not(bin(3))));
bcd(0) <= bin(0) or (bin(1) and bin(3)) or (bin(1) and bin(2));

end;