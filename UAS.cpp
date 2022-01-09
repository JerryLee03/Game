#include <iostream>
using namespace std;

int main()
{
	int MM, choice, answer = 2, answer2 = 2, stop = 2, j, battle = 2;
	int Php, Php2 = 100, Ehp, Ehp2, Hit = 3, Slash = 9, Bash = 6, Thrust = 12, Eatk, Gold = 0, Exp = 0, Lv = 1;
	int Mob, town, eq, BS;
	Php = Php2;
	string name;
	string EnemyP[5] = { "Slime \tLv 3", "Beego \tLv 5", "Ent\t\tLv 7", "Zezavel \tLv 10" , "Back To Town" };

Menu:
	system("cls");
	cout << "\tThe Adventures Of Yosef"
		<< "\n1.Start"
		<< "\n2.Quit\n"
		<< "Pick using number: ";
	cin >> MM;
	switch (MM)
	{
	case 1:
		system("cls");
		cout << "\n\n\tYou wake up in the middle of a weird world\n\n\n";
		system("pause");
		cout << "\n\n\tAfter you wander around you hear someone screaming\n\n\n";
		system("pause");
		cout << "\n\n\tYou see someone who you don't know being atacked by a slime\n\n\n";
		system("pause");
		cout << "\n\n\tYou run and help that stranger\n\n\n";
		system("pause");

	bb:
		system("cls");
		cout << "Battle begins\n\n";
		system("pause");
		Php = 100;
		Ehp2 = 9;
		Eatk = 10;
		Ehp = Ehp2;
		cout << "\n\nSlime lv 1"
			<< "\nHp: 9"
			<< "\nYour Hp:" << Php << "\n\n";
		system("pause");
		do
		{
			stop = 2;
			if (Ehp >= 0)
			{
				cout << "\nSlime uses Basic Atk";
				Php -= Eatk; // Php = Php - Eatk
				cout << "\nYour hp " << Php << "/" << Php2;
				if (Php == 0)
				{
					stop = 1;
					cout << "\nDefeated\n";
				}
				else if (Php > 0)
				{
					cout << "\nYour turn:"
						<< "\n1.Hit";
					if (Lv >= 6) { cout << "\t3.Slash"; };
					if (Lv >= 3) { cout << "\n2.Bash"; };
					if (Lv >= 9) { cout << "\t4.Thrust"; };
					cout << "\nPick using number: ";
					cin >> choice;

					if (choice == 1) { Ehp -= Hit; }
					if (choice == 2 && Lv >= 3) { Ehp -= Bash; }
					if (choice == 3 && Lv >= 6) { Ehp -= Slash; }
					if (choice == 4 && Lv >= 9) { Ehp -= Thrust; }
					cout << "\nSlime hp" << Ehp << "/" << Ehp2;
				}
			}

			if (Ehp <= 0)
			{
				stop = 1;
				system("cls");
				cout << "\tYou Win\n";
				Gold += 10;
				cout << "You got 10 gold\n";
				Exp += 5;
				cout << "You got 5 EXP\n\n";
				cout << "|| " << Exp << " || " << Lv << " || " << Gold << " ||\n\n";
				if (Exp == 5 && Lv <= 1)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 10 && Lv <= 2)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 20 && Lv <= 3)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 40 && Lv <= 4)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 80 && Lv <= 5)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 160 && Lv <= 6)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 320 && Lv <= 7)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 640 && Lv <= 8)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
				if (Exp == 1280 && Lv <= 9)
				{
					Lv += 1;
					cout << "Level Up ! \n Level : " << Lv << "\n";
				}
			}
		} while (Php != 0 && stop == 2);
		if (Php <= 0)
		{
			cout << "\n\t Do you want to restart the battle ? "
				<< "\n\t\t1.Yes\t2.No"
				<< "\n\t Pick using number: ";
			cin >> answer2;
			if (answer2 == 1) {
				goto bb;
			}
			else {
				system("cls");
				cout << "\n\n\n\t______________________________\n\n\n";
				cout << "\t~ ~ ~ Thanks For Playing ~ ~ ~\n\n";
				cout << "\t______________________________\n\n\n";
				return 0;
			}
		}

		system("pause");
		system("cls");
		cout << "???:"
			<< "\nOh thank you very much for saving me"
			<< "\nit seems that you're lost\n\n";
		system("pause");
		cout << "\n???:"
			<< "\nAnd...you dont seems to belong here too.....\n\n";
		system("pause");
		cout << "\n???:"
			<< "\nHmmm thats weird I've never seen someone like you here\n\n";
		system("pause");
		cout << "\n???:"
			<< "\nAh sorry my bad I forgot to introduce myself\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nJust call me Moin so where are you goin to?\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nWHAAAATTTT YOU LOST YOUR MEMORY?\n\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nSo you don't remeber who you are or where you are going?\n\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nLets go to the nearby town first\n\n";
		system("pause");
		system("cls");
		cout << "\n\n\tYou and Moin arrive at Rikin village"
			<< "\n\tYour Hp is fully restored"
			<< "\n\n\n";
		Php = Php2;
		system("pause");
		cout << "\nMoin :"
			<< "\nHmmm I never got your name"
			<< "\nwait nevermind I forgot that you lost your memory\n\n";
		system("pause");
		cout << "\n\nEnter your name: ";
		cin >> name;
		cout << "\n\n"
			<< name << ":"
			<< "\nMy name is " << name << "\n\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nEh???"
			<< "\nSo you still remember your name huh\n\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nOk " << name << " before we go"
			<< "\nlet's go buy some equipment"
			<< "\nits dangerous to wander around with only that disgusting stick\n\n";
		system("pause");
		system("cls");
		cout << "\n\n\tYou and Moin arrive at the Blacksmith\n\n\n";
		system("pause");
		cout << "\nMr Blacksmith:"
			<< "\nWell hello there never seen you before, need somethin little fella?\n\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nYeah we need some proper equipment for this lost kid\n\n";
		system("pause");
		cout << "\nMr Blacksmith:"
			<< "\nOh i see..."
			<< "\nthat stick ain't good for battlin kid\n\n";
		system("pause");
		cout << "\nHere use this it's from my old pal"
			<< "\nhe already quit long time ago\n\n";
		system("pause");
		cout << "\n\n\tYou got a Wooden Sword\n\n\n";
		system("pause");
		cout << "\n"
			<< name << ":"
			<< "\nSorry but i only have 10 gold right now\n\n";
		system("pause");
		cout << "\nMr Blacksmith:"
			<< "\nAh its free don't think about it\n\n";
		system("pause");
		cout << "\n"
			<< name << ":"
			<< "\nThank you very much Mr Blacksmith\n\n";
		system("pause");
		cout << "\n\n\tYou and Moin left the Blacksmith\n\n\n";
		system("pause");
		system("cls");
		cout << "Moin:"
			<< "\nLet's go to the plains shall we?\n\n";
		system("pause");
		cout << "\n"
			<< name << ":"
			<< "\nHmm?\n\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nTo test your new weapon of course\n\n";
		system("pause");
		cout << "\n"
			<< name << ":"
			<< "\nAh okay let's go then\n\n";
		system("pause");
		system("cls");
		cout << "\n\n\tYou and Moin arrive at the Plains\n\n\n";
		system("pause");
		cout << "\nMoin:"
			<< "\nLook there's a lot of enemies here\n\n";
		system("pause");
		cout << "\n\n";
	bbMain:
		answer2 = 0;
		battle = 2;
		system("cls");
		cout << "Plains\n";
		for (j = 0; j < 5; j++)
		{
			cout << j + 1 << ". " << EnemyP[j] << "\n";
		}
		cout << "Pick using a number: ";
		cin >> Mob;
		while (battle == 2)
		{
			switch (Mob)
			{
			case 1:
			bb1:
				if (Php <= 0 || Php == 0)
				{
					system("cls");
					cout << "Moin :"
						<< "\nOMG look at your Hp!\n\n";
					system("pause");
					cout << "\nHp : " << Php << "\n"
						<< "\nMoin : "
						<< "\nAre you sure you want to continue with that Hp??"
						<< "\nLet's go back first\n\n";
					system("pause");
					goto BTT;
				}
				else
				{
					system("cls");
					cout << "The battle begins!\n\n";
					system("pause");
					Ehp2 = 10;
					Eatk = 10;
					Ehp = Ehp2;
					cout << "\n\nSlime lv 3"
						<< "\nHp: 10"
						<< "\nYour Hp:" << Php << "\n\n";
					system("pause");
					do
					{
						stop = 2;
						if (Ehp >= 0)
						{
							cout << "\nSlime uses Melt";
							Php -= Eatk; // Php = Php - Eatk
							cout << "\nYour hp " << Php << "/" << Php2;
							if (Php == 0)
							{
								stop = 1;
								cout << "\nDefeated\n";
							}
							else if (Php > 0)
							{
								cout << "\nYour turn:"
									<< "\n1.Hit";
								if (Lv >= 6) { cout << "\t3.Slash"; };
								if (Lv >= 3) { cout << "\n2.Bash"; };
								if (Lv >= 9) { cout << "\t4.Thrust"; };
								cout << "\nPick using a number: ";
								cin >> choice;

								if (choice == 1) { Ehp -= Hit; }
								if (choice == 2 && Lv >= 3) { Ehp -= Bash; }
								if (choice == 3 && Lv >= 6) { Ehp -= Slash; }
								if (choice == 4 && Lv >= 9) { Ehp -= Thrust; }
								cout << "\nSlime hp" << Ehp << "/" << Ehp2;
							}
						}

						if (Ehp <= 0)
						{
							stop = 1;
							system("cls");
							cout << "\tYou Win\n";
							Gold += 10;
							cout << "You got 10 gold\n";
							Exp += 5;
							cout << "You got 5 EXP\n\n";
							cout << "|| " << Exp << " || " << Lv << " || " << Gold << " ||\n\n";
							if (Exp == 5 && Lv <= 1)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 10 && Lv <= 2)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 20 && Lv <= 3)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 40 && Lv <= 4)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 80 && Lv <= 5)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 160 && Lv <= 6)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 320 && Lv <= 7)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 640 && Lv <= 8)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 1280 && Lv <= 9)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							system("pause");
							system("cls");
							goto bbMain;
						}
					} while (Php != 0 && stop == 2 && Php >= 0);
					if (Php <= 0)
					{
						cout << "\n\t Do you want to restart the battle ? "
							<< "\n\t\t1.Yes\t2.No"
							<< "\n\t Pick using a number: ";
						cin >> answer2;
						if (answer2 == 1) {
							goto bb1;
						}
						else {
							system("cls");
							cout << "\n\n\n\t______________________________\n\n\n";
							cout << "\t~ ~ ~ Thanks For Playing ~ ~ ~\n\n";
							cout << "\t______________________________\n\n\n";
							return 0;
						}
					}
				}
				break;

			case 2:
			bb2:
				if (Php <= 0 || Php == 0)
				{
					system("cls");
					cout << "Moin :"
						<< "\nOMG look at your Hp!\n\n";
					system("pause");
					cout << "\nHp : " << Php << "\n"
						<< "\nMoin : "
						<< "\nAre you sure you want to continue with that Hp??"
						<< "\nLet's go back first\n\n";
					system("pause");
					goto BTT;
				}
				else
				{
					system("cls");
					cout << "Battle begins\n\n";
					system("pause");
					Ehp2 = 18;
					Eatk = 15;
					Ehp = Ehp2;
					cout << "\n\nBeego lv 5"
						<< "\nHp: 18"
						<< "\nYour Hp:" << Php << "\n\n";
					system("pause");
					do
					{
						stop = 2;
						if (Ehp >= 0)
						{
							cout << "\nBeego uses Sting";
							Php -= Eatk; // Php = Php - Eatk
							cout << "\nYour hp " << Php << "/" << Php2;
							if (Php == 0)
							{
								stop = 1;
								cout << "\nDefeated\n";
							}
							else if (Php > 0)
							{
								cout << "\nYour turn:"
									<< "\n1.Hit";
								if (Lv >= 6) { cout << "\t3.Slash"; };
								if (Lv >= 3) { cout << "\n2.Bash"; };
								if (Lv >= 9) { cout << "\t4.Thrust"; };
								cout << "\nPick using a number: ";
								cin >> choice;

								if (choice == 1) { Ehp -= Hit; }
								if (choice == 2 && Lv >= 3) { Ehp -= Bash; }
								if (choice == 3 && Lv >= 6) { Ehp -= Slash; }
								if (choice == 4 && Lv >= 9) { Ehp -= Thrust; }
								cout << "\nBeego hp" << Ehp << "/" << Ehp2;
							}
						}

						if (Ehp <= 0)
						{
							stop = 1;
							system("cls");
							cout << "\tYou Win\n";
							Gold += 18;
							cout << "You got 18 gold\n";
							Exp += 9;
							cout << "You got 9 EXP\n\n";
							cout << "|| " << Exp << " || " << Lv << " || " << Gold << " ||\n\n";
							if (Exp == 5 && Lv <= 1)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 10 && Lv <= 2)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 20 && Lv <= 3)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 40 && Lv <= 4)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 80 && Lv <= 5)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 160 && Lv <= 6)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 320 && Lv <= 7)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 640 && Lv <= 8)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 1280 && Lv <= 9)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							system("pause");
							system("cls");
							goto bbMain;
						}
					} while (Php != 0 && stop == 2 && Php >= 0);
					if (Php <= 0)
					{
						cout << "\n\t Do you want to restart the battle ? "
							<< "\n\t\t1.Yes\t2.No"
							<< "\n\t Pick using a number: ";
						cin >> answer2;
						if (answer2 == 1) {
							goto bb2;
						}
						else {
							system("cls");
							cout << "\n\n\n\t______________________________\n\n\n";
							cout << "\t~ ~ ~ Thanks For Playing ~ ~ ~\n\n";
							cout << "\t______________________________\n\n\n";
							return 0;
						}
					}
				}
				break;

			case 3:
			bb3:
				if (Php <= 0 || Php == 0)
				{
					system("cls");
					cout << "Moin :"
						<< "\nOMG look at your Hp!\n\n";
					system("pause");
					cout << "\nHp : " << Php << "\n"
						<< "\nMoin : "
						<< "\nAre you sure you want to continue with that Hp??"
						<< "\nLet's go back first\n\n";
					system("pause");
					goto BTT;
				}
				else
				{
					system("cls");
					cout << "Battle begins\n\n";
					system("pause");
					Ehp2 = 30;
					Eatk = 25;
					Ehp = Ehp2;
					cout << "\n\nEnt lv 7"
						<< "\nHp: 30"
						<< "\nYour Hp:" << Php << "\n\n";
					system("pause");
					do
					{
						stop = 2;
						if (Ehp >= 0)
						{
							cout << "\nEnt uses Tangle";
							Php -= Eatk; // Php = Php - Eatk
							cout << "\nYour hp " << Php << "/" << Php2;
							if (Php == 0)
							{
								stop = 1;
								cout << "\nDefeated\n";
							}
							else if (Php > 0)
							{
								cout << "\nYour turn:"
									<< "\n1.Hit";
								if (Lv >= 6) { cout << "\t3.Slash"; };
								if (Lv >= 3) { cout << "\n2.Bash"; };
								if (Lv >= 9) { cout << "\t4.Thrust"; };
								cout << "\nPick using number: ";
								cin >> choice;
								if (choice == 1) { Ehp -= Hit; }
								if (choice == 2 && Lv >= 3) { Ehp -= Bash; }
								if (choice == 3 && Lv >= 6) { Ehp -= Slash; }
								if (choice == 4 && Lv >= 9) { Ehp -= Thrust; }
								cout << "\nEnt hp" << Ehp << "/" << Ehp2;
							}
						}
						if (Ehp <= 0)
						{
							stop = 1;
							system("cls");
							cout << "\tYou Win\n";
							Gold += 30;
							cout << "You got 30 gold\n";
							Exp += 15;
							cout << "You got 15 EXP\n\n";
							cout << "|| " << Exp << " || " << Lv << " || " << Gold << " ||\n\n";
							if (Exp == 5 && Lv <= 1)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 10 && Lv <= 2)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 20 && Lv <= 3)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 40 && Lv <= 4)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 80 && Lv <= 5)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 160 && Lv <= 6)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 320 && Lv <= 7)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 640 && Lv <= 8)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 1280 && Lv <= 9)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							system("pause");
							system("cls");
							goto bbMain;
						}
					} while (Php != 0 && stop == 2 && Php >= 0);
					if (Php <= 0)
					{
						cout << "\n\t Do you want to restart the battle ? "
							<< "\n\t\t1.Yes\t2.No"
							<< "\n\t Pick using a number: ";
						cin >> answer2;
						if (answer2 == 1)
						{
							goto bb3;
						}
						else
						{
							system("cls");
							cout << "\n\n\n\t______________________________\n\n\n";
							cout << "\t~ ~ ~ Thanks For Playing ~ ~ ~\n\n";
							cout << "\t______________________________\n\n\n";
							return 0;
						}
					}
				}
				break;

			case 4:
			bb4:
				if (Php <= 0 || Php == 0)
				{
					system("cls");
					cout << "Moin :"
						<< "\nOMG look at your Hp!\n\n";
					system("pause");
					cout << "\nHp : " << Php << "\n"
						<< "\nMoin : "
						<< "\nAre you sure you want to continue with that Hp??"
						<< "\nLet's go back first\n\n";
					system("pause");
					goto BTT;
				}
				else
				{
					system("cls");
					cout << "Battle begins\n\n";
					system("pause");
					Ehp2 = 50;
					Eatk = 30;
					Ehp = Ehp2;
					cout << "\n\nZezavel lv 10"
						<< "\nHp: 50"
						<< "\nYour Hp:" << Php << "\n\n";
					system("pause");
					do
					{
						stop = 2;
						if (Ehp >= 0)
						{
							cout << "\nZezavel uses Chicken Slam";
							Php -= Eatk; // Php = Php - Eatk
							if (Php == 0 || Php <= 0)
							{
								cout << "\nYou're DEAD\n\n";
								system("cls");
							}
							else
							{
								cout << "\nYour hp " << Php << "/" << Php2;
							}
							if (Php == 0 || Php <= 0)
							{
								stop = 1;
								system("cls");
								cout << "\n\n\t\t________\n\n\n"
									<< "\t\tDEFEATED\n\n"
									<< "\t\t________\n\n\n\n";

								system("pause");
							}
							else if (Php > 0)
							{
								cout << "\nYour turn:"
									<< "\n1.Hit";
								if (Lv >= 6) { cout << "\t3.Slash"; };
								if (Lv >= 3) { cout << "\n2.Bash"; };
								if (Lv >= 9) { cout << "\t4.Thrust"; };
								cout << "\nPick using a number: ";
								cin >> choice;

								if (choice == 1) { Ehp -= Hit; }
								if (choice == 2 && Lv >= 3) { Ehp -= Bash; }
								if (choice == 3 && Lv >= 6) { Ehp -= Slash; }
								if (choice == 4 && Lv >= 9) { Ehp -= Thrust; }
								cout << "\nZezavel Hp" << Ehp << "/" << Ehp2;
							}
						}

						if (Ehp <= 0)
						{
							stop = 1;
							system("cls");
							cout << "\tYou Win\n";
							Gold += 50;
							cout << "You got 50 gold\n";
							Exp += 25;
							cout << "You got 25 EXP\n\n";
							cout << "|| " << Exp << " || " << Lv << " || " << Gold << " ||\n\n";
							if (Exp == 5 && Lv <= 1)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 10 && Lv <= 2)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 20 && Lv <= 3)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 40 && Lv <= 4)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 80 && Lv <= 5)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 160 && Lv <= 6)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 320 && Lv <= 7)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 640 && Lv <= 8)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							if (Exp == 1280 && Lv <= 9)
							{
								Lv += 1;
								cout << "Level Up ! \n Level : " << Lv << "\n";
							}
							system("pause");
							system("cls");
							goto bbMain;
						}
					} while (Php != 0 && stop == 2 && Php >= 0);
					if (Php <= 0)
					{
						cout << "\n\t Do you want to restart the battle ? "
							<< "\n\t\t1.Yes\t2.No"
							<< "\n\t Pick using a number: ";
						cin >> answer2;
						if (answer2 == 1) {
							goto bb4;
						}
						else
						{
							system("cls");
							cout << "\n\n\n\t______________________________\n\n\n";
							cout << "\t~ ~ ~ Thanks For Playing ~ ~ ~\n\n";
							cout << "\t______________________________\n\n\n";
							return 0;
						}
					}
				}
				break;

			case 5:
				battle = 1;
				system("cls");
				cout << "Are you sure you want to go to Rikin Town?"
					<< "\n1. Yes\n2. No"
					<< "\nPick using number: ";
				cin >> answer2;
				if (answer2 == 1) { goto BTT; }
				else if (answer2 == 2) { goto bbMain; }
				break;
			default:
				cout << "Wrong Input.\n";
				system("pause");
				goto bbMain;
				break;
			}
		}
	BTT:
		system("cls");
		cout << "\n\nYou and Moin arrive at Rikin village"
			<< "\nYour Hp is fully restored"
			<< "\n\n\n";
		Php = Php2;
		system("pause");
		system("cls");
	TW:
		system("cls");
		cout << "Rikin Town\n\n"
			<< "1. Blacksmith\n"
			<< "2. Plains\n"
			<< "pick using number: ";
		cin >> town;
		switch (town)
		{
		case 1:
			system("cls");
			cout << "Mr Blacksmith:"
				<< "\nWell hello there need somethin' kid?\n\n";
			system("pause");
			cout << "\n";
		SH1:
			system("cls");
			cout << "1. Buy"
				<< "\t\t Gold: " << Gold
				<< "\n2. Quit\n"
				<< "pick using a number: ";
			cin >> BS;
			switch (BS)
			{
			case 1:
			SH2:
				system("cls");
				cout << "1. Upgrade Your Sword\t"
					<< "250 Gold"
					<< "\t\t Gold: " << Gold
					<< "\n2. Upgrade Your Mail\t"
					<< "300 Gold"
					<< "\n3. Back"
					<< "\nPick using a number: ";
				cin >> eq;
				switch (eq)
				{
				case 1:
					if (Gold >= 250)
					{
						Gold -= 250;
						Hit += 5;
						Bash += 5;
						Slash += 5;
						Thrust += 5;
						cout << "\nYour Sword got stronger"
							<< "\nYour Gold right now: " << Gold
							<< "\n\n";
						system("pause");
						system("cls");
						goto SH2;
					}
					else if (Gold <= 250)
					{
						system("cls");
						cout << "\nYour Gold is not enough\n\n";
						system("pause");
					}
					goto SH2;
					break;

				case 2:
					if (Gold >= 300)
					{
						Php2 += 50;
						Gold -= 300;
						cout << "\nYour Mail got strongger"
							<< "\nYour Gold right now: " << Gold
							<< "\n\n";
						system("pause");
						system("cls");
						goto SH2;
					}
					else if (Gold <= 300)
					{
						system("cls");
						cout << "\nYour Gold is not enough\n\n";
						system("pause");
					}
					goto SH2;
					break;

				case 3:
					system("cls");
					goto SH1;
					break;

				default:
					cout << "Wrong Input.\n";
					system("pause");
					goto SH2;
				}
				break;

			case 2:
				system("cls");
				cout << "Mr Blacksmith:"
					<< "\nThanks for comin'\n\n";
				system("pause");
				goto TW;
				break;

			default:
				cout << "Wrong Input.\n";
				system("pause");
				goto SH1;
			}
			break;

		case 2:
			goto bbMain;
			break;

		default:
			cout << "Wrong Input.";
			system("pause");
			goto TW;
			break;
		}
		break;
	case 2:

		cout << "\n\t Are you sure want to quit ?"
			<< "\n\t\t1.Yes\t2.No"
			<< "\n\t Pick using number: ";
		cin >> answer;
		if (answer == 1)
		{
			system("cls");
			cout << "\n\n\n\t______________________________\n\n\n";
			cout << "\t~ ~ ~ Thanks For Playing ~ ~ ~\n\n";
			cout << "\t______________________________\n\n\n";
			return 0;
		}
		else if (answer == 2)
		{
			goto Menu;
		}
		else {
			cout << "Wrong Input.\n";
			system("pause");
			goto Menu;
		}
		break;
	default:
		MM = 0;
		cout << "Wrong Input.\n";
		system("pause");
		goto Menu;
	}
}