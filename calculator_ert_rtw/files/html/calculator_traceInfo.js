function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "calculator"};
	this.sidHashMap["calculator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "calculator:9"};
	this.sidHashMap["calculator:9"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "calculator:15"};
	this.sidHashMap["calculator:15"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "calculator:1"};
	this.sidHashMap["calculator:1"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "calculator:4"};
	this.sidHashMap["calculator:4"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Multiply"] = {sid: "calculator:3"};
	this.sidHashMap["calculator:3"] = {rtwname: "<Root>/Multiply"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "calculator:2"};
	this.sidHashMap["calculator:2"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "calculator:10"};
	this.sidHashMap["calculator:10"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "calculator:11"};
	this.sidHashMap["calculator:11"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<Root>/Output2"] = {sid: "calculator:12"};
	this.sidHashMap["calculator:12"] = {rtwname: "<Root>/Output2"};
	this.rtwnameHashMap["<Root>/Output3"] = {sid: "calculator:13"};
	this.sidHashMap["calculator:13"] = {rtwname: "<Root>/Output3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
