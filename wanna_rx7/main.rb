# rx7gates #
# Copyright (c) 2022 - @joaovitor-eu #

def main
    loop do
        puts"Rom-State"
        puts()
        puts"[ 1 ] - SNES"
        puts()
        print"> "
        consoleSelect = gets.chomp.to_i
        system"cls"
        if consoleSelect == 1
            system("cls");
            snesConsole
            break
        end
    end
end
def snesConsole
    loop do
        system"cls"
        puts"[ 1 ] - #"
        puts()
        print"> "
        gameNumber = gets.chomp.to_i
        if gameNumber == 1
            snesGames
            break
        end
    end
end
def snesGames
    loop do
        system"cls"
        puts"[ 1 ] - 3 Ninjas Kick Back"
        puts"[ 2 ] - 7th Saga"
        puts"[ 3 ] - 90 Minutes - European Prime Goal"
        puts"[ 4 ] - 2020 Super Baseball"
        puts()
        print("> ")
        gameName = gets.chomp.to_i
        system"cls"
        if gameName == 1
            system"cd roms && curl https://download1505.mediafire.com/vapaudxep0jg/0o6cjjv053ftfp9/3+Ninjas+Kick+Back+%28U%29.smc --output 3-Ninjas-Kick-Back.smc"
            system"cls"
            system"explorer roms"
        end
        if gameName == 2
            system"cd roms && curl https://download941.mediafire.com/t4w0mkefyvgg/zyjmku7r4a6dfcj/7th+Saga%2C+The+%28U%29+%5B%21%5D.smc --output 7th-saga.smc"
            system"cls"
            system"explorer roms"
        end
        if gameName == 3
            system"cd roms && curl https://download1501.mediafire.com/q279qbd6s38g/iwoggv7qu6baixn/90+Minutes+-+European+Prime+Goal+%28E%29+%5B%21%5D.smc --output 90-MinutesEPG.smc"
            system"cls"
            system"explorer roms"
        end
        if gameName == 4
            system"cd roms && curl https://download1593.mediafire.com/asjb8qaofspg/u1a0b3z54pzk2mo/2020+Super+Baseball+%28U%29.smc --output 2020-Super-Baseball.smc"
            system"cls"
            system"explorer roms"
        end
    end
end

# main function # 
main