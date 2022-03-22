function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["calculater_sub_sys.c:38c60"]=1;
    this.traceFlag["calculater_sub_sys.c:46c61"]=1;
    this.traceFlag["calculater_sub_sys.c:54c61"]=1;
    this.traceFlag["calculater_sub_sys.c:62c61"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["calculater_sub_sys.c:38"]=1;
    this.lineTraceFlag["calculater_sub_sys.c:39"]=1;
    this.lineTraceFlag["calculater_sub_sys.c:46"]=1;
    this.lineTraceFlag["calculater_sub_sys.c:47"]=1;
    this.lineTraceFlag["calculater_sub_sys.c:54"]=1;
    this.lineTraceFlag["calculater_sub_sys.c:55"]=1;
    this.lineTraceFlag["calculater_sub_sys.c:62"]=1;
    this.lineTraceFlag["calculater_sub_sys.c:63"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
