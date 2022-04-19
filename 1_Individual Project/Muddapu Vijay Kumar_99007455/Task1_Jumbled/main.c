
int main(void)
{
	int wait = LOOP_CYCLES;

	init_config();

	while (1)
	{
		if (key_press_flag)
		{
			if (!wait--)
			{
				wait = LOOP_CYCLES;
				gpiox_toggle(GPIOD, PIN_12);
				key_press_flag = 0;
			}
		}
	}
}