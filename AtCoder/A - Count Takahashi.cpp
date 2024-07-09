// Link : https://atcoder.jp/contests/abc359/tasks/abc359_a
/*
SAMSEPI0L
*/
//--------------------------------------------------------------------------------------------------------------------
/*⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣟⢦⡀⣣⠀⠀⠀⠀⣷⡈⠳⣦⣦⠀⠀⣸⢩⣷⣤⣀⡀⠀⢀⣿⣄⢿⣆⠀⠀⢰⡧⢀⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡦⡈⠻⣧⣀⠀⠀⠹⣷⡄⠙⢿⣷⣄⡇⢸⣏⠛⣿⡇⢰⣸⣿⣿⠹⣼⠀⢠⣿⣷⡾⢁⣠⠤⠶⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⣄⣠⣤⣤⣤⣄⣳⣌⡓⠮⣿⣟⣛⡒⡿⠾⠶⣤⡈⠙⢷⠀⠻⣦⠘⢿⣦⣹⣿⣿⣇⢿⣦⣿⠿⠛⠉⠁⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⢀⣴⣞⠋⠉⠉⠉⠀⠀⠘⢿⣷⣶⠝⣷⣮⡉⠲⣆⠈⠻⢦⣌⠃⠀⠀⠉⠳⣝⢻⣿⣾⠙⡞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠱⣄⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠴⣍⠑⠖⠚⠛⠓⠚⠻⢾⡷⠶⢶⣄⡀⠙⢿⣦⠘⠻⢿⡄⠈⠳⣄⣳⡈⠁⠀⠀⠀⣤⠀⠀⢩⡿⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣧⠀⠀⠀
                                ⠀⠀⠀⠀⣠⠤⠺⣿⢶⣟⣓⡲⣶⣶⣖⣛⡛⠻⢷⣄⣿⣿⡁⠀⠹⣷⡀⠀⠻⣆⠀⠈⢻⣿⣤⠀⠀⠘⣿⡄⠀⢸⡇⢰⠁⠀⠀⠀⠀ NAH,⠀   ⠀⠀⢸⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠼⣷⡢⢽⣳⣦⠉⠛⠿⢿⣖⠠⢿⠚⢿⢿⡄⠀⠀⡄⠀⠀⠈⣷⡄⠀⢻⣿⡆⠀⢠⣿⠀⢀⣿⢀⣿⠀⠀⠀⠀⠀⠀ I,D      ⠀⢸⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣻⣿⢿⣻⣶⣦⠀⠀⢳⣇⢧⠀⠹⢧⡀⠘⣿⡄⠀⠀⠘⣿⣆⠘⡿⣧⠀⢸⡿⠀⣸⢇⣼⣣⠀⠀⠀⠀   WIN      ⠀⢸⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⣠⣶⣫⣥⠎⣉⠙⠻⢿⣷⡀⠈⣟⢦⠳⣄⣈⠁⠀⢿⣿⡄⠀⠀⢻⣿⣧⡃⠈⠀⠘⡇⠀⣿⢾⠟⠁⡄⠀⠀⠀        ⠀⠀⠀⠀⢸⠀⠀⠀
                                ⠀⢰⣦⠀⠀⣠⣞⣫⡭⠭⢭⣭⡶⠖⠂⠀⠀⢹⣦⣌⣮⠳⣌⠻⣷⣤⡈⠻⣿⡄⠀⠀⠙⣿⡀⠀⠀⣰⠑⠚⠙⢿⣿⣿⡇⠀⠀⠀          ⠀⠀⣼⠀⠀⠀
                                ⠀⠈⠻⣷⡶⠿⠥⠄⣐⣒⣋⡥⠤⠔⣀⣀⡈⠛⠫⢭⣛⣻⣮⣇⠈⠻⢿⣆⡈⠓⠄⠀⠀⠈⠓⢀⡌⠁⠀⠀⠀⠀⢱⡘⣟⠀⠀⠀         ⠀⠀⢠⠏⠀⠀⠀
                                ⠀⠀⠀⠹⣿⣟⣭⣶⣴⣊⣽⣖⠭⠓⠀⣀⣠⡤⠒⠀⠀⠈⠉⠛⣳⣤⡤⣈⡩⠃⠀⠀⠀⠀⣠⣿⡿⠂⠀⠀⠀⠀⢸⡇⢘⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠋⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠈⣙⣶⣴⣾⡿⠿⢒⣤⣶⣽⡋⣡⠀⠀⠀⢀⣠⣶⣾⠿⠷⠚⠁⠀⢀⣠⣴⠶⣿⣛⡽⠂⠀⢀⣠⡴⠀⢸⡇⢸⣿⣇⡏⡹⢲⣶⣦⠤⢤⡤⠶⣶⡿⣷⣦⠤⢤⡀⠀
                                ⠀⠀⠀⣠⡾⣫⠟⣛⣥⠶⢒⣽⡿⠛⠉⡴⠃⢠⠠⣶⠿⠛⠉⠀⠀⠀⢀⣀⡄⡽⠛⠁⣰⣿⠟⠁⠀⢶⣫⠏⢀⡴⠛⡃⠀⠹⡿⢰⠃⣸⢿⡟⣤⠈⣿⡆⢿⡿⡍⠀⠀⠀⠀⠀
                                ⠀⠀⣰⣟⡼⣷⠞⣫⣥⠾⣋⣭⣶⡟⣽⠃⣠⣇⡴⠯⠤⡤⢴⣶⢛⡯⢉⡤⠊⣀⣠⣾⣿⠟⣠⠄⣰⣻⣵⡖⠋⣠⡼⢡⡄⡾⠵⠃⠀⢹⡿⣿⣧⣷⡘⢿⣄⢻⣿⣄⠀⠀⠀⠀
                                ⠀⠀⢿⠏⢰⢣⠟⣠⣾⣾⡿⢋⣾⠿⠇⣴⣿⣟⡡⣫⢞⣥⡿⢡⡞⣱⠟⣠⣾⣿⡿⣟⣡⣞⣵⣞⣫⡿⢋⣴⣿⣿⢃⣿⢇⡟⡀⢠⠀⣎⡇⣿⢹⣿⢹⡌⢻⣦⡙⣿⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠹⣷⡾⢋⡴⢫⣴⣿⡟⠳⣼⣿⣿⣿⣾⠗⣩⣾⢃⣾⡾⢁⣼⡿⢛⣵⡾⠟⣻⣿⣟⠷⡿⢡⡾⢫⢏⡿⡿⣿⣸⡇⡇⣸⠘⣿⠃⡟⠘⡏⣾⢻⣸⢧⠙⢿⣆⠀⠀⠀
                                ⠀⠀⠀⠀⠖⢉⣴⡿⠛⡽⣹⢷⣿⣤⣿⣿⢿⣿⡿⢾⣡⣯⣬⣾⠶⢏⣽⠞⣻⣋⡴⣿⡿⡳⢯⡞⢠⠏⣰⠣⣾⡿⣱⢿⣿⡇⡇⣿⢰⠏⡼⣰⡾⣹⣿⡞⣿⡜⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⢿⣃⣠⣾⣿⣿⢾⣿⣻⣿⣿⢺⡿⣧⣀⣩⣿⡶⣾⡟⡻⠁⠴⡻⠋⣼⣿⡽⠁⣾⣆⠋⡴⠯⢹⡿⣿⡟⢸⣿⡇⡇⣷⡏⣰⣷⠟⣱⣿⢸⣾⣇⡇⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠾⠟⠻⢟⡵⣷⣿⣿⣳⢿⣿⣿⣧⢀⣴⢿⣯⣷⢿⣦⣥⣀⣀⡀⢰⣿⡟⠀⢸⡿⡿⣱⣁⣀⣼⣿⡿⠗⠚⣿⡇⡇⣷⣷⢿⠏⢰⢫⣻⡏⣿⡿⠁⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⣀⣠⡾⠿⢾⣿⣿⣿⡁⣿⣿⣻⡏⢻⣷⣾⣿⣷⣶⣮⣌⡉⠛⢿⣾⡼⠀⠀⠸⠿⣱⡿⠛⠉⣁⣼⣥⣶⣶⣿⣿⣇⡿⣹⡼⠀⢻⡏⣿⡿⣾⡇⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠉⠀⠀⢠⣿⠟⣼⠟⣧⡿⣿⠚⣧⠀⢿⣇⠈⢯⡹⢟⡻⣿⡀⠀⢻⡆⠀⠀⠀⣸⣏⠀⠀⣸⡿⢟⣙⣻⡟⠀⣾⣻⣿⣿⡇⠀⣼⡟⣾⣹⡌⠻⣆⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠘⠁⠀⣿⢠⣿⣧⢻⡀⠘⠂⠀⠿⢤⠀⠉⣁⣀⡾⣷⠶⡼⠃⠀⠀⠀⠙⠃⣤⣤⣟⣇⣀⣉⠀⢠⠼⠍⣿⠋⡿⠃⡄⣇⣼⠁⠻⣷⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⠟⢋⣿⣻⣼⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠚⠀⠀⠀⠀⠀⠀⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⣰⠿⠇⠀⢠⢁⣾⠃⠀⠀⠟⠁⠀⠀⠁⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠾⠋⠀⠉⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠁⢀⠺⠀⡑⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣸⠸⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢦⣄⠀⣀⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⣠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠻⣄⠀⠀⠠⠤⣀⣀⡀⠀⣀⣀⣀⣀⣀⣀⣀⣀⣀⠤⠶⠀⠀⢀⣰⢾⠌⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⡄⠘⢧⡀⠀⠀⠀⠘⠻⣟⣏⣩⣭⣭⣽⣿⠟⠀⠀⠀⠀⢀⡴⠞⣹⠳⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠁⠀⠀⢻⣄⠀⠀⠀⠀⠀⠉⠉⠉⠉⠁⠀⠀⠀⠀⠠⢂⡔⠉⢀⣾⣷⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣿⠀⣷⣀⠀⠈⢿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⠟⠁⠀⠀⠞⠉⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣶⣿⣿⣿⠀⠈⣿⣇⠀⠈⢿⣏⠷⣤⣀⣀⠀⠀⠀⣀⣠⣾⣿⠃⠀⠀⠀⠀⠀⢰⣿⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣴⣿⣿⣿⣿⣿⣿⣿⣧⡀⠸⣿⣧⠀⠈⢿⣄⡀⠈⠉⠉⠉⠉⢩⣿⡿⠋⠀⣰⣶⠂⠀⠀⣸⣿⣿⣿⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⢀⣠⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣹⣻⡇⠀⠈⢻⣻⣷⣤⣤⡤⠀⣿⠟⠁⢀⡼⠛⢻⡀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⣀⣤⣴⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣵⣀⠀⠀⢿⣿⣻⡏⠀⢸⠋⠀⣰⡿⠿⢛⣁⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣄⡀⠀⠀⠀⠀⠀
                                ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣬⣽⣋⣁⣀⣀⣀⣰⣿⣷⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣤⣀⣀
                                ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
                                ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
                                ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//--------------------------------------------------------------------------------------------------------------------
/*
ID: abdelrh16
TASK: Your Ride Is Here
LANG: C++
*/
#include <bits/stdc++.h>
#define samsepi0l ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll ;
#define pi pair<ll,ll>
#define pii pair<ll,pair<ll,ll>>
#define F first
#define S second

#define endl "\n"
#define all(x) x.begin(),x.end()
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
void file();
using namespace __gnu_pbds;
using namespace std;
void solve() {
    ll n;
    cin>>n;
    string s;
    map<string,ll>mp;
    while(n--)cin>>s,mp[s]++;
    cout<<mp["Takahashi"];
}
int  main()
{
    samsepi0l;
    file();
    int _ = 1;
    //cin >> _;
    while (_--)
        solve();
    return 0;
}
void file()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif // ONLINE_JUDGE

}
/*

2 -5 3 -3

 */