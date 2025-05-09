ShivervaleTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShivervaleTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ShivervaleTown_PokemonCenter_1F_OnTransition::
# 7 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SHIVERVALE_TOWN
	end


ShivervaleTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 16 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_2
# 25 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_3
ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_1:
# 28 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Text_2
# 30 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 31 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	return

ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_2:
# 17 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 18 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Movement_0
# 20 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 21 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 22 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Movement_1
# 23 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_1

ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_3:
	return


ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth::
# 35 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 36 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 2, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0
# 37 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 2
# 38 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Text_0
# 40 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 41 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 2, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1
# 42 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 2
# 43 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


ShivervaleTown_PokemonCenter_1F_EventScript_MaleandFemalePokemon::
# 47 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 48 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 3, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0
# 49 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 3
# 50 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_MaleandFemalePokemon_Text_0
# 52 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 53 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 3, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1
# 54 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 3
# 55 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


ShivervaleTown_PokemonCenter_1F_EventScript_PokemonCenter::
# 59 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 60 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0
# 61 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 62 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox ShivervaleTown_PokemonCenter_1F_EventScript_PokemonCenter_Text_0
# 64 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 65 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1
# 66 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 67 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


PokemonCenter_EventScript_IVChecker::
# 71 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 72 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0
# 73 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 5
# 74 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	bufferpartymonnick 0, 0
# 75 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_IVChecker_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_IVChecker_Text_1
# 77 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetHpIV
# 78 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 79 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetAtkIV
# 80 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring 1, VAR_RESULT
# 81 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetDefIV
# 82 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring 2, VAR_RESULT
# 83 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_IVChecker_Text_2
# 86 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetSpAtkIV
# 87 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 88 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetSpDefIV
# 89 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring 1, VAR_RESULT
# 90 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetSpeedIV
# 91 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring 2, VAR_RESULT
# 92 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_IVChecker_Text_3
# 96 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


# 19 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Movement_0:
# 19 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 22 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Movement_1:
# 22 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	face_player
# 22 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	walk_in_place_down
	step_end

# 36 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_0:
# 36 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 41 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Movement_1:
# 41 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	face_original_direction
	step_end

ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Text_0:
# 13 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello, and welcome to the POKéMON\n"
	.string "CENTER.\p"
	.string "We restore your tired POKéMON to full\n"
	.string "health.\p"
	.string "Would you like to rest your POKéMON?$"

ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Text_1:
# 18 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Perfect, I'll just need your POKéMON for\n"
	.string "a few moments.$"

ShivervaleTown_PokemonCenter_1F_EventScript_Nurse_Text_2:
# 28 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank you for using the POKéMON\n"
	.string "CENTER.\p"
	.string "Best of luck on your journey!$"

ShivervaleTown_PokemonCenter_1F_EventScript_HMCutSouth_Text_0:
# 38 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "The man at the house to the south of\n"
	.string "here gave me an HM!\p"
	.string "I used it to teach my POKéMON how to\n"
	.string "CUT down skinny trees.$"

ShivervaleTown_PokemonCenter_1F_EventScript_MaleandFemalePokemon_Text_0:
# 50 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
	.string "female POKéMON.\p"
	.string "But no one seems to have any idea how\n"
	.string "they're different.$"

ShivervaleTown_PokemonCenter_1F_EventScript_PokemonCenter_Text_0:
# 62 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Technology has been changing so\n"
	.string "quickly. To think you can now heal\l"
	.string "POKéMON in an instant!\p"
	.string "What's next, a portable communication\n"
	.string "device?$"

PokemonCenter_EventScript_IVChecker_Text_0:
# 75 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello, trainer! I can tell you the hidden\n"
	.string "stats of your POKéMON.$"

PokemonCenter_EventScript_IVChecker_Text_1:
# 76 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Your {STR_VAR_1}...$"

PokemonCenter_EventScript_IVChecker_Text_2:
# 83 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Its HP IV is {STR_VAR_1}.\p"
	.string "Its Attack IV is {STR_VAR_2}.\p"
	.string "Its Defense IV is {STR_VAR_3}.$"

PokemonCenter_EventScript_IVChecker_Text_3:
# 92 "data/maps/ShivervaleTown_PokemonCenter_1F/scripts.pory"
	.string "Its Special Attack IV is\n"
	.string "{STR_VAR_1}.\p"
	.string "Its Special Defense IV is\n"
	.string "{STR_VAR_2}.\p"
	.string "Its Speed IV is {STR_VAR_3}.\p"
	.string "Come back any time!$"
