ShivervaleTown_CuttersHouse_MapScripts::
	.byte 0


ShivervaleTown_CuttersHouse_EventScript_Hiker::
# 6 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, ShivervaleTown_CuttersHouse_EventScript_Hiker_1
# 14 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_CUT, ShivervaleTown_CuttersHouse_EventScript_Hiker_2
	return

ShivervaleTown_CuttersHouse_EventScript_Hiker_1:
# 7 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	lock
# 8 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	applymovement 1, ShivervaleTown_CuttersHouse_EventScript_Hiker_Movement_0
# 9 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	waitmovement 1
# 10 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	msgbox ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_0
# 11 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	closemessage
# 12 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	release
	return

ShivervaleTown_CuttersHouse_EventScript_Hiker_2:
# 15 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	applymovement 1, ShivervaleTown_CuttersHouse_EventScript_Hiker_Movement_0
# 16 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	waitmovement 1
# 17 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	msgbox ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_1
# 20 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	closemessage
# 21 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	giveitem ITEM_HM01
# 22 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 23 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	release
	return


# 8 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
ShivervaleTown_CuttersHouse_EventScript_Hiker_Movement_0:
# 8 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	face_player
	step_end

ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_0:
# 10 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	.string "I've heard stories of strange Pokémon\n"
	.string "in the Evergreen Forest. Stay safe!$"

ShivervaleTown_CuttersHouse_EventScript_Hiker_Text_1:
# 17 "data/maps/ShivervaleTown_CuttersHouse/scripts.pory"
	.string "I've noticed some strange trees\n"
	.string "blocking the path to Evergreen Forest.\p"
	.string "I thought this Hidden Machine would\n"
	.string "help, but I can't get it to work. Maybe\l"
	.string "you can figure it out.\p"
	.string "Apparently, you don't even have to\n"
	.string "teach the move to a Pokémon. It can\l"
	.string "just use it if it's able to learn the\l"
	.string "move!$"
