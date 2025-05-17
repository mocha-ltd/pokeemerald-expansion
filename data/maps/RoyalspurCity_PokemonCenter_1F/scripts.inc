RoyalspurCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RoyalspurCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


RoyalspurCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROYALSPUR_CITY
	end


RoyalspurCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	msgbox RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 16 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_2
# 25 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_3
RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_1:
# 28 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	msgbox RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Text_2
# 30 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 31 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	release
	return

RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_2:
# 17 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 18 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	msgbox RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 1, RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Movement_0
# 20 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 21 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 22 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 1, RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Movement_1
# 23 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_1

RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_3:
	return


RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC::
# 35 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	lock
# 36 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_0
# 37 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 3
# 38 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	msgbox RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Text_0
# 40 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 41 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_1
# 42 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 3
# 43 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	release
	return


RoyalspurCity_PokemonCenter_1F_EventScript_PokeCentersAreGreat::
# 47 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	lock
# 48 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_0
# 49 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 50 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	msgbox RoyalspurCity_PokemonCenter_1F_EventScript_PokeCentersAreGreat_Text_0
# 52 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 53 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_1
# 54 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 55 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	release
	return


# 19 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Movement_0:
# 19 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 22 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Movement_1:
# 22 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	face_player
# 22 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	walk_in_place_down
	step_end

# 36 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_0:
# 36 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 41 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Movement_1:
# 41 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	face_original_direction
	step_end

RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Text_0:
# 13 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, and welcome to the POKéMON\n"
	.string "CENTER.\p"
	.string "We restore your tired POKéMON to full\n"
	.string "health.\p"
	.string "Would you like to rest your POKéMON?$"

RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Text_1:
# 18 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	.string "Perfect, I'll just need your POKéMON for\n"
	.string "a few moments.$"

RoyalspurCity_PokemonCenter_1F_EventScript_Nurse_Text_2:
# 28 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	.string "Thank you for using the POKéMON\n"
	.string "CENTER.\p"
	.string "Best of luck on your journey!$"

RoyalspurCity_PokemonCenter_1F_EventScript_TrainersCanUsePC_Text_0:
# 38 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is for any\n"
	.string "Pokémon Trainer to use.\p"
	.string "Naturally, that means you're welcome to\n"
	.string "use it, too.$"

RoyalspurCity_PokemonCenter_1F_EventScript_PokeCentersAreGreat_Text_0:
# 50 "data/maps/RoyalspurCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon Centers are great! You can use\n"
	.string "their services as much as you like, and\l"
	.string "it's all for free.\p"
	.string "You never have to worry!$"
