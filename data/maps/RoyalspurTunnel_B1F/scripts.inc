RoyalspurTunnel_B1F_MapScripts::
	.byte 0


RoyalspurTunnel_B1F_EventScript_Ball1::
# 6 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	lock
# 7 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	removeobject 1
# 8 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL
# 9 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	release
	return


RoyalspurTunnel_B1F_EventScript_Ball2::
# 13 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	lock
# 14 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	removeobject 2
# 15 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 16 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	release
	return


RoyalspurTunnel_B1F_EventScript_Ball3::
# 20 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	lock
# 21 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	removeobject 3
# 22 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	giveitem ITEM_ZAP_PLATE
# 23 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	release
	return


RoyalspurTunnel_B1F_EventScript_Ball4::
# 27 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	lock
# 28 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	removeobject 4
# 29 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	giveitem ITEM_CELL_BATTERY
# 30 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	release
	return


RoyalspurTunnel_B1F_EventScript_Scientist1::
# 34 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	lock
# 35 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	applymovement 5, RoyalspurTunnel_B1F_EventScript_Scientist1_Movement_0
# 36 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	waitmovement 5
# 37 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	msgbox RoyalspurTunnel_B1F_EventScript_Scientist1_Text_0
# 41 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	closemessage
# 42 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	applymovement 5, RoyalspurTunnel_B1F_EventScript_Scientist1_Movement_1
# 43 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	waitmovement 5
# 44 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	release
	return


RoyalspurTunnel_B1F_EventScript_Scientist2::
# 48 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	lock
# 49 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	applymovement 6, RoyalspurTunnel_B1F_EventScript_Scientist1_Movement_0
# 50 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	waitmovement 6
# 51 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	msgbox RoyalspurTunnel_B1F_EventScript_Scientist2_Text_0
# 54 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	closemessage
# 55 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	applymovement 6, RoyalspurTunnel_B1F_EventScript_Scientist1_Movement_1
# 56 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	waitmovement 6
# 57 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	release
	return


# 35 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
RoyalspurTunnel_B1F_EventScript_Scientist1_Movement_0:
# 35 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	face_player
	step_end

# 42 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
RoyalspurTunnel_B1F_EventScript_Scientist1_Movement_1:
# 42 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	face_original_direction
	step_end

RoyalspurTunnel_B1F_EventScript_Scientist1_Text_0:
# 37 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	.string "Wait, what are you doing down here?\p"
	.string "...\p"
	.string "Oh, we thought the darkness would\n"
	.string "deter people from coming down here.\p"
	.string "Just try not to break anything, we have\n"
	.string "a lot of valuable equipment down here.$"

RoyalspurTunnel_B1F_EventScript_Scientist2_Text_0:
# 51 "data/maps/RoyalspurTunnel_B1F/scripts.pory"
	.string "Ah, a young scientist coming here to\n"
	.string "learn more about our machines, how\l"
	.string "exciting!\p"
	.string "These generators down here help\n"
	.string "harness the natural flowing electrical\l"
	.string "energy from the mountain and power\l"
	.string "Royalspur City, and it doesn't harm the\l"
	.string "natural environment!.\p"
	.string "We are currently experimenting to find\n"
	.string "a way to send this energy to other\l"
	.string "cities and towns throughout Shizen.$"
