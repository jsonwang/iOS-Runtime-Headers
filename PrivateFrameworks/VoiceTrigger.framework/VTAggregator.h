/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAggregator : NSObject {
    double  _cumulativeDowntime;
    double  _cumulativeUptime;
    unsigned int  _currentState;
    NSString * _languageCode;
    double  _lastAggTime;
    double  _lastAggTimeFalseWakeUp;
    unsigned long long  _numFalseWakeUp;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

+ (id)sharedAggregator;

- (void).cxx_destruct;
- (void)_logUptime;
- (void)cumulativeUptime:(id*)arg1 cumulativeDowntime:(id*)arg2 reset:(BOOL)arg3;
- (id)init;
- (void)logActivation;
- (void)logFalseWakeUp:(BOOL)arg1;
- (void)logRecognizerTimedOut:(id)arg1;
- (void)logSecondPassResult:(BOOL)arg1;
- (void)logTimeVoiceTriggerTransitionsToState:(unsigned int)arg1;
- (void)logZeroRunAudio:(int)arg1;
- (void)setLanguageCode:(id)arg1;

@end
