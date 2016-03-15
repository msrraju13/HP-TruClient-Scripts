//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Script_View_Action()
{
	lr_start_transaction("TC_CorrelationDemo_TC001_Launch");
	truclient_step("1", "Navigate to 'http://stormhelp.saas.h...amic_value.html'", "snapshot=Action_1.inf");
	lr_end_transaction("TC_CorrelationDemo_TC001_Launch",0);
	lr_start_transaction("TC_CorrelationDemo_TC002_Click_Generate");
	truclient_step("2", "Click on Generate button", "snapshot=Action_2.inf");
	lr_end_transaction("TC_CorrelationDemo_TC002_Click_Generate",0);
	/* Capturing the String with the help of JS on Object Function and writing to the log */
	truclient_step("4", "Evaluate JavaScript var capturedText = objec...2),'Standard');  on No. 13", "snapshot=Action_4.inf");
	/* Capturing the String with the help of Java Script Code Function and writing to the log */
	truclient_step("6", "Evaluate JavaScript code capturedText = document....xt.substr(4,2));", "snapshot=Action_6.inf");
	/* Capturign the String with the help of Verify Function and writing to the log */
	truclient_step("8", "Get Visible Text from No. 13", "snapshot=Action_8.inf");
	truclient_step("9", "Evaluate JavaScript code TC.log('Captured String ...,2),'Standard');", "snapshot=Action_9.inf");
}
