function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["calculator.c:37c44"]=1;
    this.traceFlag["calculator.c:44c45"]=1;
    this.traceFlag["calculator.c:51c45"]=1;
    this.traceFlag["calculator.c:58c45"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["calculator.c:37"]=1;
    this.lineTraceFlag["calculator.c:44"]=1;
    this.lineTraceFlag["calculator.c:51"]=1;
    this.lineTraceFlag["calculator.c:58"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
