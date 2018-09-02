void GetAdcAverageValue(void)
{
	uint8_t i;
	uint16_t tempValue[2] = {0,0};
	
	for(i=0;i<10;i++)
	{
		tempValue[0] += ADC_ConvertedValue[i*2];
		tempValue[1] += ADC_ConvertedValue[i*2+1];
	}
	
	adcAverageValue[0] = tempValue[0] / 10;
	adcAverageValue[1] = tempValue[1] / 10;
}


