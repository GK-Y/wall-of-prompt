# Core idea

- [inspiration](https://x.com/buildwithsid/status/2110732049661485084)

- goal is to build the above demo which is an ascii live image of wallpapers and is made up of words which act as some sort of shaders for any wallpaper

- we have to make it live or static and we will build both word version and all ascii characters version
- the word version will first be built however rather than gibberish sentences or words we will use the input as the prompts the user sends to llms
- so as the day does by the wallpaper is initially blank but slowly but surely it fills up letting us see the wallpaper finally

- so v0 scoped version will be :

- first lets just break down the project :

- static :
  - input text
  - wallpaper -> masking(only some of the wallaper is generated)-> ascii wallpaper convertor
  - generates the wallpaper.png
