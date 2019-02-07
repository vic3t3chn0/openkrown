local menuengine = require "menuengine"
menuengine.settings.sndMove = love.audio.newSource("pick.wav", "static")
menuengine.settings.sndSuccess = love.audio.newSource("accept.wav", "static")


local text = "Nothing was selected."

-- Mainmenu
local mainmenu, optmenu

suit = require 'suit'
local Steam = require 'luasteam' 

Steam.init()

-- Start Game
local function start_game()
    text = "Start Game was selected!"
end

-- Options
local function options()
    text = "Options was selected!"
    optmenu:addEntry("Options builtin", optmenu)
    optmenu:addSep()
end


-- Quit Game
local function quit_game()
    text = "Quit Game was selected!"
end

function love.load()
    love.window.setMode(600,400)
    love.graphics.setFont(love.graphics.newFont(20))

    mainmenu = menuengine.new(200,100)
    mainmenu:addEntry("Start Game", start_game)
    mainmenu:addEntry("Options", options)
    mainmenu:addSep()
    mainmenu:addEntry("Quit Game", quit_game)
end


-- Create a ttf file font with a custom size of 20 pixels.
--mainFont = love.graphics.newFont("anyfont.ttf", 20)

local show_message = false

function love.update(dt)
    
    -- Put a button on the screen. If hit, show a message.
    if suit.Button("Hello, World!", 100,100, 300,30).hit then
        show_message = true
    end

    -- if the button was pressed at least one time, but a label below
    if show_message then
        suit.Label("How are you today?", 100,150, 300,30)
    end
    
    mainmenu:update()

end


function love.draw()
    love.graphics.clear()
    love.graphics.print(text)
    -- Setting the font so that it is used when drawning the string.
    --love.graphics.setFont(mainFont)
    
    local major, minor, revision, codename = love.getVersion()
    local str = string.format("Version %d.%d.%d - %s", major, minor, revision, codename)
    love.graphics.print(str, 20, 20)
    
    love.graphics.print('Ekron Open RPG', 500, 500)
    love.graphics.print('Kreatyve Studios', 400, 400)
    love.graphics.print('Kreatyve Studios Sound!', 400, 400)
    suit.draw()
    mainmenu:draw()
end

function love.keypressed(key, u)
   --Debug
   if key == "rctrl" then --set to whatever key you want to use
      debug.debug()
   end
end

function Steam.userStats.onGameOverlayActivated(data)
    if data.active then
        print("Steam overlay now active")
    else
        print("Steam overlay now inactive")
    end
end

function love.keypressed(key, scancode, isrepeat)
    menuengine.keypressed(scancode)

    if scancode == "escape" then
        love.event.quit()
    end
end


function love.mousemoved(x, y, dx, dy, istouch)
    menuengine.mousemoved(x, y)
end
